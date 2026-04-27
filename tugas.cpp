#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, sisiA, sisiB;

public:
    void inputData() {
        cout << "[ Input Layang-Layang ]" << endl;
        cout << "Masukkan Diagonal 1 : "; cin >> d1;
        cout << "Masukkan Diagonal 2 : "; cin >> d2;
        cout << "Masukkan Sisi Miring Atas : "; cin >> sisiA;
        cout << "Masukkan Sisi Miring Bawah: "; cin >> sisiB;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

 