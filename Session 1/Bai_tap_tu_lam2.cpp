#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int min1, max1, min2, max2;
	cout <<"Nhap a: ";
	cin >>a;
	cout <<"Nhap b: ";
	cin >>b;
	cout <<"Nhap c: ";
	cin >>c;
	cout <<"Nhap d: ";
	cin >>d;
	  a <b ? (min1=a) && (max1=b): (min1=b) && (max1=a);
	  c <d ? (min2=c) && (max2=d): (min2=d) && (max2=c);
	  cout << min1  << min2  << max1  << max2  <<endl;
	  min1 <min2 ? cout <<"so nho nhat la: " << min1 : cout <<"so nho nhat la: " << min2;
	  max1 <max2 ? cout <<"so lon nhat la: " << max2 : cout <<"so lon nhat la: " << max1;
	return 0;
		
}

