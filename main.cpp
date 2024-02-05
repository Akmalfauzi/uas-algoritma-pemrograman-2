#include <iostream>//menginclude library iostream
#include <limits>//menginclude library limits

using namespace std;//menggunakan namespace std atau standar penulisan untuk menghindari penulisan std secara berulang ulang

class Kalkulasi {//membuat/mendeklarasikan class dengan nama Kalkulasi

    public://bagian yang bisa diakses secara publik
        //method untuk mengatur nilai bilangan1 dari parameter bilangan yang berupa integer
        void setBilangan1(int bilangan) {
            bilangan1 = bilangan;//mengatur nilai dari bilangan yang diambil dari parameter bilangan kemudian dimasukkan ke dalam variable bilangan1
        }
        // method untuk mengatur nilai bilangan 2 dari parameter bilangan yang berupa integer
        void setBilangan2(int bilangan) {
            bilangan2 = bilangan;//mengatur nilai dari bilangan yang diambil dari parameter bilangan kemudian dimasukkan ke dalam variable bilangan2
        }
        //method untuk mengambil nilai dari variable bilangan1 yang sudah di assign/set sebelumnya
        int getBilangan1() {
            return bilangan1;
        }
        //method untuk mengambil nilai dari variable bilangan2 yang sudah di assign/set sebelumnya
        int getBilangan2() {
            return bilangan2;
        }
        // method untuk menampilkan nilai 2 bilangan yang sudah di atur dari method setBilangan1 dan setBilangan2
        void showBilangan() {
            cout << "Bilangan 1 : " << getBilangan1() << endl;//menampilkan text Bilangan 1 : dan juga menampilkan bilangan1 yang sudah di set ke dalam variable bilangan1
            cout << "Bilangan 2 : " << getBilangan2() << endl;//menampilkan text Bilangan 2 : dan juga menampilkan bilangan2 yang sudah di set ke dalam variable bilangan2
        }
        // method untuk menampilkan hasil dari 2 bilangan yang sudah di kalkulasi berdasarkan operator matematika yang dipilih
        // 1 = penjumlahan
        // 2 = pengurangan
        // 3 = perkalian
        int operasiMatematika(int pilihan) {
            switch (pilihan) {//melakukan proses pengecekan dari variable pilihan
                case 1 :// jika pilihan 1
                    return bilangan1 + bilangan2;//mengembalikan nilai dari 2 bilangan yang sudah dijumlahkan
                case 2 :// jika pilihan 2
                    return bilangan1 - bilangan2;//mengembalikan nilai dari 2 bilangan yang sudah dikurangkan
                case 3 :// jika pilihan 3
                    return bilangan1 * bilangan2;//mengembalikan nilai dari 2 bilangan yang sudah dikalikan
                default :// jika pilihan bukan 1,2 atau 3
                    return 0;//mengembalikan nilai 0
            }
        }

    private://bagian yang tidak bisa diakses secara publik hanya bisa diakses di class ini saja
        int bilangan1;//deklarasi variable bilangan1 dengan tipe data integer
        int bilangan2;//deklarasi variable bilangan2 dengan tipe data integer
};

