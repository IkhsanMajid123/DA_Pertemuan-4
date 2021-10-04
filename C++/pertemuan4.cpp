#include <iostream>
using namespace std;

int main(){
    long int gajiPokok, tj, lm, pajak, gajiSebelumPajak, gajiDiterima;
    int jk;
    cout << "Masukkan Gaji Pokok : ";
    cin >> gajiPokok;
    cout << "Masukkan Jam Kerja : ";
    cin >> jk;

    tj = gajiPokok * 20 / 100;

    if (jk > 200){
        lm = (jk - 200) * 20000;
    }else{
        lm = 0;
    }

    gajiSebelumPajak = gajiPokok + tj + lm;

    pajak = gajiSebelumPajak * 10 / 100;

    gajiDiterima = gajiSebelumPajak - pajak;

    cout << "Gaji Sebelum Pajak : ";
    cout << gajiSebelumPajak <<endl;
    cout << "Gaji Diterima : ";
    cout << gajiDiterima;

    cin.ignore();
    cin.get();
    return 0;
}