#include<iostream.h>
#include<algorithm>
#define sz 5000001
using namespace std;

struct goutom
{
	bool colour;
	long size;
}roy [sz];

bool comp(goutom x, goutom y)
{
	if(x.size < y.size)
		return 1;
	return 0;
}

int main()
{
	long cas, i, n, num, cont;
	bool c_colour;
	cin >> cas ;
	while(cas--)
	{
		cin >> n;
		for(i = 0; i < n; i++)
		{
			cin >> num;
			if(num < 0)
			{
				roy[i].size = num * -1;
				roy[i].colour = 0;
			}
			else
			{
				roy[i].size = num;
				roy[i].colour = 1;
			}
		}
		stable_sort(roy, roy+n, comp);
		cont = 0; c_colour = 1;
		if(roy[0].colour == 1)
			c_colour = 0;
		for(i = 0; i < n; i++)
		{
			if(roy[i].colour != c_colour)
			{
				cont++; c_colour = roy[i].colour;
			}
		}
		cout << cont << endl;
	}
	return 0;
}