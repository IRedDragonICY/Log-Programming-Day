#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Luas Persegi V1.0\n";
	cout<<"Program ini akan mencari luas persegi\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float a;
	cout<<"Masukkan panjang sisi = ";
	cin>>a;
	cout<<"Luas persegi adalah "<<a*a;
	return 0;
}
