#include<iostream>
using namespace std;

long  TongS(int n)
{
	if(n==0)
		return 0;
	return (TongS(n-1) + n);
	
}
 long Fibonaci(int n)
 {
 	if(n==1 || n == 0)
 		 return 1;
 	 return Fibonaci(n-1) + Fibonaci(n-2);
 }
main()
{
	int n;
	cout << "Nhap vao so nguyen: ";
	cin >>n;
	cout << "Tong S la: " << TongS(n);
	cout << endl;  
	cout << "So Fibonaci thu "<< n<< " la: "<< Fibonaci(n);
	
}
