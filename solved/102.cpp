#include<stdio.h>

long B1,G1,C1,B2,G2,C2,B3,G3,C3,sum,a[500];
long BCG,BGC,CBG,CGB,GBC,GCB,min;

int main()
{
	while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&B1,&G1,&C1,&B2,&G2,&C2,&B3,&G3,&C3)==9)
	{
		sum=B1+C1+G1+B2+C2+G2+B3+C3+G3;

		BCG=sum-(B1+C2+G3); a[0]=BCG;
		BGC=sum-(B1+G2+C3); a[1]=BGC;
		CBG=sum-(C1+B2+G3); a[2]=CBG;
		CGB=sum-(C1+G2+B3); a[3]=CGB;
		GBC=sum-(G1+B2+C3); a[4]=GBC;
		GCB=sum-(G1+C2+B3); a[5]=GCB;

		min=a[0];

		for(int i=0;i<6;i++)
			if(min>a[i])
				min=a[i];

	  	if(BCG==min)printf("BCG %ld\n",min);
		else if(BGC==min)printf("BGC %ld\n",min);
		else if(CBG==min)printf("CBG %ld\n",min);
		else if(CGB==min)printf("CGB %ld\n",min);
		else if(GBC==min)printf("GBC %ld\n",min);
		else if(GCB==min)printf("GCB %ld\n",min);
	}
	return 0;

}