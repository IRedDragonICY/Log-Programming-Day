#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    int baris,kolom;   
    int menu;
    char pilihan;
    string operasi;
    judul("Array 2 Dimensi","Operasi Penjumlahan dan Pengurangan Matriks","1.0")
    menu:
    cout<<"+============================+\n";
    cout<<"| Program menghitung matriks |\n";
    cout<<"| 1  Penjumlahan             |\n";
    cout<<"| 2  Pengurangan             |\n";
    cout<<"+============================+\n";
    cout<<"Pilih menu: ";
    cin>>menu;
    switch (menu)
    {
        case 1:
            operasi="penjumlahan";
            break;
        case 2:
            operasi="pengurangan";
            break;
        default:
            cout<<"Menu tidak tersedia!"<<endl;
            getch(); system("cls");
            goto menu;
            break;
    }
    cout<<"Menentukan jumlah baris: ";
    cin>>baris;
    if (baris<0);
    {
        cout<<"Jumlah baris tidak boleh negatif!"<<endl;
        getch(); system("cls");
        goto menu;
    }
    cout<<"Menentukan jumlah kolom: ";
    
    cin>>kolom;
    int matriks_A[baris][kolom];
    int matriks_B[baris][kolom];
    int matriks_C[baris][kolom];
    cout<<"Disini akan melakukan operasi "<<operasi<<" matriks "<<baris<<"x"<<kolom<<endl;
    cout<<"Tekan enter untuk melanjutkan...";
    getch();system("cls");
    input_matriks_A:
    cout<<"-=== Memasukkan elemen matriks A ===-\n";
    for (int i=0;i<baris;i++)
        for (int j=0;j<kolom;j++)
        {
            cout<<"Masukkan elemen matriks["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriks_A[i][j];
        }
    system("cls");
    mengecek_input_matriks_A:
    cout<<"Apakah elemen matriks A sudah benar? (y/n): ";
    cin>>pilihan;
    switch (pilihan)
    {
        case 'y':
            break;
        case 'n':
            goto input_matriks_A;
            break;
        default:
            cout<<"Pilihan tidak tersedia!"<<endl;
            getch(); system("cls");
            goto mengecek_input_matriks_A;
            break;
    }
    system("cls");
    input_matriks_B:
    cout<<"-=== Memasukkan elemen matriks B ===-\n";
    for (int i=0;i<baris;i++)
        for (int j=0;j<kolom;j++)
        {
            cout<<"Masukkan elemen matriks["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriks_B[i][j];
        }
    system("cls");
    mengecek_input_matriks_B:
    cout<<"Apakah elemen matriks B sudah benar? (y/n): ";
    cin>>pilihan;
    switch (pilihan)
    {
        case 'y':
            break;
        case 'n':
            goto input_matriks_B;
            break;
        default:
            cout<<"Pilihan tidak tersedia!"<<endl;
            getch(); system("cls");
            goto mengecek_input_matriks_B;
            break;
    }
    for (int i=0;i<baris;i++)
        for (int j=0;j<kolom;j++)
        {
            if (menu==1)
                matriks_C[i][j]=matriks_A[i][j]+matriks_B[i][j];
            else if (menu==2)
                matriks_C[i][j]=matriks_A[i][j]-matriks_B[i][j];
        }
    cout<<"-=== Hasil operasi "<<operasi<<" matriks A dan B ===-\n";
    for (int i=0;i<baris;i++)
    {
        for (int j=0;j<kolom;j++)
            cout<<matriks_A[i][j]<<"+"<<matriks_B[i][j]<<"="<<matriks_C[i][j]<<" ";
        cout<<endl;
    }
}