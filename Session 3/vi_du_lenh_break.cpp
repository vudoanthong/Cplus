/*
 * File:   vi_du_lenh_break.cpp
 * 
 * 
 * Author: vudoanthong

*/
#include<iostream>
using namespace std;
int main()
{
	int n, passWord;
	cout <<"Nhap so nguyen: ";
	cin >> n;
	for(int i=0; i<n;i++)
	{
		cout <<"Nhap mat khau: ";
		cin >> passWord;
		if(passWord==1)
			break;
		cout<<"Mat khau nhap sai!\n";
	}
	
}
