#include<stdio.h>

#define	c1	1080
#define	mul 9
#define c2	40

void main()
{
	long a,b,c,d,s1,s2,s3,ans;

	while( 4 == scanf("%ld %ld %ld %ld",&a,&b,&c,&d)){
		if(!(a || b || c || d))
			break;
			s1=a-b;
			s2=c-b;
			s3=c-d;
			if(b>a)
				s1=a+c2-b;
			if(c<b)
				s2=c2-b+c;
			if(d>c)
				s3=c+c2-d;
			ans=((s1+s2+s3)*mul)+c1;
         printf("%ld\n",ans);
	}
}