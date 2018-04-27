/* 
 * File:   Bai_tap_thuc_hanh_2.cpp
 * Author: vudoanthong
 *
 * Created on April 21, 2018, 10:46 AM
 */
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	 int n;
	 float x, k1, k2, k;
	 cout <<" Nhap so nguyen n: ";
	 cin >>n;
	 cout <<"\n Nhap so thuc x: ";
	 cin >>x;
	 k1 = pow((x*x+x+1),n);
	 k2 = pow((x*x-x+1),n);
	 k = k1 +k1;
	 cout <<"Ket qua la: "<<k;
	 return 0;

}
