#include<iostream>
using namespace std;
int Max(int,int);
main()
{
	int x, y, max;
	cout << "Nhap x: ";
	cin>> x;
	cout << "\nNhap y: ";
	cin >> y;
	max= Max(x,y);
	cout << "\nMax = "<< max;
}
int Max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
}
