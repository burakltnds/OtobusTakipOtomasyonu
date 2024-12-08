#ifndef KULLANICI_H
#define KULLANICI_H

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Kullanici
{
private:
	string isimSoyisim;
	T tcNo;
public:
	 Kullanici(string isimSoyisim,T tcNo):isimSoyisim(isimSoyisim),tcNo(tcNo) {}
	 ~Kullanici() {}
	string getIsimSoyisim() {
		return isimSoyisim;
	}
	void setIsimSoyisim(string isimSoyisim) {
		this->isimSoyisim = isimSoyisim;
	}
	T getTcNo() {
		return tcNo;
	}
	void setTcNo(T tcNo) {
		this->tcNo = tcNo;
	}
	virtual void kullaniciBilgi()  {
		cout << "Isim Soyisim: " << isimSoyisim << endl;
		cout << "Tc No: " << tcNo << endl;
	}
};
#endif //KULLANICI_H