#include <iostream>
#include "startup.h"
using namespace std;

int sisa,session=1,pil_menu,menu_1=0,menu_2=0,menu_3=0,menu_4=0,menu_5=0,harga,uang,n;
char tugas,kembali;
void membayar()
{
    harga=menu_1*15000+menu_2*20000+menu_3*25000+menu_4*23500+menu_5*25550;
    if (harga>=50000)
        harga=harga*90/100;
    else if (harga<50000&&harga>40000)
        harga=harga*95/100;
    sisa=uang-harga;

    if (sisa<0)
    {
        cout<<"Uang Anda tidak cukup";
        system("pause");
        session=1;
    } 
    else
        session=0;
}
void memilih_eskrim_tambah()
{
    cout<<"Pilih menu yang ingin ditambahkan\n>";
    cin>>pil_menu;
    cout<<"Masukkan jumlah\n>";
    cin>>n;
        switch (pil_menu)
    {
        case 1:
            menu_1+=n;
            break;
        case 2:
            menu_2+=n;
            break;
        case 3:
            menu_3+=n;
            break;
        case 4:
            menu_4+=n;
            break;
        case 5:
            menu_5+=n;
            break;
            
    }
}
void memilih_eskrim_kurang()
{
    cout<<"Pilih menu yang ingin dikurangkan\n>";
    cin>>pil_menu;
    cout<<"Masukkan jumlah\n>";
    cin>>n;
        switch (pil_menu)
    {
        case 1:
            menu_1-=n;
            break;
        case 2:
            menu_2-=n;
            break;
        case 3:
            menu_3-=n;
            break;
        case 4:
            menu_4-=n;
            break;
        case 5:
            menu_5-=n;
            break;
    }
}

void struk()
{
    cout<<" STRUK TIF Ice Cream";
    cout<<"Produk                Qty Total Harga";
    if (menu_1!=0)
    cout<<"Chocolate Strawberry  "<<menu_1<<"  "<<menu_1*15000;
    if (menu_2!=0)
    cout<<"Chocolate Vanila      "<<menu_2<<"  "<<menu_2*20000;
    if (menu_3!=0)
    cout<<"Chocolate Capucinno   "<<menu_3<<"  "<<menu_3*25000;
    if (menu_4!=0)
    cout<<"Chocolate Taro        "<<menu_4<<"  "<<menu_4*23500;
    if (menu_5!=0)
    cout<<"Chocolate Matcha      "<<menu_5<<"  "<<menu_5*25550;
}
void menu_eskrim()
{
    system("cls");
    cout<<"+------------------------------------------+\n";
    cout<<"|            TIF Ice Cream                 |\n";
    cout<<"|                Menu                      |\n";
    cout<<"|                             Harga        |\n";
    cout<<"| 1 Chocolate Strawberry  : Rp. 15.000 "<<"["<<menu_1<<"] |\n";
    cout<<"| 2 Chocolate Vanila      : Rp. 20.000 "<<"["<<menu_2<<"] |\n";
    cout<<"| 3 Chocolate Capucinno   : Rp. 25.000 "<<"["<<menu_3<<"] |\n";
    cout<<"| 4 Chocolate Taro        : Rp. 23.500 "<<"["<<menu_4<<"] |\n";
    cout<<"| 5 Chocolate Matcha      : Rp. 25.550 "<<"["<<menu_5<<"] |\n";
    cout<<"+------------------------------------------+\n";
    cout<<"| b= Membeli                       |\n";
    cout<<"| t= tambah menu                   |\n";
    cout<<"| k= kurang menu                   |\n";
    cout<<"| q= keluar/ tidak menjadi membeli |\n";
    cout<<"+----------------------------------+\n";
    cout<<"Anda ingin melakukan apa?\n>";
    cin>>tugas;
    switch (tugas)
    {
        case 'b':
        case 'B':
            membayar();
            break;
        case 't':    
        case 'T':
            memilih_eskrim_tambah();
            break;
        case 'k':
        case 'K':
            memilih_eskrim_kurang();
            break;
        case 'q':
        case 'Q':
            cout<<"Anda tidak membeli apa-apa";
            session=1;
            break;
    }

}

int main()
{
    judul("Pertemuan 8 (Fungsi)","TIF Ice Cream","v1.1");
    cout<<"Masukkan uang Anda\n>";
    cin>>uang;
    system("cls");
    while (session!=0)
    {
        menu_eskrim();
        system("cls");
    }
    cout<<"Harga Rp."<<harga;
    cout<<"Sisa uang Rp."<<uang;
    system("pause");
}
