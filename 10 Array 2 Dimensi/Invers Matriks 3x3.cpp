#include <iostream>
#include <conio.h>
#include <math.h>
#include <bits/stdc++.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Mencari Invers Matriks 3x3", "1.0");
    cout << "Menentukan Invers Matriks Ordo 3x3" << endl;
    double matriks[3][3], invers_matriks[3][3], determinan;
    char pilihan;
input_matriks:
    cout << "-==Memasukkan elemen matriks==- " << endl;
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
        {
            cout << "Masukkan elemen matriks[" << j + 1 << "][" << k + 1 << "]: ";
            cin >> matriks[j][k];
        }
cek_input_matriks:
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
            cout << matriks[j][k] << " ";
        cout << endl;
    }
    cout << "Apakah data yang anda masukkan ke dalam matriks sudah benar? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'Y':
    case 'y':
        break;
    case 'N':
    case 'n':
        system("cls");
        goto input_matriks;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_input_matriks;
    }
    // menghitung determinan matriks
    determinan = matriks[0][0] * matriks[1][1] * matriks[2][2] + matriks[0][1] * matriks[1][2] * matriks[2][0] + matriks[0][2] * matriks[1][0] * matriks[2][1] - matriks[0][2] * matriks[1][1] * matriks[2][0] - matriks[0][0] * matriks[1][2] * matriks[2][1] - matriks[0][1] * matriks[1][0] * matriks[2][2];
    // menghitung koofaktor matriks
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
            // rumus laplace
            invers_matriks[j][k] = matriks[(j + 1) % 3][(k + 1) % 3] * matriks[(j + 2) % 3][(k + 2) % 3] - matriks[(j + 1) % 3][(k + 2) % 3] * matriks[(j + 2) % 3][(k + 1) % 3];
    // mengubah posisi koofaktor matriks menjadi adjoin matriks
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i < j)
                swap(invers_matriks[i][j], invers_matriks[j][i]);
    // membagi adjoin matriks dengan determinan matriks
    for (int j = 0; j < 3; j++)
        for (int k = 0; k < 3; k++)
            invers_matriks[j][k] /= determinan;
    cout << "-==Hasil Invers Matriks==- " << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
            cout << invers_matriks[j][k] << " ";
        cout << endl;
    }

cek_selesai:
    cout << "Apakah Anda ingin mencetak minor matriks lainnya? (y/n): ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'Y':
    case 'y':
        system("cls");
        goto input_matriks;
    case 'N':
    case 'n':
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_selesai;
    }
}