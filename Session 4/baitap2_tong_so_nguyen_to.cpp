#include<iostream>
using namespace std;
int KiemTraSNT(int n);
void XuatSNT(int n);
int TongSNT(int n);
main()
{
	int n, tong;
	cout << " Nhap vao so nguyen n: ";
	cin >> n;
	XuatSNT(n);
	tong = TongSNT(n);
	cout <<"\nTong cac so nguyen to tu 1 den" << n<<" la: "<<tong <<endl;
}
int KiemTraSNT(int n)
{
	int dem =0;
	for(int i=1; i<=n; i++)
	if(n%i == 0)
		dem ++;
	if(dem==2)
	    return 1;
	else
		return 0;
}
void XuatSNT(int n)
{
	for(int i= 1; i<=n; i++)
	if(KiemTraSNT(i)==1)
	cout << "  " <<i;
	
}
int TongSNT(int n)
{
	int tong =0;
	for(int i=1; i<=n; i++)
	if(KiemTraSNT(i)==1)
		tong += i;
	return tong;
}
