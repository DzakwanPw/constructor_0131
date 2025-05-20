#include <iostream>
#include <string>
using namespace std;

class Barang {
public:

    Barang(int KodeBarang, string namaBarang);
};

Barang::Barang(int KodeBarang, string namaBarang) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "KODE BARANG  : " << KodeBarang << endl;
    cout << "NAMA BARANG  : " << namaBarang << endl;
}

int main() {
    Barang mhs(001, "Laptop");
    return 0;
}