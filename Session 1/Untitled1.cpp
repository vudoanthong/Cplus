/* 
 * File:   Bai_tap_thuc_hanh_1.cpp
 * Author: vudoanthong
 *
 * Created on April 21, 2018, 10:46 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

/*
 * 
 */
int main() 
{
    int n;

    float z, x;
    cout << "Nhap vao so x: ";
    cin >>x;
    cout << "Nhap vao so nguyen n:";
    cin >>n;
    z = (2 * x + sqrt(n)) / 13;
    cout << "Ket qua la: \n " << z;
    return 1;


}


