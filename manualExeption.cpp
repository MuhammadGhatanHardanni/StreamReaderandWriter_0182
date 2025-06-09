#include <iostream>
using namespace  std;

int main()
{
    try {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 3.5; // melemparkan sebuah integrar maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << a << " : Pengecualian akan dieksekusi" << endl;

    }
    catch (...) {
        // jika selain integrar maka block ini akan dieksekusi
        cout << "default pengecualian dieksekusi" << endl;
    }

    return 0;
}