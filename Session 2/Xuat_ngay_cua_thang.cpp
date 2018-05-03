/*
 * File:   Xuat_ngay_cua_thang.cpp
 * 
 * 
 * Author: vudoanthong

*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int ng, th, n;
	int flag1=0;
	cout <<" Nhap vao ngay: " << endl;
	cin>> ng;
	cout <<"Nhap vao thang: " << endl;
	cin >>th;
	cout << "Nhap vao nam: " << endl;
	cin >> n;
	switch(th)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: if(ng<=31) flag1 =1; break;
		case 4:
		case 6:
		case 9: if(ng<=30) flag1 = 1; break;
		case 2: if(((n%4==0)&&(n%100!=0)||(n%400==0))&& (ng<=29)) flag1=1;
				if(ng<=28) flag1=1; break;
		default : cout << "Nhap sai!";
	}
	if(flag1==1)
	{
		cout <<"Ngay nay hop le." << endl;
		if((n%4==0)&& (n%100!=0)||(n%400==0))
		cout <<"Nam nhuan" << endl;
		else
		cout <<"Khong nhuan" << endl;
		
	}
	else
	cout <<"Ngay nay khong hop le" <<endl;
	return 0;
}
