#ifndef KOCAELIANKARA_H
#define KOCAELIANKARA_H

#include <iostream>
#include <string>
#include "Rota.h"
using namespace std;

class KocaeliAnkara:public Rota
{
private:
	int pnr;
public:
	 KocaeliAnkara (string rotaIsim, int fiyat, int km) : Rota(rotaIsim, fiyat, km) {
		 pnr = getKm()/2;
	 }
	 ~KocaeliAnkara() {}
	 void rotaBilgi()override;
	 string pnrOlustur()override;

};
string KocaeliAnkara::pnrOlustur() {
	return getRotaIsim().substr(0, 1) + getRotaIsim().substr(7, 1) + to_string(pnr);
}


void KocaeliAnkara::rotaBilgi() {
	cout << "Rotaniz: " << getRotaIsim() << endl;
	cout << "Rota Uzunlugu: " << getKm() << endl;
	cout << "Km Basi Fiyat: " << getFiyat()<<endl;
	cout << "Rota Toplam Fiyati: " << ucretHesapla() << endl;
	cout << "Pnr No: " << pnrOlustur() << endl;
}

#endif //KOCAELIANKARA_H