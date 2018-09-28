#include <stdio.h>
#define MAX 1000000
void main()
{
int i=0;
char kb[MAX],ch[MAX];

		kb['W']='Q';kb['E']='W';kb['R']='E';kb['T']='R';kb['Y']='T';
    	kb['U']='Y';kb['I']='U';kb['O']='I';kb['P']='O';kb['[']='P';
      kb[']']='[';kb['\\']=']';kb['Q']='Q';kb['A']='A';kb['Z']='Z';
      kb['1']='`';kb['2']='1';kb['3']='2';kb['4']='3';kb['5']='4';
      kb['6']='5';kb['7']='6';kb['8']='7';kb['9']='8';kb['0']='9';
      kb['-']='0';kb['=']='-'; kb[' ']=' ';kb['q']='q';kb['a']='a';kb['z']='z';
      kb['S']='A';kb['D']='S';kb['F']='D';kb['G']='F';kb['H']='G';
      kb['J']='H';kb['K']='J';kb['L']='K';kb[';']='L';kb['\'']=';';
      kb['X']='Z';kb['C']='X';kb['V']='C';kb['B']='V';kb['N']='B';
      kb['M']='N';kb[',']='M';kb['.']=',';kb['/']='.';
      while(gets(ch)!='\0')
{
      	i=0;
      
			while (ch[i])
				putchar(kb[ch[i++]]);
printf("\n");
      }
}
