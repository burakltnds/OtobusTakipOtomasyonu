#ifndef MANUEL_H
#define MANUEL_H

#include <iostream>
#include <string>
#include "Rota.h"
using namespace std;


class Manuel:public Rota
{
private:
	int pnr;
public:
	Manuel(string rotaIsim, int fiyat, int km ) : Rota(rotaIsim, fiyat, km) {
		pnr = getKm() / 2;
	}
	~Manuel() {}

	string pnrOlustur() override {
		try {
			if (pnr >= 100) {
				return "Man" + to_string(pnr);
			}
			else {
				throw(pnr);
			}
		}
		catch (int pnr) {
			cout << "Pnr Olusturulamadi Mesafe Cok Kisa" << endl;
			cout << "Girilen Mesafe En Az 200 Km Olmali" << endl;
			cout << "Girilen Mesafe: " << km;
			return "\n";
		}
		
	}

void rotaBilgi() override{
	cout << "Rotaniz: "<< rotaIsim<<endl;
	cout << "Rota Uzunlugu: "<< km<<endl;
	cout << "Km Basi Fiyat: "<< fiyat<< endl;
	cout << "Rota Toplam Fiyati: "<< ucretHesapla()<< endl;
	cout << "Pnr No: " << pnrOlustur()<< endl;
	}
};

#endif //MANUEL_H