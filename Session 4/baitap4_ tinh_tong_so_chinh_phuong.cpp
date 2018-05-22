#include<iostream>
#include<math.h>
using namespace std;
int KiemTraSCP(int);
int TongSCP(int);
void XuatSCP(int);

main()
{
	int n;
	int tong=0;
	do
	{
		cout <<"Nhap vao n:";
	     cin>> n;
	    if(KiemTraSCP(n) == 1 )
			tong += n;
	}
	while(n!=0);
	cout<<"\nTong cac so chinh phuong: " <<tong<<endl;
	//cout<<"\nTong cac so chinh phuong: " <<TongSCP(n)<<endl;
	XuatSCP(n); 
	
}
int KiemTraSCP(int n)
{
	if((int)sqrt(n) == sqrt(n))
	return 1;
	else 
	 return 0;
	 
	
}
/*int TongSCP(int n)
{
	int tong =0;
	for(int i =1; i<=n;i++)
	if(KiemTraSCP(i) == 1 )
	tong += i;
	return tong;
}
*/
void XuatSCP(int n)
{
	for(int i= 1; i<=n; i++)
	if(KiemTraSCP(i)==1)
	cout<<"   "<< i;
}
