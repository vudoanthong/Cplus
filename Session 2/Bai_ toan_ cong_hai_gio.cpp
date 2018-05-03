/*
 * File:   Bai_ toan_ cong_hai_gio.cpp
 * 1h20'34'' + 1h40'56'' la bang 3h01'30" chu khong phai là 2h60'90"
 * 1h20'20'' + 1h20'20'' la bang 2h40'40' chu khong phai 2h40'40'
 * Author: vudoanthong

*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int gio1, phut1, giay1;
	int gio2, phut2, giay2;
	int giotong, phuttong=0, giaytong;
	cout <<"Nhap vao gia tri gio thu nhat(hh,mm,ss): "<< endl;
	cin >> gio1 >> phut1 >> giay1;
	cout <<"Nhap vao gia tri gio thu hai(hh,mm,ss): " << endl;
	cin >> gio2 >> phut2 >> giay2;
	giaytong = giay1 + giay2;

	if(giaytong>=60)
	{
		//90%60=30
		giaytong%=60;
		phuttong =1;
		
		
		}
		//cout << giaytong<<endl;
		//cout << phuttong << endl;	
	phuttong += phut1 + phut2;
	if(phuttong>=60)
	{

		phuttong %=60;
		giotong =1;
	}
	giotong += gio1 + gio2;
	giotong %=24;
	
	cout <<"Tong hai gio tren = " << giotong <<":" << phuttong<< ":"<<giaytong;
}
