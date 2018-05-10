/*
 * File:   vi_du_lenh_continue.cpp
 * 
 * nhap vao so nguyen neu duong thi tinh tong con am thi ko tinh
 * Author: vudoanthong

*/
#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	
	sum=0; 
	do
	{
		cout <<"Nhap so nguyen n: ";
		cin>>n;
		if(n<0) continue;
		sum += n;
	}
	while(n!=0);
	cout <<"Tong la: " <<sum; 
}
