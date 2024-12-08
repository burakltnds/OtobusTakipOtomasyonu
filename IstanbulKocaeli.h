#ifndef ISTANBULKOCAELI_H
#define ISTANBULKOCAELI_H

#include <iostream>
#include <string>
#include "Rota.h"
using namespace std;

class IstanbulKocaeli:public Rota
{
private:
	int pnr;
public:
	IstanbulKocaeli(string rotaIsim, int fiyat, int km) : Rota(rotaIsim, fiyat, km) {
		pnr = getKm() / 2;
	}
	~IstanbulKocaeli() {}
	
	void rotaBilgi()override;
	string pnrOlustur()override;

};
string IstanbulKocaeli::pnrOlustur() {
	return getRotaIsim().substr(0, 1) + getRotaIsim().substr(8, 1) + to_string(pnr);
}
void IstanbulKocaeli::rotaBilgi() {
	cout << "Rotaniz: " << getRotaIsim() << endl;
	cout << "Rota Uzunlugu: " << getKm() << endl;
	cout << "Km Basi Fiyat: " << getFiyat() << endl;
	cout << "Rota Toplam Fiyati: " << ucretHesapla() << endl;
	cout << "Pnr No: " << pnrOlustur()<< endl;
}

#endif //ISTANBULKOCAELI_H