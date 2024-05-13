
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

int main()
{
    std::cout << "Hello World!\n";
}

