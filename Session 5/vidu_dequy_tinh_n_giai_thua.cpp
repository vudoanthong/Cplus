#include<iostream>
using namespace std;
int GiaiThua(int n)
{
	if(n == 0 || n == 1)
		return 1;
	return n * GiaiThua(n-1);
}
 main()
 {
 	int n;
 	cout << "Nhap vao so nguyen n : ";
 	cin>>n;
 	cout << n<< "! = "<< GiaiThua(n);
 }
