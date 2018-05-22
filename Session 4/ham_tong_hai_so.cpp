/*
* Dang tong quat cua ham
*/
#include<iostream>
#include<conio.h>
using namespace std;
int Tonghaiso(int a, int b);//khai bao ham
 main()
{
	int c, d, kq;
	cout <<"Nhap c = ";
	cin >>c;
	cout << "Nhap d = ";
	cin >>d;
	kq = Tonghaiso(c,d);//goi ham va truyen doi so c,d  vao ham
	cout << "Tong la: "<<kq;
	
}
int Tonghaiso(int a, int b)//a,b la tham so//dinh nghia ham tinh tong cua hai so
{
	return a+b;
}
