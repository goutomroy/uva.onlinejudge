#include <stdio.h>
#include <string.h>
#include <math.h>

long decimal(char binary[50])
{

long i,l,d,len;
len=strlen(binary);
for(i=d=0,l=len-1;i<len;++i,--l)
d=((binary[i]-'0')*(pow(2,l)))+d;
return d;

}

long GCD(long a,long b)
{
if(!b)
return a;
else
return GCD(b,a%b);
}



void main()
{
	long gcd,a,b,n,ii;

	char binary1[50],binary2[50];

	scanf("%ld", &n);

	for(ii=0;ii<n;++ii)
	{

	scanf("%s %s", binary1, binary2);
	a=decimal(binary1);
	b=decimal(binary2);
	gcd=GCD(a,b);

	if(a%gcd==0 && b%gcd==0 && gcd!= 1)
	printf("Pair #%ld: All you need is love!\n", ii+1);
	else
	printf("Pair #%ld: Love is not all you need!\n", ii+1);

	}
}
