#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#include "startup.h"

using namespace std;

int kolom,baris,jalan,pilih_menu,banyak_jalan=0,gerakan_AI[]={1,2,3,4,5,6,7,8,9};
char kembali,pilih_tipe,giliran='X',giliran_pemain[2];
char papan[3][3];
string pemain[2][2]={{"","1"},{"","2"}};
bool seri=false,AI,AI_Jalan;

void menu()
{
    cout<<"+===================+\n";
    cout<<"|        Menu       |\n";
    cout<<"|1 Coop             |\n";
    cout<<"|2 Vs AI            |\n";
    cout<<"|3 Quit             |\n";
    cout<<"|                   |\n";
    cout<<"+===================+\n";
}
void pilih_giliran()
{

    if (giliran==giliran_pemain[0])
        cout<<"Giliran "<<pemain[0][0]<<" untuk jalan\n";
    else
        if (!AI)
            cout<<"Giliran "<<pemain[1][0]<<" untuk jalan\n";
        else
        {
            cout<<"Tunggu "<<pemain[1][0]<<" untuk memilih jalan\n";
            sleep(2);
            AI_Jalan=true;
        }

    
}
void logo()
{
    cout<<" _____ _____ _____   _____ ___  _____   _____ _____ _____\n";
    cout<<"|_   _|_   _/  __ \\ |_   _/ _ \\/  __ \\ |_   _|  _  |  ___|\n";
    cout<<"  | |   | | | /  \\/   | |/ /_\\ \\ /  \\/   | | | | | | |__\n";
    cout<<"  | |   | | | |       | ||  _  | |       | | | | | |  __|\n";
    cout<<"  | |  _| |_| \\__/\\   | || | | | \\__/\\   | | \\ \\_/ / |___\n";
    cout<<"  \\_/  \\___/ \\____/   \\_/\\_| |_/\\____/   \\_/  \\___/\\____/\n\n";
}
void display_permainan()
{
    system("cls");
    cout<<"["<<giliran_pemain[0]<<"]"<<"Pemain 1: "<<pemain[0][0]<<endl;
    cout<<"["<<giliran_pemain[1]<<"]"<<"Pemain 2: "<<pemain[1][0]<<endl;
    cout<<"\t\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t\t  "<<papan[0][0]<<"  |  "<<papan[0][1]<<"  |  "<<papan[0][2]<<endl;
    cout<<"\t\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t\t  "<<papan[1][0]<<"  |  "<<papan[1][1]<<"  |  "<<papan[1][2]<<endl;
    cout<<"\t\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t\t  "<<papan[2][0]<<"  |  "<<papan[2][1]<<"  |  "<<papan[2][2]<<endl;
}

bool gameselesai()
{
    // mengecek kesamaan baris dan kolom
    for (int i=0;i<=2;i++)
    {
        if ((papan[i][0]==papan[i][1]&&papan[i][0]==papan[i][2])||papan[0][i]==papan[1][i]&&papan[0][i]==papan[2][i])
            return false;
        else if (papan[0][0]==papan[1][1]&&papan[0][0]==papan[2][2]||papan[2][0]==papan[1][1]&&papan[2][0]==papan[0][2])
            return false;
    }
    return true;
}

void memilih_player()
{
    system("cls");logo();
    cout<<"Masukkan nama player 1\n>";
    cin.ignore();
    getline(cin,pemain[0][0]);
    system("cls");logo();
    menu_tipe:
    cout<<"Kamu pemain 1 ingin sebagai apa?(O/X)\n>";
    cin>>pilih_tipe;
    switch (pilih_tipe)
    {
        case 'O':
        case 'o':
            giliran_pemain[0]='O';
            giliran_pemain[1]='X';
            break;
        case 'X':
        case 'x':
            giliran_pemain[0]='X';
            giliran_pemain[1]='O';
            break;
        default:
            cout<<"Kamu tidak memilih huruf dengan benar!";
            system("pause");system("cls");logo();goto menu_tipe;
            break;
    }
    if (!AI)
    {
        system("cls");logo();
        cout<<"Masukkan nama player 2\n>";
        cin.ignore();
        getline(cin,pemain[1][0]);
    }
    else
    {
        srand(time(0));
        string nama[]={"Budianto Adi","Adi Korsa","Raditya Gilang","Beni Arianto","Cici Lecia"};
        pemain[1][0]=nama[rand()%5];
    }
}

