#include <iostream>
using namespace std;

class bangunDatar{
    // akses modifier
    private:
        float panjang, Lebar;
    public:
        float Luas;

        void input(){ // metode input persegi panjang

            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> Lebar;
        }

};