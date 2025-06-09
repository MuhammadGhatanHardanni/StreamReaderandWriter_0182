#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string namefile;

    cout << "Masukkan Name file : ";
    cin >> namefile;
    cin.ignore();

    // membuat objek output file stream
    ofstream outfile;
    // membuka file untuk ditulisi
    outfile.open(namefile + ".csv");

    cout << " >= Menulis file, \'4\' untuk keluar" << endl;

    //Unlimited loop untuk menulis
    while (true)
    {
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter 4
        if (baris == "4") break;
        //menulis dan memasukkan nilai dari 'baris ke dalam file
        outfile << baris << endl;
    }
    // Selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // Membuat objek input file stream
    ifstream infile;
    // menunjukkan ke sebuah file
    infile.open(namefile + ".csv");
    
    cout << endl << ">= Membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open())
    {
        // Melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selesasi
        infile.close();
    }
    // jika tidak menemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
};