void pemain_jalan()
{
    display_permainan();
    pilih_giliran();
    if (!AI || AI_Jalan==false)
    {
        cout<<">";cin>>jalan;
    }
    if (AI_Jalan)
        jalan=gerakan_AI[rand()%9];        
    if (1<=jalan&&jalan<=9)
        for (int i=1;i<=jalan;i++)
        {
            baris=(i-1)/3;
            kolom=(i-1)%3;
        }
    else
    {
        if (!AI)
        {
            cout<<"Pilihan Invalid"<<endl;
            system("pause");
        }
        pemain_jalan();
    }

    if (giliran=='X'&&papan[baris][kolom]!='X'&&papan[baris][kolom]!='O')
    {
        papan[baris][kolom]='X';giliran='O';
        if (AI_Jalan)
            AI_Jalan=false;
    }
    else if (giliran=='O'&&papan[baris][kolom]!='X'&&papan[baris][kolom]!='O')
    {
        papan[baris][kolom]='O';giliran='X';
        if (AI_Jalan)
            AI_Jalan=false;
    }
    else
    {
        if (!AI||AI_Jalan==false)
        {
            cout<<"Kotak "<<jalan<<" sudah terisi oleh "<<papan[baris][kolom]<<", silahkan pilih kotak lainnya\n";
            system("pause");
        }
        pemain_jalan();
    }
}

void inisiasi_papan()
{
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            papan[i][j] = i * 3 + j + 1 + '0';
}
void selesai()
{
    system("cls");
    cout<<"  /$$$$$$                                              /$$          /$$$$$\n";
    cout<<" /$$__  $$                                            |__/         |__  $$\n";
    cout<<"| $$  \\__/  /$$$$$$  /$$$$$$/$$$$   /$$$$$$   /$$$$$$  /$$            | $$ /$$   /$$ /$$$$$$/$$$$   /$$$$$$   /$$$$$$\n";
    cout<<"|  $$$$$$  |____  $$| $$_  $$_  $$ /$$__  $$ |____  $$| $$            | $$| $$  | $$| $$_  $$_  $$ /$$__  $$ |____  $$\n";
    cout<<" \\____  $$  /$$$$$$$| $$ \\ $$ \\ $$| $$  \\ $$  /$$$$$$$| $$       /$$  | $$| $$  | $$| $$ \\ $$ \\ $$| $$  \\ $$  /$$$$$$$\n";
    cout<<" /$$  \\ $$ /$$__  $$| $$ | $$ | $$| $$  | $$ /$$__  $$| $$      | $$  | $$| $$  | $$| $$ | $$ | $$| $$  | $$ /$$__  $$\n";
    cout<<"|  $$$$$$/|  $$$$$$$| $$ | $$ | $$| $$$$$$$/|  $$$$$$$| $$      |  $$$$$$/|  $$$$$$/| $$ | $$ | $$| $$$$$$$/|  $$$$$$$\n";
    cout<<"\\______/  \\_______/|__/ |__/ |__/| $$____/  \\_______/|__/       \\______/  \\______/ |__/ |__/ |__/| $$____/  \\_______/\n";
    cout<<"                                 | $$                                                            | $$\n";               
    cout<<"                                 | $$                                                            | $$\n";
    cout<<"                                  |__/                                                            |__/\n";
    getch();
}

int main()
{
    judul("Array 2 Dimensi","Tic Tac Toe","Beta v1.0");
    mulai:
    inisiasi_papan();
    logo();
    menu();
    cout<<">";cin>>pilih_menu;
    switch(pilih_menu)
    {
        case 1:
            AI=false,AI_Jalan=false;
            memilih_player();
            while (gameselesai())
            {
                if (banyak_jalan==9)
                {            
                    seri=true;
                    goto gameover;
                }
                    pemain_jalan();
                    ++banyak_jalan;
            }
            break;
        case 2:
            AI=true,AI_Jalan=true;
            memilih_player();
            while (gameselesai())
            {
                if (banyak_jalan==9)
                {            
                    seri=true;
                    goto gameover;
                }
                    pemain_jalan();
                    ++banyak_jalan;
            }
            break;
        case 3:
            goto selesai; 
            break;
        default:
            cout<<"Masukkan angka dengan benar\n";getch();goto mulai;
    }
    
    gameover:
    display_permainan();
    if (seri)
        cout<<"SERI!!";
    else if (giliran==giliran_pemain[0])
        cout<<"Selamat, player "<<pemain[1][1]<<": "<<pemain[1][0]<<" menang\n";
    else if (giliran==giliran_pemain[1])
        cout<<"Selamat, player "<<pemain[0][1]<<": "<<pemain[0][0]<<" menang\n";
    cek_selesai:
    getch();
    getch();system("cls");display_permainan();
    cout<<"Apakah anda ingin bermain lagi?\n";
    cin>>kembali;
    switch (kembali)
    {
        case 'Y':
        case 'y':
            banyak_jalan=0;
            system("cls");goto mulai;
            break;
        case 'N':
        case 'n':
            goto selesai;
            break;
        default:
            cout<<"Masukkan huruf dengan benar!!\n";
            goto cek_selesai;
            break;
    }
    selesai:
    selesai();
}