#include <iostream>
#include <conio.h>
#include <iomanip>
#include <bits/stdc++.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Invers Matriks 2x2", "1.1");
    int ordo = 2;
    char pilihan;
mulai:
    cout << "Menginversekan matriks 2x2\n";
    getch();
    system("cls");
    double Matriks[ordo][ordo];
input_matriks:
    cout << "-== Mengisi Matriks ==-\n";
    for (int i = 0; i < ordo; i++)
        for (int j = 0; j < ordo; j++)
        {
            cout << "Masukkan nilai Matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> Matriks[i][j];
        }

cek_matriks:
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
            cout << Matriks[i][j] << " ";
        cout << endl;
    }
    cout << "Apakah data Matriks sudah benar? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
    case 'Y':
        break;
    case 'n':
    case 'N':
        getch();
        system("cls");
        goto input_matriks;
        break;
    default:
        cout << "Pilihan tidak tersedia\n";
        getch();
        system("cls");
        goto cek_matriks;
        break;
    }
    system("cls");
    cout << "-== Matriks 2x2 yang telah di invers==-\n";
    // Mencari determinan matriks 2x2
    double det = (Matriks[0][0] * Matriks[1][1]) - (Matriks[0][1] * Matriks[1][0]);
    // Menukar nilai matriks
    swap(Matriks[0][0], Matriks[1][1]);
    // Membalik nilai matriks
    Matriks[0][1] = -Matriks[0][1];
    Matriks[1][0] = -Matriks[1][0];
    // Membagi matriks dengan determinan
    for (int i = 0; i < ordo; i++)
        for (int j = 0; j < ordo; j++)
            Matriks[i][j] /= det;
    // Mencetak matriks
    for (int i = 0; i < ordo; i++)
    {
        for (int j = 0; j < ordo; j++)
            cout << Matriks[i][j] << setw(4);
        cout << endl;
    }

cek_selesai:
    getch();
    system("cls");
    cout << "Apakah anda ingin menginversekan matriks lain? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
    case 'Y':
        getch();
        system("cls");
        goto mulai;
        break;
    case 'n':
        cout << "Terima kasih telah menggunakan program ini\n";
        getch();
        system("cls");
        break;
    default:
        cout << "Pilihan tidak tersedia\n";
        getch();
        system("cls");
        goto cek_selesai;
        break;
    }
}
