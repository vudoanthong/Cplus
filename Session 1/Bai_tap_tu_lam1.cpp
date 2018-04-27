#include<iostream>
using namespace std;
 main()
{
	int n;
	cout <<"Nhap vao so nam: ";
	cin >>n;
	cout <<n;
	(n%4==0) && (n%100 !=0) || (n%400==0) ? cout <<" la nam nhuan" : cout <<" la nam ko nhuan";


}
