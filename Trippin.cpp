#include <iostream>
#include <string.h>

using namespace std;


char user[50], kategori[50], lokasi[50];
int numKategori, numLokasi;

string namaWisata[] = {"Pantai Widodaren", "Tebing Breksi", "Bukit Teletubies"};
string kategoriWisata[] = {"Pantai", "Bukit", "Bukit"};
string lokasiWisata[] = {"Gunung Kidul", "Sleman", "Bantul"};

int main()
{
    system("CLS");

    cout << endl;
    cout << "========================= Trippin ==========================" << endl;
    cout << "============== Pencarian wisata alam di Jogja ==============" << endl;

    cout << endl;
    cout << endl;

    cout << "Masukkan Nama Anda : "; 
    cin >> user;

    cout << endl;
    cout << endl;

    cout << "Hallo, " << user << endl;
    
    cout << endl; 

    kategori:
    cout << "Pilihan kategori : " << endl;
    cout << " " << endl;
    cout << " [1] Pantai             " << endl;
    cout << " [2] Gunung             " << endl;
    cout << " [3] Bukit              " << endl;
    cout << " [0] Tampilkan Semua    " << endl;
    cout << " " << endl;

    cout << "Masukkan angka sesuai kategori yang diinginkan : ";
    cin >> numKategori;

    cout << endl;

    switch (numKategori)
    {
    case 1:
        strcpy(kategori, "Pantai");
        break;
    case 2:
        strcpy(kategori, "Gunung");
        break;
    case 3:
        strcpy(kategori, "Bukit");
        break;
    case 0:
        strcpy(kategori, "Pantai, Gunung, dan Bukit");
        break;
    default:
        cout << "Pilihan kategori yang anda pilih tidak tersedia..." << endl;
        cout << endl;
        goto kategori;
    }

    cout << endl;

    lokasi:
    cout << "Pilihan Lokasi : " << endl;
    cout << " " << endl;
    cout << " [1] Kaliurang           " << endl;
    cout << " [2] Gunung Kidul        " << endl;
    cout << " [3] Bantul              " << endl;
    cout << " [0] Tampilkan Semua     " << endl;
    cout << " " << endl;

    cout << "Masukkan angka sesuai lokasi yang dipilih : ";
    cin >> numLokasi;

    cout << endl;

    switch (numLokasi)
    {
    case 1:
        strcpy(lokasi, "Kaliurang");
        break;
    case 2:
        strcpy(lokasi, "Gunung Kidul");
        break;
    case 3:
        strcpy(lokasi, "Bantul");
        break;
    case 0:
        strcpy(lokasi, "Kaliurang, Gunung Kidul, dan Bantul");
        break;
    default:
        cout << "Pilihan lokasi yang anda pilih belum tersedia..." << endl;
        cout << endl;
        goto lokasi;
    }

    cout << endl;
    cout << "-----" << endl;
    cout << "Anda memilih kategori " << kategori << " yang berlokasi di " << lokasi << endl;
    cout << "-----" << endl;


    /*Menampilkan wisata*/

    cout << endl;
    cout << endl;
    cout << "Berikut adalah hasil pencarian : " << endl;
    cout << endl;

    int lengthWisata = sizeof(namaWisata)/sizeof(*namaWisata);

    for (int b = 0; b <= lengthWisata; b++)
    {
        cout << b << endl;
        if (kategori == kategoriWisata[b] && lokasi == lokasiWisata[b]){
            cout << "satu" << endl;
            cout << "Nama      : " << namaWisata[b] << endl;
            cout << "Kategori  : " << kategoriWisata[b] << endl;
            cout << "Lokasi    : " << lokasiWisata[b] << endl;
            cout << endl;
        } else if (lokasi == lokasiWisata[b]){
            cout << "dua" << endl;
            cout << "Nama      : " << namaWisata[b] << endl;
            cout << "Kategori  : " << kategoriWisata[b] << endl;
            cout << "Lokasi    : " << lokasiWisata[b] << endl;
            cout << endl;
        } else if (kategori == kategoriWisata[b]){
            cout << "tiga" << endl;
            cout << "Nama      : " << namaWisata[b] << endl;
            cout << "Kategori  : " << kategoriWisata[b] << endl;
            cout << "Lokasi    : " << lokasiWisata[b] << endl;
            cout << endl;
        } else {
            cout << "empat" << endl;
            cout << "Nama      : " << namaWisata[b] << endl;
            cout << "Kategori  : " << kategoriWisata[b] << endl;
            cout << "Lokasi    : " << lokasiWisata[b] << endl;
            cout << endl;
        }        
    }

    

    cout << endl;
    cout << endl;
    cin.get();
    return 0;
}
