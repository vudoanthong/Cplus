#include<iostream>
 using namespace std;
 int main()
 {
 	int n;
 	cout << "Nhap vao so nguyen: ";
 	cin >> n;
 	if(n>0)
 		goto tt;
 		cout << "Nhap mon lap trinh \n";
 		tt: cout << "Lap trinh C/C++ \n";
 		return 0;
 }
