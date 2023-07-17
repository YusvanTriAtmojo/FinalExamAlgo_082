#include <iostream>
#include <string>
using namespace std;

	const int MAX_MAHASISWA = 100;
	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];
	int jumlahMahasiswa = 0;

		void tambahMahasiswa() {
			string jurusan[MAX_MAHASISWA];
			if (jumlahMahasiswa < MAX_MAHASISWA) {
				cout << "======== TAMBAH MAHASISWA =======" << endl;
				cout << "NIM         : ";
				cin >> NIM[jumlahMahasiswa];
				cin.ignore();
				cout << "Nama        : ";
				getline(cin, nama[jumlahMahasiswa]);
				cout << "Jurusan     : ";
				getline(cin, jurusan[jumlahMahasiswa]);
				cout << "Tahun Masuk : ";
				cin >> tahunMasuk[jumlahMahasiswa];
				cin.ignore();

				jumlahMahasiswa++;

				cout << "Mahasiswa berhasil ditambahkan!" << endl;
			}
			else {
				cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
			}
		};

		void tampilkanSemuaMahasiswa() {
			string jurusan[MAX_MAHASISWA];
			cout << "===== SEMUA DATA MAHASISWA ====\n";
			cout << "NIM         : " << NIM[jumlahMahasiswa] << endl;
			cout << "Nama        : " << nama[jumlahMahasiswa] << endl;
			cout << "Jurusan     : " << jurusan[jumlahMahasiswa] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[jumlahMahasiswa] << endl;
		}
		void algorithmacariMahasiswaByNIM() {
			int i;
			int comparisons;
			while (true)
			{
				cout << "Masukkan NIM: ";
				int NIM[MAX_MAHASISWA];
				cin >> NIM[MAX_MAHASISWA];
				comparisons = 0;
				for (i = 0; i < 100; i++) {
					comparisons++;
					if (NIM[i] == NIM[MAX_MAHASISWA]) {
						cout << "\n" << NIM << "Found at position" << (i + 1) << endl;
						break;
					}
				}
			}
		}
		void algorithmaSortByTahunMasuk() {
			for (int i = 1; i < 100; i++) {
				for (int j = 0; j < 100 - i; j++) {
					int temp = tahunMasuk[j];
					if (tahunMasuk[j] > tahunMasuk[j + 1]) {
						tahunMasuk[j] = tahunMasuk[j + 1];
						tahunMasuk[j + 1] = temp;
					}
				}
			}
			for (int j = 0; j < 100; j++) {
				cout << tahunMasuk[j] << endl;
			}
		}
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. Bubble Sorting, Linear search
//3. Stack adalah jenis data struktur dengan cara menumpuk data yang dapat diakses dari satu sisi(TOP).
//   Kemudian, data yang terakhir masuk maka data tersebut yang akan pertama keluar (LAST IN - FIRST OUT).
//   Stack menggunakan basic operation berupa push(memasukkan data) dan pop(mengeluarkan data).
//   Sedangkan, Queue adalah data struktur dengan data yang pertama masuk maka data tersebut juga yang akan keluar pertama (FIRST IN - FIRST OUT).
//   Basic operation pada queue yaitu REAR(elemen paling ujung akhir) dan FRONT(elemen paling ujung awal).
//4. Algoritma stack digunakan saat ingin menghapus data yang terakhir masuk, seperti menu undo atau mengembalikan data seperti semula sebelum penambahan data terakhir.
//5. a. empat (4).
//   b. in = 1 5 8 10 15 12 20 22 25 28 30 36 38 40 45 48 50
//      preorder = 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50
//      postorder = 1 8 5 15 12 10 22 20 45 50 28 38 48 30 40 36 25
