#include<iostream>
using namespace std;
int UCLN(int, int);
int BCNN(int, int);

main()
{
	int m, n, bcnn;
	cout <<"Nhap n: ";
	cin>> n;
	cout << "Nhap m: " ;
	cin >> m;
	//bcnn= m*n/UCLN(m.n);
	cout << "\nBoi chung nho nhat cua "<< m<< " va "<<n<< " la: "<< BCNN(n,m);
	
		
}
int UCLN(int n, int m)
{
	while(n!=0 && m!=0)
	{
		if(n>m)
		n -= m;
		else
		m -=n;
	}
	if(n==0)
	 return m;
	 else
	 return n;
}
int BCNN(int n, int m)
{
	return n*m/UCLN(n,m);
}
