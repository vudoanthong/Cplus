#include<iostream>
using namespace std;
int KiemtraSoHoanHao(int n);
main()
{
	int n;
	cout << "Nhap vao so n:";
	cin >> n;
	cout <<" Cac so hoan hao tu 1 den " <<n<<" la: \n";
	for(int i=1;i<=n;i++)
		if(KiemtraSoHoanHao(i) == 1)
			cout<<"   "<< i;
}
int KiemtraSoHoanHao(int n)
{
	int tong =0;
	for(int i = 1; i < n; i++)
		if(n%i==0) tong += i;
	if(tong == n)
		return 1;//dung tra ve 1
	else
		return 0;//sai tra ve 0
		
}
