#include <iostream>
#include <string>
using namespace std;

class Barang {
public:

    Barang(int KodeBarang, string namaBarang);
};

Barang::Barang(int KodeBarang, string namaBarang) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NAMA BARANG  : " << namaBarang << endl;
    cout << "KODE BARANG  : " << KodeBarang << endl;
}