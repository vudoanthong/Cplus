/*
 * File:   Can_chi.cpp
 * 
 * 
 * Author: vudoanthong

*/
#include<iostream>
using namespace std;
int main()
{
	int n, can, chi;
	cout << " Nhap nam can tinh: ";
	cin >> n;
	can=n%10;
	chi= n%12;
	switch(can)
	{
		case 0: cout<<("Canh ");break;
		case 1: cout<<("Tan ");break;
		case 2: cout<<("Nham ");break;
		case 3: cout<<("Quy ");break;
		case 4: cout<<("Giap ");break;
		case 5: cout<<("At ");break;
		case 6: cout<<("Binh ");break;
		case 7: cout<<("Dinh ");break;
		case 8: cout<<("Mau ");break;
		case 9: cout<<("Ky ");break;
	}
		switch(chi)
	{
		case 0: cout<<("Than");break;
		case 1: cout<<("Dau");break;
		case 2: cout<<("Tuat");break;
		case 3: cout<<("Hoi");break;
		case 4: cout<<("Ty");break;
		case 5: cout<<("Suu");break;
		case 6: cout<<("Dan");break;
		case 7: cout<<("Meo");break;
		case 8: cout<<("Thin");break;
		case 9: cout<<("Ti");break;
		case 10: cout<<("Ngo");break;
		case 11: cout<<("Mui");break;
	}

}
