#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menguji float\n";
	cout<<"Program ini akan mengetest kemampuan penyimpanan tipe data float\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	float bil1;
	cout<<"Variabelnya berupa:\n";
	SetConsoleTextAttribute(h,10);
	cout<<"float ";
	SetConsoleTextAttribute(h,15);
	cout<<"bil1;\n\n";
	bil1=0.1;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.1)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.11;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.11)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.1111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.1111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.11111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.11111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.111111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.111111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.1111111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.1111111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.11111111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.11111111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.99;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.99)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.9999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.9999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.99999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.99999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.999999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.9999999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.9999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	bil1=0.99999999;
	cout<<"Q: Angka yang dimasukkan (Misalnya bil1 = 0.99999999)\n";
	sleep(1);
	cout<<"A: Output yang ditampilkan berupa: "<<bil1<<endl;
	sleep(1);
	return(system("pause"));
}