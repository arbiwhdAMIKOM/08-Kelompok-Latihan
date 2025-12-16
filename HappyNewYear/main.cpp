#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	// --- BAGIAN 1: ANIMASI TEKS "Happy New Year" ---
	string pesan = "Happy New Year";

	cout << endl; // Memberi jarak baris sedikit di atas

	// Loop untuk menampilkan huruf satu per satu
	for (int i = 0; i < pesan.length(); i++)
	{
		cout << pesan[i];
		Sleep(250); // Delay 250 ms sesuai soal
	}

	cout << endl << endl; // Pindah baris dua kali setelah tulisan selesai
	const int tinggi = 5;
	string map[tinggi] = {
		"11111001111100111110011111", // Baris 1 (Atas)
		"00001001000100000010010000", // Baris 2
		"11111001000100111110011111", // Baris 3 (Tengah)
		"10000001000100100000010001", // Baris 4
		"11111001111100111110011111"  // Baris 5 (Bawah)
	};

	unsigned char blok = 178;

	// Loop Baris (dari atas ke bawah)
	for (int i = 0; i < tinggi; i++)
	{
		// Loop Kolom (huruf per huruf dalam string map)
		for (int j = 0; j < map[i].length(); j++)
		{
			if (map[i][j] == '1') {
				cout << blok;
			}
			else {
				cout << " "; 
			}
		}
		cout << endl; // Pindah baris setelah satu baris pola selesai
	}

	cout << endl;
	system("pause");
	return 0;
}