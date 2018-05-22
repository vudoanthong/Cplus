#include<iostream>
using namespace std;
int KiemtraSoHoanHao(int n);
void XuatSoHoanHao(int n);
main()
{
	int n;
	cout << "Nhap vao so n:";
	cin >> n;
	cout <<" Cac so hoan hao tu 1 den " <<n<<" la: \n";
	XuatSoHoanHao(n);

}
int KiemtraSoHoanHao(int n)
{
	int tong =0;
	for(int i = 1; i < n; i++)
		if(n%i==0) tong += i;
	if(tong ==n)
		return 1;//dung tra ve 1
	else
		return 0;//sai tra ve 0
		
}
void XuatSoHoanHao(int n)
{
		for(int i=1;i<=n;i++)
		if(KiemtraSoHoanHao(i) == 1)
			cout<<"   "<< i;
}
