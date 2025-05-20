#include <iostream>
#include <string>

class Barang {
private:
    std::string namaBarang;
    std::string kodeBarang;

public:
    // Constructor dengan parameter
    Barang(const std::string& nama, const std::string& kode) 
        : namaBarang(nama), kodeBarang(kode) {}

    // Fungsi untuk menampilkan informasi barang
    void tampilkanInfo() const {
        std::cout << "Nama Barang: " << namaBarang << std::endl;
        std::cout << "Kode Barang: " << kodeBarang << std::endl;
    }
};

int main() {
    // Membuat objek Barang
    Barang barang1("Laptop", "LB001");
    
    // Menampilkan informasi barang
    barang1.tampilkanInfo();

    return 0;
}
