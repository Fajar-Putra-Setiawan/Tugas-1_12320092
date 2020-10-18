#include <iostream>

using namespace std;

string nama, NIM, Alamat;
int UTS, UAS, hasil;
int main()
{

    cout << "Program Input dan Output" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Masukan Nama      = ";
    getline (cin,nama);

    cout << "Masukan NIM       = ";
    getline (cin, NIM);

    cout << "Masukan Alamat    = ";
    getline (cin,Alamat);

    cout << "Masukan Nilai UTS = ";
    cin >> UTS;

    cout << "Masukan Nilai UAS = ";
    cin >> UAS;

    hasil = (UTS+UAS)/2;

    cout <<endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Hallo, " << nama <<endl;

    cout << "Nama            = " << nama <<endl;
    cout << "NIM             = " << NIM <<endl;
    cout << "Alamat          = " << Alamat << endl;
    cout << "Rata-Rata Nilai = " << hasil << endl;

    return 0;
}
