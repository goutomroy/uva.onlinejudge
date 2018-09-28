#include<iostream.h>
#define big 5000000

int main()
{
	long len, i, j, k, dp[55][55], cost[55], t, l, num, p, v;
	while(cin >> num, num)
	{
		cin >> len;

		for(i=1;i<=len;i++)
			cin >> cost[i]; 

		cost[0]=0; 
		cost[++len]=num;

		for(i=0; i<=len+1; i++)
			for(j=0; j<=len+1; j++)
				dp[i][j]=0;

			for(l=2; l<=len; l++)
			{
				t=len-l;
				for(i=0; i<=t; i++)
				{
					p=l+i; 
					dp[i][p]=big;
					for(k=i+1; k<p; k++)
					{
						v=dp[i][k] + dp[k][p] + (cost[p] - cost[i]);
						if(v < dp[i][p])
							dp[i][p]=v;
					}
				}
			}
			cout << "The minimum cutting is " << dp[0][len] << "." << endl;
	}
	return 0;
}