#include <iostream>
using namespace std;

void terbesar(int *angka,int n)
{
    int min=angka[0];
    for(int i=0;i<n;i++)
    {
        if(angka[i]<min)
            min=angka[i];
    }
    cout<<"Angka terbesar adalah : "<<min<<endl;
}
int main()
{
    cout<<"-= Program mencari angka terbesar dengan pointer =-"<<endl;
    cout<<"Masukkan jumlah angka yang ingin di cek : ";
    int n;
    cin>>n;
    int *angka = new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Masukkan angka ke-"<<i+1<<" : ";
        cin>>angka[i];
    }
    terbesar(angka,n);
}