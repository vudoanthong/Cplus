#include<iostream>
using namespace std;
int F1(int);
int F2(int);
float F3(int);
float F4(int);

main()
{
	int n;
	cout <<"Nhap vao so nguyen n: ";
	cin >> n;
	cout << "F1 = " <<F1(n) << endl;
	cout << "F2 = " <<F2(n) << endl;
	cout << "F3 = " <<F3(n) << endl;
	cout << "F4 = " <<F4(n) << endl;
}
int F1(int n)
{
	int  kq =0;
	for(int i = 1; i<=n; i++)
	kq += i;
	return kq;
	
}
int F2(int n)
{
	int kq = 0;
	for(int i = 1; i <= n; i++)// or cho i tang len 2 i +2
	if(i%2==1)// i le
	kq += i;// 
	return kq;
}
float F3(int n)
{
	float kq = 0;
	for(int i = 1; i <= n; i ++)
	kq += (float)1/i;// ep kieu
	return kq;
}
float F4(int n)
{
	float kq = 0;
	for(int i = 1; i <= n; i ++)
	if(i%2==1)// neu i le thi cong neu i chan thi tru
		kq += (float)1/i;
	else
		kq -= (float)1/i;
	return kq;
}
