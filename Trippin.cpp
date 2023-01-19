#include <iostream>
#include <string>


using namespace std;

// prototype function
void tulisWisata(int a);

// declaration
string user, kategoriFilter, lokasiFilter;
int numKategori, numLokasi;

struct wisata {
    string nama;
    string kategori;
    string lokasi;
    string tiket;
    string jamOperasi;
};

wisata wisataJogja[] = {
    {"Pantai Widodaren", "Pantai", "Gunung Kidul"},
    {"Bukit Pengilon", "Bukit", "Bantul"},
    {"Tebing Breksi", "Tebing", "Sleman"},
    {"Hutan Pinus", "Hutan", "Bantul"},
    {"Bukit Bintang", "Bukit", "Bantul"}
};

int lengthWisataJogja = sizeof(wisataJogja)/sizeof(*wisataJogja);


// program

int main()
{
    system("cls");


    kategori:

    string kategori[] = {"Pantai", "Bukit", "Hutan", "Curug", "Air Terjun", "Goa"};
    int lengthKategori = sizeof(kategori)/sizeof(*kategori);

    cout << "Berikut kategori wisata alam : " << endl;
    cout << endl;


    for (int i = 0; i < lengthKategori; i++)   
    {
        cout << " [" << i+1 << "] " << kategori[i] << endl;
    }
    cout << endl;


    cout << "Ketik angka sesuai kategori yang diinginkan : ";
    cin >> numKategori;
    cout << endl;

    cout << "----------" << endl;
    cout << endl;



    switch (numKategori)
    {
    case 1:
        kategoriFilter = kategori[0];
        break;
    case 2:
        kategoriFilter = kategori[1];
        break;
    case 3:
        kategoriFilter = kategori[2];
        break;
    case 4:
        kategoriFilter = kategori[3];
        break;
    case 5:
        kategoriFilter = kategori[4];
        break;
    case 6:
        kategoriFilter = kategori[5];
        break;
    default:
        cout << "Kategori yang Anda pilih belum tersedia..." << endl;
        cout << endl;
        goto kategori;
    }


    // memilih lokasi

    lokasi:

    string lokasi[] = {"Gunung Kidul", "Sleman", "Bantul", "Kaliurang"};
    int lengthLokasi = sizeof(lokasi) / sizeof(*lokasi);
    
    cout << "Berikut lokasi wisata alam : " << endl;
    cout << endl;

    for (int i = 0; i < lengthLokasi; i++)
    {
        cout << " [" << i+1 << "] " << lokasi[i] << endl;
    }
    cout << endl;


    cout << "Ketik angka sesuai lokasi yang diinginkan : ";
    cin >> numLokasi;
    cout << endl;

    cout << "----------" << endl;
    cout << endl;


    switch (numLokasi)
    {
    case 1:
        lokasiFilter = lokasi[0];
        break;
    case 2:
        lokasiFilter = lokasi[1];
        break;
    case 3:
        lokasiFilter = lokasi[2];
        break;
    case 4:
        lokasiFilter = lokasi[3];
        break;
    default:
        cout << "Lokasi yang anda pilih belum tersedia..." << endl;
        cout << endl;
        goto lokasi;
    }


    // menampilkan hasil

    cout << "Anda memilih kategori " << kategoriFilter << " yang berlokasi di " << lokasiFilter << endl;
    cout << endl;

    cout << "----------" << endl;
    cout << endl;

    cout << "Berikut adalah hasil pencarian : ";
    cout << endl;

    for (int i = 0; i < lengthWisataJogja; i++)
    {
        if (kategoriFilter == kategori[i] && lokasiFilter == lokasi[i])
        {
            tulisWisata(i);
        }
        
    }



    cout << endl;
    cout << endl;
    return 0;
}



// function

void tulisWisata (int a) {
    cout << "Nama       : " << wisataJogja[a].nama << endl;
    cout << "kategori   : " << wisataJogja[a].kategori << endl;
    cout << "lokasi     : " << wisataJogja[a].lokasi << endl;

    cout << endl;
}