int main()//fungsi utama
{
    Kalkulasi kalkulasi;//membuat object baru dengan nama kalkulasi dari class Kalkulasi

    int pilihan;//deklarasi variable pilihan dengan tipe data integer
    string pilihanText, pilihanOperator;//deklarasi variable pilihanText dan pilihanOperator dengan tipe data string
    string messageErrorInputBilangan = "Input harus berupa bilangan. Silahkan coba kembali";//deklarasi variable messageErrorInputBilangan dengan tipe data string

    while(true) {//melakukan loop selama kondisi terpenuhi / true

        while(true) {//melakukan proses loop
            cout << "Masukkan Bilangan 1 : ";//menampilkan text Masukkan Bilangan 1
            int bilangan1;//deklarasi variable bilangan2 dengan tipe data integer

            cin >> bilangan1;//memasukkan data yang diinput ke dalam variable bilangan2
            if(cin.fail()) {//mengecek apakah nilai yang diinput sesuai dengan variable yang telah didefinisikan sebelumnya
                cin.clear();// Menghapus status kesalahan input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');// Membersihkan buffer / input yang telah dimasukkan sebelumnya
                cout << messageErrorInputBilangan;//menampilkan text Input harus berupa bilangan. Silahkan coba kembali yang diambil dari variable messageErrorInputBilangan
                cout << endl;//menampilkan/mencetak/menambahkan baris baru
            } else {
                kalkulasi.setBilangan1(bilangan1);//mengassign/set nilai variable bilangan2 ke method setBilangan1 yang ada di object kalkulasi
                break;//mengeluarkan/menghentikan dari proses loop
            }
        }

        while(true) {//melakukan proses loop
            cout << "Masukkan Bilangan 2 : ";//menampilkan text Masukkan Bilangan 2 :
            int bilangan2;//deklarasi variable bilangan2 dengan tipe data integer

            cin >> bilangan2;//memasukkan data yang diinput ke dalam variable bilangan2
            if(cin.fail()) {//mengecek apakah nilai yang diinput sesuai dengan variable yang telah didefinisikan sebelumnya
                cin.clear();// Menghapus status kesalahan input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');// Membersihkan buffer / input yang telah dimasukkan sebelumnya
                cout << messageErrorInputBilangan;//menampilkan text Input harus berupa bilangan. Silahkan coba kembali yang diambil dari variable messageErrorInputBilangan
                cout << endl;//menampilkan/mencetak/menambahkan baris baru
            } else {
                kalkulasi.setBilangan2(bilangan2);//mengassign/set nilai variable bilangan2 ke method setBilangan2 yang ada di object kalkulasi
                break;//mengeluarkan/menghentikan dari proses loop
            }
        }

        kalkulasi.showBilangan();//menampilkan 2 bilangan yang di proses sebelumnya sudah di assign/set
        cout << endl;//menampilkan/mencetak baris baru

        while(true) {//melakukan proses loop
            cout << "(Pilihan: 1 = Tambah, 2 = Kurang, 3 = Kali)" << endl;//menampilkan text (Pilihan: 1 = Tambah, 2 = Kurang, 3 = Kali)
            cout << "Masukkan Pilihan: ";//menampilkan text Masukkan Pilihan :
            cin >> pilihan;//memasukkan data yang diinput ke dalam variable pilihan
            cout << endl;//menampilkan/mencetak baris baru

            if(cin.fail()) {//mengecek apakah nilai yang diinput sesuai dengan variable yang telah didefinisikan sebelumnya
                cin.clear();// Menghapus status kesalahan input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');// Membersihkan buffer / input yang telah dimasukkan sebelumnya
                cout << messageErrorInputBilangan;//menampilkan text Input harus berupa bilangan. Silahkan coba kembali yang diambil dari variable messageErrorInputBilangan
                cout << endl;//menampilkan/mencetak baris baru
            } else {
                cout << endl;//menampilkan/mencetak baris baru
                break;//mengeluarkan/menghentikan dari proses loop
            }
        }

        //pengecekan variable pilihan dan pemberian nilai pada variable pilihanText dan pilihanOperator sesuai dengan nilai pada variable pilihan yang telah diinputkan sebelumnya
        if(pilihan == 1) {
            pilihanText = " ( Tambah / Penjumlahan ) ";//mengassign/set variable pilihanText dengan value ( Tambah )
            pilihanOperator = " + ";//mengassign/set variable pilihanOperator dengan value +
        } else if(pilihan == 2) {
            pilihanText = " ( Kurang / Pengurangan ) ";//mengassign/set variable pilihanText dengan value ( Kurang )
            pilihanOperator = " - ";//mengassign/set variable pilihanOperator dengan value -
        } else if(pilihan == 3) {
            pilihanText = " ( Kali / Perkalian ) ";//mengassign/set variable pilihanText dengan value ( Kali )
            pilihanOperator = " * ";//mengassign/set variable pilihanOperator dengan value *
        }

        //menampilkan text Pilihan Anda adalah
        //juga menampilkan nilai dari variable pilihan yang sebelumnya diinput
        //dan juga menampilkan text operator yang sudah diberikan value ke variable pilihanText
        cout << "Pilihan Anda adalah " << pilihan << pilihanText << endl;
        cout << endl;//menampilkan/mencetak/menambahkan baris baru

        // proses pengecekan pilihan yang diinputkan apakah 1,2, atau 3
        // atau lebih dari sama dengan 1 dan juga kurang dari sama dengan 3
        if(pilihan >= 1 && pilihan <= 3) {
            cout << "Proses perhitungan dari " << kalkulasi.getBilangan1() << pilihanOperator << kalkulasi.getBilangan2();//menampilkan text Proses perhitungan dari bilangan1 operator nya dan bilangan2
            cout << endl;//menampilkan/mencetak/menambahkan baris baru
            cout << "Hasilnya adalah: " << kalkulasi.operasiMatematika(pilihan) << endl;//menghitung 2 bilangan yang diinputkan berdasarkan operasi matematika yang dipilih
            break;//mengeluarkan dari proses loop jika pilihan valid/benar
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;//menampilkan text pilihan tidak valid. silahkan coba lagi dan juga menambahkan baris baru
        }
    }

    return 0;//untuk mengakhiri program
}
