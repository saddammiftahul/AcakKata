#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    string kataAsli, kataAcak;
    int jml_kata;
    srand(static_cast<unsigned int>(time(0)));

    cout << "Masukkan kata : "; cin >> kataAsli;
    jml_kata = kataAsli.size();
    cout << "Kata anda adalah '" << kataAsli << "' jumlahnya " << jml_kata << " huruf" << endl;
    kataAcak = kataAsli;

    for(int i = 0 ; i <= jml_kata ; i++){
        int h1 = (rand() % jml_kata);
        int h2 = (rand() % jml_kata);
        char temp = kataAcak[h1];
        kataAcak[h1] = kataAcak [h2];
        kataAcak[h2] = temp;

    }
    cout << "Hasil Acak : " << kataAcak << endl;

    return 0;
}
