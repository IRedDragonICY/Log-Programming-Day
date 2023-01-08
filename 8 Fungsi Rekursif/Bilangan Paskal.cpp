#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int KoofBinomial(int n,int k);

void SegitigaPaskal(int n)
{
    for (int baris=0;baris<n;baris++)
    {
        for (int i=0;i<=baris;i++)
            cout<<" "<<KoofBinomial(baris, i);
        cout<<endl;
    }
}
int KoofBinomial(int n,int k)
{
    int num=1;
    if (k>n-k)
        k=n-k;
    for (int i=0;i<k;++i)
    {
        num*=(n-i);
        num/=(i+1);
    }
    return num;
}

int main()
{
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,10);
	cout<<"Bilangan PaskalV1.0\n";
	cout<<"Disini akan menampilkan bilangan paskal dalam bentuk piramida\n";
	cout<<"Di buat oleh ";
	SetConsoleTextAttribute(h,15);
	cout<<"Ndik\n\n\n";
	sleep(2);
	system("cls");
    
    int n;
    cout<<"Banyak baris pada segitiga paskal yang Anda diinginkan\n>";
    cin>>n;
    cout<<"-==Segitiga Paskal dengan "<<n<<" baris==-\n";
    SegitigaPaskal(n);
    
}
