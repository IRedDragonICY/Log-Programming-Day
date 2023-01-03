#include <iostream>
#include <windows.h>
#include <math.h>
#define PI 3.14159265
using namespace std;

float a, b, c, s, sudut1, sudut2, luas;
char tugas;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Simple Calculator V1.0\n";
	cout<<"Program ini merupakan kalkulator simpel\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
    char operasi;
    int bil1, bil2;
    cout<<"Masukkan operator (+, -, *, /, %)\n>";
    cin>>operasi;
    cout<<"Masukkan angka pertama\n>";
    cin>>bil1;
	cout<<"Masukkan angka pertama\n>";
	cin>>bil2;

    switch (operasi) {
        case '+':
            cout << bil1 << " + " << bil2 << " = " << bil1 + bil2 << endl;
            break;
        case '-':
            cout << bil1 << " - " << bil2 << " = " << bil1 - bil2 << endl;
            break;
        case '*':
            cout << bil1 << " * " << bil2 << " = " << bil1 * bil2 << endl;
            break;
        case '/':
            cout << bil1 << " / " << bil2 << " = " << bil1 / bil2 << endl;
            break;
        case '%':
            cout << bil1 << " % " << bil2 << " = " << bil1 % bil2 << endl;
            break;
        default:
            cout << "Error! Kamu tidak memasukkan operasi dengan benar\n";
            break;
    }

    return(system("pause"));
}