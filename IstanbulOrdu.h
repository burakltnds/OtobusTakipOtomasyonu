#ifndef ISTANBULORDU_H
#define ISTANBULORDU_H

#include <iostream>
#include <string>
#include "Rota.h"
using namespace std;

class IstanbulOrdu:public Rota
{
private:
	int pnr;
public:
	 IstanbulOrdu (string rotaIsim, int fiyat, int km) : Rota(rotaIsim, fiyat, km) {
		 pnr = getKm() / 2;
	 }
	 ~IstanbulOrdu() {}
	 void rotaBilgi()override;
	 string pnrOlustur()override;

};
string IstanbulOrdu::pnrOlustur() {
	return getRotaIsim().substr(0, 1) + getRotaIsim().substr(8, 1) + to_string(pnr);
}

void IstanbulOrdu::rotaBilgi() {
	cout << "Rotaniz: " << getRotaIsim() << endl;
	cout << "Rota Uzunlugu: " << getKm() << endl;
	cout << "Km Basi Fiyat: " << getFiyat()<<endl;
	cout << "Rota Toplam Fiyati: " << ucretHesapla() << endl;
	cout << "Pnr No: " << pnrOlustur() << endl;
}
#endif //ISTANBULORDU