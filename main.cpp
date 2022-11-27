#include <iostream>

/*
    Program Tahun Kabisat
    Ket : Program menentukan Tahun Kabisat
    By  : Yudha Rizqia Grafer
    Tgl : 14 Oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    int t;

    //Algoritma
    cout << "Masukkan Tahun Masehi : ";
    cin >> t;
    if ( t % 400 == 0 )
    {
        cout << "Tahun " << t << " adalah Tahun Kabisat" << endl;
    }
    else if ( t % 100 == 0)
    {
        cout << "Tahun " << t << " Bukan Tahun Kabisat" << endl;
    }
    else if ( t % 4 == 0 )
    {
        cout << "Tahun " << t << " adalah Tahun Kabisat" << endl;
    }
    else
    {
        cout << "Tahun " << t << " Bukan Tahun Kabisat" << endl;
    }
    cout << "Finish" << endl;
    return 0;
}
