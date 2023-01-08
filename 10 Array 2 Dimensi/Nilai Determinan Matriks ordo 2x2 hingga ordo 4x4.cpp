#include <iostream>
#include <conio.h>
#include "startup.h"
using namespace std;

int main()
{
    judul("Array 2 Dimensi", "Nilai Determinan Matriks", "1.0");
    int ordo, determinan;
    char pilihan;
// inisialisasi matriks
memilih_ordo:
    cout << "============================" << endl;
    cout << "| 1. 2x2 | 2. 3x3 | 3. 4x4 |" << endl;
    cout << "============================" << endl;
    cout << "Masukkan pilihan ordo matriks: ";
    cin >> ordo;
    if (ordo < 1 || ordo > 3)
    {
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto memilih_ordo;
    }
    ordo++;
    int matriks[ordo][ordo];
    cout << "Anda akan mencari nilai determinan matriks dengan ordo " << ordo << "x" << ordo << endl;
    getch();
    system("cls");
input_matriks:
    cout << "-==Memasukkan elemen matriks==- " << endl;
    for (int j = 0; j < ordo; j++)
        for (int k = 0; k < ordo; k++)
        {
            cout << "Masukkan elemen matriks[" << j + 1 << "][" << k + 1 << "]: ";
            cin >> matriks[j][k];
        }
cek_input_matriks:
    cout << "-==Mencetak matriks yang telah dibuat==- " << endl;
    for (int j = 0; j < ordo; j++)
    {
        for (int k = 0; k < ordo; k++)
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
output_determinan:
    cout << "-==Mencari nilai determinan matriks==- " << endl;
    switch (ordo)
    {
    case 2:
        determinan = matriks[0][0] * matriks[1][1] - matriks[0][1] * matriks[1][0];
        cout << "rumus determinan 2x2           : " << matriks[0][0] << "*" << matriks[1][1] << " - " << matriks[0][1] << "*" << matriks[1][0] << endl;
        cout << "Nilai determinan matriks adalah: " << determinan << endl;
        break;
    case 3:
        determinan = matriks[0][0] * matriks[1][1] * matriks[2][2] + matriks[0][1] * matriks[1][2] * matriks[2][0] + matriks[0][2] * matriks[1][0] * matriks[2][1] - matriks[0][2] * matriks[1][1] * matriks[2][0] - matriks[0][0] * matriks[1][2] * matriks[2][1] - matriks[0][1] * matriks[1][0] * matriks[2][2];
        cout << "rumus determinan 3x3           : " << matriks[0][0] << "*" << matriks[1][1] << "*" << matriks[2][2] << " + " << matriks[0][1] << "*" << matriks[1][2] << "*" << matriks[2][0] << " + " << matriks[0][2] << "*" << matriks[1][0] << "*" << matriks[2][1] << " - " << matriks[0][2] << "*" << matriks[1][1] << "*" << matriks[2][0] << " - " << matriks[0][0] << "*" << matriks[1][2] << "*" << matriks[2][1] << " - " << matriks[0][1] << "*" << matriks[1][0] << "*" << matriks[2][2] << endl;
        cout << "Nilai determinan matriks adalah: " << determinan << endl;
        break;
    case 4:
        determinan = matriks[0][0] * matriks[1][1] * matriks[2][2] * matriks[3][3] + matriks[0][1] * matriks[1][2] * matriks[2][3] * matriks[3][0] + matriks[0][2] * matriks[1][3] * matriks[2][0] * matriks[3][1] + matriks[0][3] * matriks[1][0] * matriks[2][1] * matriks[3][2] - matriks[0][3] * matriks[1][2] * matriks[2][1] * matriks[3][0] - matriks[0][1] * matriks[1][0] * matriks[2][3] * matriks[3][2] - matriks[0][2] * matriks[1][3] * matriks[2][0] * matriks[3][1] - matriks[0][0] * matriks[1][1] * matriks[2][3] * matriks[3][2] - matriks[0][1] * matriks[1][2] * matriks[2][0] * matriks[3][3] - matriks[0][2] * matriks[1][0] * matriks[2][1] * matriks[3][3];
        cout << "rumus determinan 4x4           : " << matriks[0][0] << "*" << matriks[1][1] << "*" << matriks[2][2] << "*" << matriks[3][3] << " + " << matriks[0][1] << "*" << matriks[1][2] << "*" << matriks[2][3] << "*" << matriks[3][0] << " + " << matriks[0][2] << "*" << matriks[1][3] << "*" << matriks[2][0] << "*" << matriks[3][1] << " + " << matriks[0][3] << "*" << matriks[1][0] << "*" << matriks[2][1] << "*" << matriks[3][2] << " - " << matriks[0][3] << "*" << matriks[1][2] << "*" << matriks[2][1] << "*" << matriks[3][0] << " - " << matriks[0][1] << "*" << matriks[1][0] << "*" << matriks[2][3] << "*" << matriks[3][2] << " - " << matriks[0][2] << "*" << matriks[1][3] << "*" << matriks[2][0] << "*" << matriks[3][1] << " - " << matriks[0][0] << "*" << matriks[1][1] << "*" << matriks[2][3] << "*" << matriks[3][2] << " - " << matriks[0][1] << "*" << matriks[1][2] << "*" << matriks[2][0] << "*" << matriks[3][3] << " - " << matriks[0][2] << "*" << matriks[1][0] << "*" << matriks[2][1] << "*" << matriks[3][3] << endl;
        cout << "Nilai determinan matriks adalah: " << determinan << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto output_determinan;
    }
    getch();
    system("cls");
cek_keluar:
    cout << "Apakah Anda ingin mencari determinan matriks lagi? (y/n) : ";
    cin >> pilihan;
    switch (pilihan)
    {
    case 'y':
        system("cls");
        goto memilih_ordo;
        break;
    case 'n':
        cout << "Terima kasih telah menggunakan program ini" << endl;
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        getch();
        system("cls");
        goto cek_keluar;
    }
    return 0;
}