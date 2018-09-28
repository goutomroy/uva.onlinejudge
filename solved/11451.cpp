#include<iostream.h>
#define sz 22

int po[sz], m[sz], len, c, s, max;

int backtrack(int k, int cs, int color[])
{
	int i, t, l1, r1, dum[sz], j ;
	k++;
	if(k > s)
		return 0;
	for(i = 0; i <= m[k]; i++)
	{
		if(cs+i > c)
			break;
		if(i == 0)
		{
			backtrack(k, cs+i, color);
			continue;
		}

		l1 = po[k] - i;
		r1 = po[k] + i;

		for(j = 1; j <= len; j++) 
			dum[j] = color[j];

		for(j = l1; j <= r1; j++) 
			dum[j] = 1;

		for(j = 1, t = 0; j <= len; j++)
			if(dum[j])
				t++;

			if(t > max)
				max = t;
        	backtrack(k, cs+i, dum);
	}
	return 0;
}

int main()
{
	int cas, i, color[sz] ;
	cin >> cas;
	while(cas--)
	{
		cin >> len;

		cin >> s;

		for(i = 1; i <= s; i++)  cin >> po[i];

		cin >> c;

		for(i = 1; i <= s; i++) cin >> m[i]; 
		
		for(i = 1; i <= len; i++) color[i] = 0;

		max = 0; backtrack(0, 0, color);

		cout << max << endl;
	}
	return 0;
}