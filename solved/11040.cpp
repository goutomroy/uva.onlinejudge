#include<stdio.h>
void main( )
{
long long n,i,j,a[100],c,p,b[11]={0,1,2,4,7,11,16,22,29,37,45};
scanf("%lld",&n);
for(p=0;p<n;p++)
{
scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld%lld",&a[1],&a[4],&a[6],&a[11],&a[13],&a[15],&a[22],&a[24],&a[26],&a[28],&a[37],&a[39],&a[41],&a[43],&a[45]);

a[5 ]=(a[1 ]-(a[4 ]+a[6 ]))/2;  a[2 ]=a[4 ]+a[5 ];  a[3 ]=a[5 ]+a[6 ];
a[12]=(a[4 ]-(a[11]+a[13]))/2;  a[7 ]=a[11]+a[12];  a[8 ]=a[12]+a[13];
a[14]=(a[6 ]-(a[13]+a[15]))/2;  a[9 ]=a[13]+a[14];  a[10]=a[14]+a[15];
a[23]=(a[11]-(a[22]+a[24]))/2;  a[16]=a[22]+a[23];  a[17]=a[23]+a[24];
a[25]=(a[13]-(a[24]+a[26]))/2;  a[18]=a[24]+a[25];  a[19]=a[25]+a[26];
a[27]=(a[15]-(a[26]+a[28]))/2;  a[20]=a[26]+a[27];  a[21]=a[27]+a[28];
a[38]=(a[22]-(a[37]+a[39]))/2;  a[29]=a[37]+a[38];  a[30]=a[38]+a[39];
a[40]=(a[24]-(a[39]+a[41]))/2;  a[31]=a[39]+a[40];  a[32]=a[40]+a[41];
a[42]=(a[26]-(a[41]+a[43]))/2;  a[33]=a[41]+a[42];  a[34]=a[42]+a[43];
a[44]=(a[28]-(a[43]+a[45]))/2;  a[35]=a[43]+a[44];  a[36]=a[44]+a[45];

for(i=1;i<10;i++)
{
for(c=b[i];c<b[i+1];c++)
printf("%lld ",a[c]);
if(c==45)
printf("%lld ",a[c]);
printf("\n");
}
}
}





