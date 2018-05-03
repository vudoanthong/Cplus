/* Tam giác
 * File:   Bai_ toan_ tam_giac.cpp
 * Author: vudoanthong
 *
 * Created on April 21, 2018, 10:46 AM
 */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap vao do dai cua 3 canh tam giac a, b, c: " << endl;
	cin >> a >> b >> c;
	// dieu kien de a, b, c la 3 canh cua tam giac
	if((a>0) && (b>0) && (c>0) && (a-b<c) && (a-c<b) && (b-c<a))
	{
		if((a==b) && (b==c))
			cout << "Do dai cua 3 canh tam giac deu.";
			else if((a==b)||(a==c)||(c==b))
			cout <<"Do dai 3 canh tam giac can.";
			else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
			cout <<"Do dai 3 canh tam giac vuong can.";
			else if(((a*a+b*b==c*c)&&(a==b))||((a*a+c*c==b*b)&&(a==c))||((b*b+c*c==a&a)&&(b==c)))
			cout << "Do dai 3 canh tam giac vuong can.";
			else
			cout << "Do dai 3 canh tam giac thuong.";
	 } else
	 cout << "Khong phai do dai ba canh cua tam giac.";
}
