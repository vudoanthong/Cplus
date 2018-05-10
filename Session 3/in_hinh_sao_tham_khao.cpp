/*
 * File:  
 * 
 
 * Author: vudoanthong
 

*/
#include<iostream>
#include <conio.h> 
 using namespace std;
 
void HCND(int &chieungang, int &chieudoc)
{
	cout << "Nhap chieu ngang va chieu doc HCN: ";
	cin >> chieungang >> chieudoc;
	for (int i = 1; i <= chieungang; i++)
	{
		for (int j = 1; j <= chieudoc; j++)
		{
			cout << "* ";
		}
		cout << endl << endl;
	}
}
void HCNR(int &chieungang, int &chieudoc)
{
	cout << "\nNhap chieu ngang va chieu doc HCN: ";
	cin >> chieungang >> chieudoc;
	for (int i = 1; i <= chieungang; i++)
	{
		for (int j = 1; j <= chieudoc; j++)
		{
			if (i == 1 || i == chieungang)
				cout << "* ";
			else
			{
				if (j == 1 || j == chieudoc)
					cout << "* ";
				else
					cout << "  ";
			}
		}
		cout << endl << endl;
	}
}
void TGVCD(int &canh)
{
	cout << "\nNhap do dai canh: ";
	cin >> canh;
	for (int i = 1; i <= canh; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl << endl;
	}
}
void TGC(int &docao)
{
	cout << "\nNhap chieu cao tam giac: ";
	cin >> docao;
	for (int i = 1; i <= docao; i++)
	{
		for (int j = i; j <= docao - 1; j++)
			cout << "  ";
		for (int k = 1; k <= i * 2 - 1; k++)
			cout << "* ";
		cout << endl << endl;
	}
}
void TGCR(int &docao)
{
	cout << "\nNhap chieu cao tam giac: ";
	cin >> docao;
	for (int a = 1; a <= docao - 1; a++)
		cout << "  ";
	cout << "*" << endl;
	for (int b = 1; b <= docao - 2; b++)
	{
		for (int c = b; c <= docao - 2; c++)
			cout << "  ";
		cout << "* ";
		for (int d = 1; d <= b * 2 - 1; d++)
			cout << "  ";
		cout << "*" << endl;
	}
	for (int c = 1; c <= docao * 2 - 1; c++)
		cout << "* ";
}
int main()
{
	int chieungang, chieudoc, canh, docao;
	HCND(chieungang, chieudoc); // Vi?t t?t: Hình Ch? Nh?t Ð?c
	HCNR(chieungang, chieudoc); // Vi?t t?t: Hình Ch? Nh?t R?ng
	TGVCD(canh); // Vi?t t?t: Tam Giác Vuông Cân Ð?c
	TGC(docao); // Vi?t t?t: Tam Giác Cân
	TGCR(docao); // Vi?t t?t: Tam Giác Cân R?ng
	getch();
	return 0;
}
