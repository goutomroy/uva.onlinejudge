#include<iostream.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct goutom
{
	char ph;
	int val;
}store[500];

int comp(void const *A, void const *B)
{
	goutom *a = (goutom*)A;
	goutom *b = (goutom*)B;

	if(a->val < b->val)
		return 1;
	else if(a->val > b->val)
		return -1;
	return 0;
}

int main()
{
	int cas, i, len, t, fre[500];
	char ch[202], c;

	scanf("%ld",&cas);
	scanf("%c",&c);
	
	while(cas--)
	{
		for(i=97;i<=122;i++)
			fre[i]=0;
		gets(ch);
		len=strlen(ch);

		for(i=0;i<len;i++)
		{
			if(ch[i]<=90 && ch[i]>=65)
				ch[i]=ch[i]+32;
			if(ch[i]<=122 && ch[i]>=97)
				fre[ch[i]]++;
		}
		t=0;
		for(i=97;i<=122;i++)
			if(fre[i]!=0)
			{
				store[t].ph=i;
				store[t++].val=fre[i];
			}

			qsort(store,t,sizeof(goutom),comp);

			for(i=0;i<t;i++)
			{
				if(store[0].val==store[i].val)
					cout<<store[i].ph;
				else
					break;
			}
			cout << endl;
	}
	return 0;
}