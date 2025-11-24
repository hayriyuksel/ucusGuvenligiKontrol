/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int yuk[5]       = {200, 450, 500, 100, 400};
    int hiz[5]       = {80,  50,  50,  60,  25};
    int yukseklik[5] = {150, 210, 210, 180, 90};

    cout << "Dron kontrol sistemi" << endl << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Drone " << (i+1) << " kontrol ediliyor..." << endl;
        cout << "  Yük: " << yuk[i] << "g | Hız: " << hiz[i] << " m/s | Yükseklik: " << yukseklik[i] << " m" << endl;
        if (yuk[i] > 500)
            cout << "  UYARI: Yük 500g'ı aşıyor → UÇUŞ YASAK!" << endl;
        else
            cout << "  Yük kontrolü: TAMAM" << endl;
        if (hiz[i] > 30)
            cout << "  UYARI: Hız 30 m/s'yi aşıyor → AŞIRI HIZ!" << endl;
        else
            cout << "  Hız kontrolü: TAMAM" << endl;
        if (yukseklik[i] > 200)
            cout << "  UYARI: Yükseklik 200m'yi aşıyor → İNİŞ EMRİ!" << endl;
        else
            cout << "  Yükseklik kontrolü: TAMAM" << endl;
        if (yuk[i] <= 500 && hiz[i] <= 30 && yukseklik[i] <= 200)
            cout << "  SONUÇ: Drone " << (i+1) << " → UÇUŞA UYGUN!" << endl << endl;
        else
            cout << "  SONUÇ: Drone " << (i+1) << " → UÇUŞA UYGUN DEĞİL!" << endl << endl;

        cout << "-----------------------------------" << endl;
    }
    cout<<"Dron Tablosu"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << (i+1) << "\t" << yuk[i] << "\t" << hiz[i] << "\t\t" << yukseklik[i] << endl;
    }
    int ucabilir = 0;
    for (int i = 0; i < 5; i++) {
        if (yuk[i] <= 500 && hiz[i] <= 30 && yukseklik[i] <= 200)
            ucabilir++;
    }

    cout << "\nTOPLAM " << ucabilir << " DRONE UÇUŞA UYGUN!" << endl;

    return 0;
}
