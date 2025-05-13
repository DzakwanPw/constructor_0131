#include <iostream>
using namespace std;

class buku {
    string judul;
    public:
        string setget(string jdl)
        {
            // nilai parameter 'judul' untuk member variabel 'judl'
            this->judul = jdl;
            // return variabel judul.
            return this->jdul;
        }
};

int main()
{
    buku bukunya;
    cout<<bukunya.setget("Matematika");
    return 0;
}