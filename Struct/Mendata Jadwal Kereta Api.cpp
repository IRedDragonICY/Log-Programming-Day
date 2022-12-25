#include <iostream>
#include <string>

using namespace std;

const int MAX_KAI = 10;

struct Kereta
{
    string nama;
    string jenis;
    int kelas;
    string asal;
    string tujuan;
    string waktu_berangkat;
    string waktu_sampai;
};

int main()
{
    Kereta kereta[MAX_KAI];
    int jumlah_kereta = 0;

    while (true)
    {
        cout << "Menu: " << endl;
        cout << "1. Tambah kereta api" << endl;
        cout << "2. Lihat jadwal kereta api" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan: ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            // Tambah kereta api
            if (jumlah_kereta >= MAX_KAI)
            {
                cout << "Maaf, stok kereta api sudah penuh!" << endl;
            }
            else
            {
                cout << "Masukkan nama kereta api: ";
                cin >> kereta[jumlah_kereta].nama;

                cout << "Masukkan jenis kereta api: ";
                cin >> kereta[jumlah_kereta].jenis;

                cout << "Masukkan kelas kereta api: ";
                cin >> kereta[jumlah_kereta].kelas;

                cout << "Masukkan asal kereta api: ";
                cin >> kereta[jumlah_kereta].asal;

                cout << "Masukkan tujuan kereta api: ";
                cin >> kereta[jumlah_kereta].tujuan;

                cout << "Masukkan waktu berangkat kereta api: ";
                cin >> kereta[jumlah_kereta].waktu_berangkat;

                cout << "Masukkan waktu sampai kereta api: ";
                cin >> kereta[jumlah_kereta].waktu_sampai;

                jumlah_kereta++;
            }
        }
        else if (pilihan == 2)
        {
            // Lihat jadwal kereta api
            if (jumlah_kereta == 0)
            {
                cout << "Belum ada kereta api yang tersimpan." << endl;
            }
            else
            {
                cout << "Jadwal kereta api: " << endl;
                for (int i = 0; i < jumlah_kereta; i++)
                {
                    cout << i + 1 << ". " << kereta[i].nama << endl;
                    cout << " Jenis: " << kereta[i].jenis << endl;
                    cout << " Kelas: " << kereta[i].kelas << endl;
                    cout << " Asal: " << kereta[i].asal << endl;
                    cout << " Tujuan: " << kereta[i].tujuan << endl;
                    cout << " Waktu berangkat: " << kereta[i].waktu_berangkat << endl;
                    cout << " Waktu sampai: " << kereta[i].waktu_sampai << endl;
                    cout << endl;
                }
            }
        }
        else if (pilihan == 3)
        {
            // Keluar
            break;
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }
    }

    return 0;
}
