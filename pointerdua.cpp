#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main()
{
    // Alokasi memori dinamis menggunakan 'new'
    mahasiswa *mhs = new mahasiswa{1}; // pointer Object mhs
    
    // Mengubah nilai nim melalui pointer
    mhs->nim = 2;
    
    // Memanggil method
    mhs->showNim();

    // Sangat penting: hapus memori setelah selesai digunakan
    delete mhs;

    return 0;
}
