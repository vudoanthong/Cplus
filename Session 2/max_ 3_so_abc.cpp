#include<iostream>

using namespace std;
 int main()
 {
 	int a, b, c;
 	cout <<"Nhap vao so a: ";
 	cin >> a;
 	cout << "Nhap vao so b: ";
 	cin >> b;
 	cout << "Nhap vao so c: ";
 	cin >> c;
 	if(a> b && a> c)
 	 cout << a << " la so lon nhat.";
 	 else if(b>a && b> c)
 	 		cout << b << " la so lon nhat.";
 	 		else
 	 		cout << c << " la so lon nhat.";
	return 0; 
 }
