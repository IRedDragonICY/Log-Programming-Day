#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Menghitung Lembar uang V1.0\n";
	cout<<"Disini akan menghitung lembar yang Anda inputkan\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	
	long long int uang, jumlah_100000, jumlah_50000, jumlah_20000, jumlah_10000, jumlah_5000, jumlah_2000, jumlah_1000, jumlah_500, jumlah_200, jumlah_100, jumlah_50, sisa_a, sisa_b, sisa_c, sisa_d, sisa_e, sisa_f, sisa_g, sisa_h, sisa_i, sisa_j; 
	cout<<"Masukkan nilai uang Anda: ";
	cin>>uang;
	jumlah_100000=uang/100000;
	sisa_a=uang%100000;
	jumlah_50000=sisa_a/50000;
	sisa_b=sisa_a%50000;
	jumlah_20000=sisa_b/20000;
	sisa_c=sisa_b%20000;
	jumlah_10000=sisa_c/10000;
	sisa_d=sisa_c%10000;
	jumlah_5000=sisa_d/5000;
	sisa_e=sisa_d%5000;
	jumlah_2000=sisa_e/2000;
	sisa_f=sisa_e%2000;
	jumlah_1000=sisa_f/1000;
	sisa_g=sisa_f%1000;
	jumlah_500=sisa_g/500;
	sisa_h=sisa_g%500;
	jumlah_200=sisa_h/200;
	sisa_i=sisa_h%200;
	jumlah_100=sisa_i/100;
	sisa_j=sisa_i%100;
	jumlah_50=sisa_j/50;
	
	cout<<"Anda memasukkan uang "<< uang<<" Rp"<<endl;
	cout<<jumlah_100000+jumlah_50000+jumlah_20000+jumlah_10000+jumlah_5000+jumlah_2000+jumlah_1000+jumlah_500+jumlah_200+jumlah_100+jumlah_50<<" lembar dengan: "<<endl;
	if (jumlah_100000!=0)
		cout<<"Jumlah 100000 = "<<jumlah_100000<<" dengan total sebesar "<<jumlah_100000*100000<<" Rp"<<endl;
	if (jumlah_50000!=0)
		cout<<"Jumlah 50000= "<<jumlah_50000<<" dengan total sebesar "<<jumlah_50000*50000<<" Rp"<<endl;
	if (jumlah_20000!=0)
		cout<<"Jumlah 20000 = "<<jumlah_20000<<" dengan total sebesar "<<jumlah_20000*20000<<" Rp"<<endl;
	if (jumlah_10000!=0)
		cout<<"Jumlah 10000 = "<<jumlah_10000<<" dengan total sebesar "<<jumlah_10000*10000<<" Rp"<<endl;
	if (jumlah_5000!=0)
		cout<<"Jumlah 5000 = "<<jumlah_5000<<" dengan total sebesar "<<jumlah_5000*5000<<" Rp"<<endl;
	if (jumlah_2000!=0)
		cout<<"Jumlah 2000 = "<<jumlah_2000<<" dengan total sebesar "<<jumlah_2000*2000<<" Rp"<<endl;
	if (jumlah_1000!=0)
		cout<<"Jumlah 1000 = "<<jumlah_1000<<" dengan total sebesar "<<jumlah_1000*1000<<" Rp"<<endl;
	if (jumlah_500!=0)
		cout<<"Jumlah 500 = "<<jumlah_500<<" dengan total sebesar "<<jumlah_500*500<<" Rp"<<endl;
	if (jumlah_200!=0)
		cout<<"Jumlah 200 = "<<jumlah_200<<" dengan total sebesar "<<jumlah_200*200<<" Rp"<<endl;
	if (jumlah_100!=0)
		cout<<"Jumlah 100 = "<<jumlah_100<<" dengan total sebesar "<<jumlah_100*100<<" Rp"<<endl;
	if (jumlah_50!=0)
		cout<<"Jumlah 50 = "<<jumlah_50<<" dengan total sebesar "<<jumlah_50*50<<" Rp"<<endl;
}