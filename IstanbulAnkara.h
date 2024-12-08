#ifndef ISTANBULANKARA_H
#define ISTANBULANKARA_H

#include <iostream>
#include <string>
#include "Rota.h"
using namespace std;

class IstanbulAnkara:public Rota
{
private:
	int pnr;
public:
	IstanbulAnkara(string rotaIsim, int fiyat, int km) : Rota(rotaIsim, fiyat, km) {
		pnr = getKm() / 2;
	}
	~IstanbulAnkara() {}
	void rotaBilgi()override;
	string pnrOlustur()override;

};
string IstanbulAnkara::pnrOlustur() {
	return getRotaIsim().substr(0, 1) + getRotaIsim().substr(8, 1) + to_string(pnr);
}

void IstanbulAnkara::rotaBilgi() {
	cout << "Rotaniz: " << getRotaIsim() << endl;
	cout << "Rota Uzunlugu: " << getKm() << endl;
	cout << "Km Basi Fiyat: " << getFiyat() << endl;
	cout << "Rota Toplam Fiyati: " << ucretHesapla() << endl;
	cout << "Pnr No: " << pnrOlustur() << endl;
}

#endif //ISTANBULANKARA_H