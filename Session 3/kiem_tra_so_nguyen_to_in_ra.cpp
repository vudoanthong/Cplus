/*
 * File:  so_nguyen_to.cpp
 *  Kiem tra so nguyen to va in ra tu 2 toi n
 * cho 1 bien dem =0; SNT chi chia het co 1 va chinh no, nen bien dem chi tang toi 2 la toi da
 * do la 1 lan n%1, va n%n
 * Author: vudoanthong
 * 

*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Nhap vao so nguyen n: ";
	cin >>n;
	for(int k=2; k <=n; k++)
	{
	int dem = 0;
	for(int i = 1; i <= k; i++)
		if(k%i==0) dem ++;
	if(dem == 2)
		cout << k << " la SNT \n";
	//else
		//cout << k << " khong phai la SNT\n";
	}
}
