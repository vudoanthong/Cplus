/*
 * File:  so_hoan_hao.cpp
 *  Kiem tra so hoan hao su dung do ..while
 * Author: vudoanthong
 * i phai chay tu 1 ko phai tu 0, 1<n ko the bang n

*/
#include<iostream>
using namespace std;
 int main()
 {
 	int n, tong = 0;
 	cout << "Nhap vap so n: ";
 	cin >>n;
 	int i=1;
 	do
 	{
 		if(n%i==0)
 		tong += i;
 		i++;
	 }
	 while(i<n);
	if(tong == n)
	cout << n << " la so hoan hao.";
	else
	cout << n << " khong phai la so hoan hao.";
 	
 }
