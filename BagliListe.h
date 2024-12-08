#ifndef BAGLILISTE_H
#define BAGLILISTE_H
#include <iostream>
#include <string>
#include "Musteri.h"
using namespace std;

class Ikram {
private:
    string isim;
    int miktar;

public:
    Ikram(string isim, int miktar) : isim(isim), miktar(miktar) {}
    ~Ikram() {}
    void setIsim(string yeniIsim) {
        isim = yeniIsim;
    }
        void setMiktar(int yeniMiktar) {
        miktar = yeniMiktar;
    }

    string getIsim() const {
        return isim;
    }

    int getMiktar() const {
        return miktar;
    }

    void ikramBilgi() {
        cout << "Ikram: " << isim<<"\n"<<"Miktar:"<< miktar << endl;
    }
};

template<typename A>
class Dugum{
public:
	A veri;
	Dugum* sonraki;
	Dugum(A veri) :veri(veri),sonraki(nullptr) {}
};

template<typename A>
class BagliListe
{
private:
	Dugum<A>* kafa;
public:
	BagliListe():kafa(nullptr) {}
    ~BagliListe() {
        while (kafa) {
            Dugum<A>* temp = kafa;
            kafa = kafa->sonraki;
            delete temp->veri;
            delete temp;
        }
    }
    void ekle(A veri) {
        Dugum<A>* d1 = new Dugum<A>(veri);
        if (!kafa) {
            kafa = d1;
        }
        else {
            Dugum<A>* temp = kafa;
            while (temp->sonraki) {
                temp = temp->sonraki;
            }
            temp->sonraki = d1;
        }
    }

    void goruntule() {
        Dugum<A>* temp = kafa;
        while (temp) {
            temp->veri->ikramBilgi();
            temp = temp->sonraki;
        }
    }

};

#endif // BAGLILISTE_H
