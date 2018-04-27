#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int n;
	float x, t;
	cout <<"Nhap so nguyen n: ";
	cin >>n;
	cout <<"Nhap so thuc x: ";
	cin >>x;
	t = x*n/2 + 2.32*pow(x,3);
	cout <<"Kêt qua la: " <<t;

	return 0;
}
