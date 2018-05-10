/*
 * File:  so_hoan_hao.cpp
 *  Kiem tra so hoan hao
 * Author: vudoanthong
 * i phai chay tu 1 ko phai tu 0, 1<n ko the bang n

*/
#include<iostream>
using namespace std;
int main()
{
	int n, tong=0;
	cout <<"Nhap vao so nguyen n: ";
	cin >>n;
	for(int i=1; i<n;i++)
	{
		if(n%i==0)
		tong +=i;
	}
	if(tong==n)
	cout << n << " la so hoan hao.";
	else
	cout << n << " khong phai la so hoan hao.";
}
