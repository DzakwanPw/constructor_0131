#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
int nim;
string nama;
public:
mahasiswa();
mahasiswa(int);
mahasiswa(string);
mahasiswa(int iNim, string iNama);

void cetak();
};

mahasiswa :: mahasiswa(){
}

mahasiswa :: mahasiswa(int iNIM){
    nim = iNim; //definisi hanya NIM
}

mahasiswa :: mahasiswa(string iNama){
    mnama = iNama; // definisi hanya NAMA
}