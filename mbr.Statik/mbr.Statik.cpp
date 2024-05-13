
#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    static int nim;
    int Id;
    string nama;

    void setID();

    void printAll();
    Mahasiswa(string pnama) :nama(pnama)
    {
        setID();
    }
};

int  Mahasiswa::nim = 20;

void Mahasiswa::setID()
{
    Id = nim++;
}

void Mahasiswa::printAll()
{
    cout << "ID   = " << Id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Lia kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswa mhs4("Joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}

