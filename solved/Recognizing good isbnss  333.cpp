#include<stdio.h>
#include<string.h>
#include<ctype.h>


void main()
	{
		long i,j,num[100],len,total,t1,t2,sum,spe=0;
		char str[100];
	

	

		while(gets(str)!=NULL)
			{
				len=strlen(str);
				total=0;
				spe=0;
				

				for(i=0;i<len;i++)
					{
						if((str[i]>='0'&&str[i]<='9'))
							{
								if(total)
									{
									
											t2=str[i]-'0';

										num[total]=num[total-1]+t2;

										total++;
									}
								else
									{
									
											num[total]=str[i]-'0';

										total++;
									}

							}
						else
							if(str[i]=='X')
								{
									if(total==9)
										{
											num[total++]=num[total-1]+10;
										}
									else
										spe=1;
								}
							else
								if(str[i]!='-'&&str[i]!=' '&&!(str[i]>='a'&&str[i]<='z'))
									{
										spe=1;
									}

					}
				sum=0;
				j=0;

				for(i=0;i<len;i++)
					if(str[i]!=' ')
						{
						
							printf("%c",str[i]);
							j=1;
						}

				if(total==10&&spe==0)
					{
						for(i=0;i<total;i++)
							{
								sum+=num[i];
							}

						if(sum%11==0)
							{						
								printf(" is correct.\n");
							}
						else
							{
					
								printf(" is incorrect.\n");
							}

					}
				else
					{					
						printf(" is incorrect.\n");
					}
						
			}
	}
















