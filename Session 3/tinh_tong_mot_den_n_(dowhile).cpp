/*
 * File:   tinh_tong_1_den_n.cpp
 * 
 * Viet chuong trinh tinh tong cac so nguyen tu 1 toi n(su dung do..while)
 * Author: vudoanthong

*/
#include<iostream>
using namespace std;
int main()
{
	int i, n, sum;
	cout <<"Nhap so nguyen n: ";
	cin>>n;
	sum=0; i =1;
	do
	{
	sum += i;i++;
	}
	while(i<=n);
	cout <<"Tong tu 1 den " << n <<" la: " <<sum; 
}
