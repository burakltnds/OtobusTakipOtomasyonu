#ifndef YONETICI_H
#define YONETICI_H

#include <iostream>
#include <string>
#include "Kullanici.h"
using namespace std;
template <class T>
class Yonetici :public Kullanici<T>
{
private:
	int parola;
public:
	 Yonetici(string isimSoyisim, T tcNo,int parola) :
		Kullanici<T>(isimSoyisim, tcNo),parola(parola) {}
	~Yonetici() {}
	int getParola() ;
	void setParola(int parola);
	void yoneticiGuncelle(int parola);
	void yoneticiGuncelle(string isim);
	void kullaniciBilgi() {
		cout << "Isim Soyisim: Yonetici " << this->getIsimSoyisim() << endl;
		cout << "Tc No: "<<this->getTcNo() << endl;
		cout << "Mevcut Parolaniz: " << parola<<endl;
	}
};
template <class T>
int Yonetici<T>::getParola() {
	return parola;
}
template <class T>
void Yonetici<T>::setParola(int parola) {
	this->parola = parola;
}
template <class T>
void Yonetici<T>::yoneticiGuncelle(int parola) {
	this->parola = parola;
}
template <class T>
void Yonetici<T>::yoneticiGuncelle(string isim) {
	this->setIsimSoyisim(isim);
}
#endif //YONETICI_H