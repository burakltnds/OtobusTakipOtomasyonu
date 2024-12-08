#ifndef ROTA_H
#define ROTA_H

#include <iostream>
#include <string>
using namespace std;

class Rota
{
private:
	int fiyat, km;
	string rotaIsim;
public:
	Rota(string rotaIsim ,int fiyat ,int km):rotaIsim(rotaIsim),fiyat(fiyat),km(km){}
	~Rota() {}
	virtual void rotaBilgi()=0;
	virtual string pnrOlustur() = 0;
	int ucretHesapla();
	int getFiyat();
	int getKm();
	string getRotaIsim();
	void setFiyat(int fiyat);
	void setKm(int km);
	void setRotaIsim(string rotaIsim);
	friend class Manuel;
};
int Rota::ucretHesapla() {
	return km * fiyat;
}
int Rota::getFiyat() {
	return fiyat;
}
int Rota::getKm() {
	return km;
}
string Rota::getRotaIsim() {
	return rotaIsim;
}
void Rota::setFiyat(int fiyat) {
	this->fiyat = fiyat;
}
void Rota::setKm(int km) {
	this->km = km;
}
void Rota::setRotaIsim(string rotaIsim) {
	this->rotaIsim = rotaIsim;
}
#endif //ROTA_H
