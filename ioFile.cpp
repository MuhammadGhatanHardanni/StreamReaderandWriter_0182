#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // membuat objek output file stream
    ofstream outfile;
    // membuka file untuk ditulisi
    outfile.open("contohfile.txt");

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
    infile.open("contohfile.txt");
    
    cout << endl << ">= Membuka dan membaca file " << endl;
    
};