#include<iostream>
/*
* truyen tham bien: tham so hinh thu thay doi thi tham so thuc van ko doi
*/

using namespace std;
void HoanVi(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
main()
{
	int x =1, y = 2;
	HoanVi(x,y);
	cout << "x = " <<x<<", y = " <<y;
}
