/*
 * File:  boi_chung_nho_nhat.cpp
 *  vidu: nhap vao 2 so 12 va 18
 * lan lap thu nhat 12 khác 18 :12<18--> b = 18-12 = 6
 * lan lap thu hai: 12 khác  6: 12>6 --->a  = 12-6  = 6
 * Lan lap thu 3: 6  = 6 --> chuong trình dung vong lap
 * Author: vudoanthong
 

*/
#include<iostream>

using namespace std;
int main()
{
	int m,n, ucln, bcnn,tich;
	cout << " Nhap vao n: ";
	cin >>n;
	cout << "Nhap vao m: ";
	cin >>m;
	tich = m*n;
	while(n!=0 && m!=0)
	{
		if(n>m)
			 n -= m;
			 //cout <<n <<"o day la nay";
		else
			 m -=n;
	}
	//cout << n<<"\n";
	//cout <<m<<"\n";
	if(n==0)
		ucln =m;
	else
		ucln = n;
		bcnn= tich/ucln;
	cout << "Uoc chung lon nhat: "<<ucln << endl;
	cout << "Boi chung nho nhat la :"<<bcnn << endl;
}

