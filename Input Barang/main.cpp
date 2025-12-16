#include <iostream>
#include <string>

using namespace std;

// 1. Membuat struktur untuk menyimpan data per barang
struct Barang {
    int idBarang;
    string namaBarang;
    int jumlahBarang;
};

int main()
{
    // Kriteria: Jumlah data maksimal adalah 50
    Barang inventaris[50];
    int jumlahData = 0; // Variabel untuk menghitung berapa data yang sudah tersimpan
    int pilihan;

    // Loop menu utama
    do {
        // Tampilan Menu
        cout << "\n=== MENU INVENTARIS BARANG ===" << endl;
        cout << "1. Input Data Barang" << endl;
        cout << "2. View Data Barang" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: // INPUT
            if (jumlahData < 50) {
                cout << "\n-- Input Data Ke-" << (jumlahData + 1) << " --" << endl;

                cout << "Masukkan ID Barang (Angka): ";
                cin >> inventaris[jumlahData].idBarang;

                cout << "Masukkan Nama Barang (Satu kata/tanpa spasi): ";
                cin >> inventaris[jumlahData].namaBarang;

                cout << "Masukkan Jumlah Barang: ";
                cin >> inventaris[jumlahData].jumlahBarang;

                // Setelah data disimpan, tambah penghitung jumlah data
                jumlahData++;
                cout << "Data berhasil disimpan!" << endl;
            }
            else {
                cout << "Maaf, penyimpanan penuh (Maksimal 50 data)!" << endl;
            }
            break;

        case 2: // VIEW
            cout << "\n=== DAFTAR BARANG ===" << endl;
            if (jumlahData == 0) {
                cout << "Data masih kosong." << endl;
            }
            else {
                // Header Tabel Sederhana
                cout << "No\tID\tNama\t\tJumlah" << endl;
                cout << "--------------------------------------" << endl;

                // Perulangan untuk menampilkan semua data yang sudah diinput
                for (int i = 0; i < jumlahData; i++) {
                    cout << (i + 1) << "\t"
                        << inventaris[i].idBarang << "\t"
                        << inventaris[i].namaBarang << "\t\t"
                        << inventaris[i].jumlahBarang << endl;
                }
            }
            break;

        case 3: // EXIT
            cout << "Terima kasih, program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }

    } while (pilihan != 3); // Program akan terus berulang selama pilihan bukan 3

    return 0;
}