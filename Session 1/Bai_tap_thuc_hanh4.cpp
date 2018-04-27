#include<iostream>
using namespace std;
void main()
{
	int soluong;
	float dongia, giamgia, cuocvanchuyen, sotienphaitra;
	cout <<"Nhap so luong: ";
	cin >>soluong;
	cout <<"Nhap don gia: ";
	cin >>dongia;
	giamgia = soluong*dongia*12/100;
	cuocvanchuyen = soluong*dongia*5/100;
	sotienphaitra = soluong*dongia - giamgia + cuocvanchuyen;
	cout <<"So luong: " << soluong <<endl;
	cout <<"Don gia: " << dongia <<endl;
	cout <<"Giam gia: " << giamgia <<endl;
	cout <<"Cuoc van chuyen: " << cuocvanchuyen <<endl;
	cout <<"So tien phai tra: " << sotienphaitra <<endl;
	
}
