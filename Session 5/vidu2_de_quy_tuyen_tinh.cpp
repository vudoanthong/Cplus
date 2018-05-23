#include<iostream>
using namespace std;

long  TongS(int n)
{
	if(n==0)
		return 0;
	return (TongS(n-1) + n);
	
}
main()
{
	int n;
	cout << "Nhap vao so nguyen: ";
	cin >>n;
	cout << "Tong S la: " << TongS(n);
	
}
