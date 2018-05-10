/*
 * File:  in_tam_giac_hinh_sao.cpp
 * 
 * Author: vudoanthong
 

*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Nhap vao so nguyen n: ";
	cin>>n;
	cout <<" tam giac thu nhat: "<< endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<i+1;j++)
		cout<< " " << "*";
		cout <<endl;
		
	}
	cout<<"tam giac thu 2:" <<endl;
	for(int i = 0; i <n; i++)
	{
		for(int j=0;j<n-i; j++)
		cout << " " << "*";
		cout << endl;
	}
	cout <<" tam giac thu 3: "<<endl;
	for(int i = 0; i< n; i++)
	{
		for(int j=0;j<=i; j++)
		cout << " " << "*";
		cout <<endl;
	}
	cout << " Tam giac thu 4: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j<n-i-1;j++)
			cout << " " << " ";
		for(int j=0; j<2*i+1;j++)
			cout <<" " <<"*";
			cout <<endl;
		
	}
	cout << " Tam giac thu 5: " << endl;
	for(int i = 0; i <n; i++)
	{
		for(int j=0;j<n;j++)
		cout << "  ";
		cout << endl;
		for(int j=i;j<n;j++)
		cout << "*";
	
	}
	cout << endl;
	cout << " Tam giac thu 6: " << endl;
	for(int i = n; i >=1; i--)
	{
	
		for(int j=0;j<=n-i;j++)
		cout << " ";
		//cout << endl;
		for(int k=0;k<=i;k++)
		cout << " *";
		cout << endl;
		
	}
	cout << endl;
}
