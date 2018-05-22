#include<iostream>
using namespace std;
int cong2so(int a, int b);
int nhan2so(int a, int b);
main()
{
	cout << "2 + 1 = " <<
			cong2so(2,1) << endl;
	cout << "2 * 2 = " <<
			nhan2so(2,2) << endl;
			
}
int cong2so(int a, int b)
{
	return (a + b);

}
int nhan2so(int a, int b)
{
	return (a*b);
}
