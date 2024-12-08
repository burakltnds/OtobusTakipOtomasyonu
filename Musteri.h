#ifndef MUSTERI_H
#define MUSTERI_H
#include <iostream>
#include <string>
#include "Kullanici.h"

using namespace std;

template <class T>
class Musteri:public Kullanici<T>
{
private:
	int koltukNo;
	string tarihSaat;
public:
	Musteri(string isimSoyisim, T tcNo,int koltukNo,string tarihSaat) : 
		Kullanici<T>(isimSoyisim,tcNo),koltukNo(koltukNo),tarihSaat(tarihSaat) {}
	~Musteri() {}
	int getKoltukNo() {
		return koltukNo;
	}
	void setKoltukNo(int koltukNo) {
		this->koltukNo = koltukNo;
	}
	string getTarihSaat() {
		return tarihSaat;
	}
	void setTarihSaat(string tarihSaat) {
		this->tarihSaat = tarihSaat;
	}
	bool rezervasyonKontrol(int kontrolKoltukNo,string const & kontrolTarihSaat, const string &kontrolTcNo);
	void kullaniciBilgi() {
		cout << "Isim Soyisim: " << this->getIsimSoyisim() << endl;
		cout << "Tc No: " << this->getTcNo() << endl;
		cout << "Koltuk No: " << koltukNo<<endl;
		cout << "Otobus Tarih ve Saat: " << tarihSaat << endl;
	}
};
template <class T>
bool Musteri<T>::rezervasyonKontrol(int kontrolKoltukNo, string const &kontrolTarihSaat, const string &kontrolTcNo) {
	if (koltukNo == kontrolKoltukNo && tarihSaat == kontrolTarihSaat && this->getTcNo() == kontrolTcNo) { 
		return true; 
	}
		return false; 
}

#endif //MUSTERÝ_H