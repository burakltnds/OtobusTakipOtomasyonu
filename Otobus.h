#ifndef OTOBUS_H
#define OTOBUS_H

#include <iostream>
#include <string>
using namespace std;

class Otobus
{
protected:
	string plaka,model;
	int koltukSayisi;
public:
	Otobus(string plaka, string model,int koltukSayisi ) : plaka(plaka) , model (model),koltukSayisi(koltukSayisi) {}
	virtual ~Otobus() {}
	virtual void otobusBilgi()=0;
	virtual void koltukSec(int secim)=0;
	string getPlaka() {
		return plaka;
	}
	void setPlaka(string plaka) {
		this->plaka = plaka;
	}
	string getModel() {
		return model;
	}
	void setModel() {
		this->model = model;
	}
	int getKoltukSayisi() {
		return koltukSayisi;
	}
	void setKoltukSayisi(int koltukSayisi) {
		this->koltukSayisi = koltukSayisi;
	}
};
 void Otobus::otobusBilgi() {
	cout << "Plaka Bilgisi:" << plaka << endl;
	cout << "Model Bilgisi:" << model << endl;
}
void Otobus::koltukSec(int secim) {
	cout << "Henuz Koltuk Secilmedi" << endl;
}
#endif //OTOBUS_H

