
 #include<stdio.h>
 #include<math.h>

 long long int bigmod(long long int b, long long int n, long long int m)
 {
    if(n==0)
       return 1;
    else if(n%2==0)
    {
       return fmod(pow(bigmod(b,n/2,m),2),m);
    }
    else
    {
       n=n/2;
       return fmod((fmod(pow(bigmod(b,n,m),2),m)*fmod(b,m)),m);
    }
 }

 void main()
 {
    long long int a,b,c;

    while(3==scanf("%lld %lld %lld",&a,&b,&c))
    {
       printf("%lld\n",bigmod(a,b,c));
    }
 }