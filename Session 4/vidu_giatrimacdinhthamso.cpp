#include<iostream>
/*
*
*/
using namespace std;
int cong2so(int a, int b = 1)
{
	return (a + b);
}
main()
{
	cout << "2 + 1 = " <<
		cong2so(2,1) << endl;
	cout << "2 + 2 = " <<
		cong2so(2,2) << endl;
	cout << "2 + 1 = " <<
		cong2so(2) << endl;
}
