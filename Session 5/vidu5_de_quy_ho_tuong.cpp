#include<iostream>
using namespace std;
/*
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
 */
 
 long TinhYn(int n);
 long TinhXn(int n)
	{
		if(n==0)
			return 1;
		return TinhXn(n-1) + TinhYn(n-1);
	}
	long TinhYn(int n)
	{
		if(n==0)
			return 1;
		return n*n*TinhXn(n-1) 
				+ TinhYn(n-1);
	}
			
main()
{
	int n;
	cout << "Nhap vao so nguyen: ";
	cin >>n;
	//cout << "Tong S la: " << TongS(n);
	//cout << endl;  
	//cout << "So Fibonaci thu "<< n<< " la: "<< Fibonaci(n);
	//cout << endl;
	//cout << "Xn = "<< TinhXn(n);
	cout << endl;
	cout<<"Xn = " << TinhXn(n);
	cout << endl;
	cout<<"Yn = "<< TinhYn(n);
	
}
