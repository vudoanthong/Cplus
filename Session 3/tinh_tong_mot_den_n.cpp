/*
 * File:   tinh_tong_1_den_n.cpp
 * 
 * Viet chuong trinh tinh tong cac so nguyen tu 1 toi n(su dung for)
 * Author: vudoanthong

*/
#include<iostream>
using namespace std;
int main()
{
	int i, n, sum;
	cout <<"Nhap so nguyen n: ";
	cin>>n;
	sum=0;
	for(i=1; i<=n;i++)
	sum += i;
	cout <<"Tong tu 1 den " << n <<" la: " <<sum; 
}
