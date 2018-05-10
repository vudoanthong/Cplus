/*
 * File:   vi_du_vong_lap_do_while_long_nhau.cpp
 * 

 * Author: vudoanthong

*/
#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	do
	{
		int j = 0;
		do
		{
			cout <<"\n hello child";
			j++;
		
		}
		while(j<=2);
		cout <<"\nHello parent";
		i++;
	}
	while(i<=2);
	}

