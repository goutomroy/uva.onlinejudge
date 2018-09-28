#include<iostream>
#include<map>
#include<string>
#define sz 200005
using namespace std;

long p[sz], rank[sz], len[sz];
long edge;

int init()
{
	long i;

	for( i = 1; i <= edge*2; i++ )
	{
		len[i] = 1;
		rank[i] = 0;
		p[i] = i;
	}
	return 0;
}

long Find_set(long num)
{
	if(num!=p[num])
		p[num]=Find_set(p[num]);

	return p[num];
}

int Link(long x,long y)
{
	if(rank[x]>rank[y])
	{
		p[y]=x;
		len[x] += len[y];
		cout << len[x] << endl;
	}
	else
	{
		p[x]=y;
		len[y] += len[x];
		cout << len[y] << endl;
		if(rank[x]==rank[y])
			rank[y]++;
	}
	return 0;
}

int main()
{
	long cas, i, x, y, r, c, l;
	string a, b;
	map< string, long > mp;

	cin >> cas;

	while(cas--)
	{
		cin >> edge;
		mp.clear();
		init(); c = 0;

		for(i=1;i<=edge;i++)
		{
			cin >> a; 
			cin >> b;

			x = mp[a]; y = mp[b];

			if(x == 0)
				x = mp[a] = ++c;

			if(y == 0)
				y = mp[b] = ++c;

			r = Find_set( x ); 
			l = Find_set( y );

			if(r != l)
				Link(r,l);
			else
			    cout << len[l] << endl;
		}
	}

	return 0;
}
