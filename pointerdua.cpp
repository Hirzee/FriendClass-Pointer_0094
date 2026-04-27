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
    
  
    mhs->nim = 2;
 