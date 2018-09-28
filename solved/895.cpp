#include <stdio.h>
#include <string.h>
void  main(){
	char st[1010][15],ch[20];
	int n,i,j,len,match,occ,k,freq[26],stfreq[26];
	i=-1;
	while ( gets ( st [++i] ) && st [ i] [0]!= '#')
		n = i;
	while( gets(ch) && ch[0]!= '#'){
		memset(freq,0,sizeof(freq));
		for(i=0; i<(int)strlen(ch);i++)
			if(ch[i]!=32)
				freq[ch[i]-97]++;
		match=0;
		for(i=0; i<=n; i++){
			len = strlen(st[i]) ;
			memset(stfreq,0,sizeof(stfreq));
			for(j = 0;j<len;j++)
				stfreq[st[i][j]-97]++;
			occ=0;
			for(k=0;k<26;k++){
				if(stfreq[k]!=0){
					if( freq[k]>= stfreq[k] ){
						occ+= stfreq[k];
						if(occ == len){
							match++;
							occ=0;
							break;
						}
					}
				}
			}
		}
	printf("%d\n",match);
		match=0;
	}
}


