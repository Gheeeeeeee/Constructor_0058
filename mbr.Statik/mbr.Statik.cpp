
#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int Id;
    string nama;

    void setID();

    void printAll();
    mahasiswa(string pnama) :nama(pnama)
    {
        setID();
    }
};

int  mahasiswa::nim = 20;

void mahasiswa::setID()
{
    Id = nim++;
}

void mahasiswa::printAll()
{
    cout << "ID   = " << Id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}

