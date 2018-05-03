#include<iostream>
#include<math.h>
 using namespace std;
 int main()
 {
 	int a, b ,c;
 	float x, x1, x2, delta;
 	cout << "Nhap he so a: ";
 	cin >> a;
 	cout << " Nhap he so b: ";
 	cin >> b;
 	cout << "Nhap he so c: ";
 	cin >> c;
 	if (a== 0){
	
 	cout << " Phuong trinh tro thanh phuong trinh bac 1:" << b << "*x +" << c << " = 0 " << endl;
 		if(b==0)
		 {
 			if(c==0)
 			cout << "Phuong trinh vo so nghiem.";
 			else
 			cout << "Phuong trinh vo nghiem.";
		 }
 		else
 		 x = (float) (-c)/b;
 		cout << "Phuong trinh co nghiem duy nhat: " << x ;
 	 }
	 else
	 {
 		delta = b*b - 4*a*c;
 		if (delta >0)
		 {
 			x1= -b - sqrt(delta)/(2*a);
 			x2= -b + sqrt(delta)/(2*a);
 			cout << "Phuong trinh co hai nghiem" << x1 << x2 << endl;
 		 }
 		else if(delta = 0)
		 {
		     x1 = x2 = -b/(2*a);
			 cout << "Phuong trinh co nghiem kep x1 = x2 " << x1;
		}
		else
			cout << "Phuong trinh vo nghiem";
	 }
	return 0;	
 }
