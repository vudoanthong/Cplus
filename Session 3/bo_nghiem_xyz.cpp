/*
 * File:  bo_nghiem_xyz.cpp
 * tim bo nghiem cua phuong tirnh 3*X + 5 * Y + 7 * Z = 135
 
 * Author: vudoanthong
 

*/
#include<iostream>
 using namespace std;
 int main()
 {
 	int x, y, z;
 	int dem =0;
 	
 	for(int x=1; x<135;x++)
 		for(int y=1; y<135;y++)
 			for(int z=1; z<135;z++)
 				if(3*x + 5*y + 7*z ==135)
 				{
				
 				cout << "(x, y, z) = ("
				 <<x<<","<<y<<","<<z<< ")"<< endl;
				 dem++;
 				 }
 	cout <<"co tat ca " << dem<<" tong cac bo nghiem. " << endl;
 	
 }
