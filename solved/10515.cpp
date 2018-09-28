#include <stdio.h>
#include <math.h>
#include <string.h>

#define SZ 100

void main()
{
	long len,power,base,last_digit;
	char m[SZ],n[SZ];

	while(2==scanf("%s %s", m, n) && (m[0]!='0' || n[0]!='0')){
		len=strlen(m);
		base=m[len-1]-'0';
		len=strlen(n);
		if(len==1){
			power=n[0]-'0';
			if(power!=0)
				power =power%4;
		}
		else{
			power=(n[len-2]-'0')*10+(n[len-1]-'0');
			power=power%4;
			if(power==0)
				power=4;
		}
		last_digit=(long)pow(base,power)%10;
		printf("%ld\n", last_digit);
	}
}



