#ifndef TRAVEGOBUS_H
#define TRAVEGOBUS_H
#include <iostream>
#include <string>
using namespace std;
#include "Otobus.h"

class Travegobus : public Otobus{

public:
	Travegobus(string plaka, string model,int koltukSayisi) : Otobus(plaka,model,koltukSayisi)  {}
	~Travegobus() {}
	void koltukSec(int secim)override;
	void otobusBilgi()override;
};

void Travegobus::koltukSec(int secim) {
	if (koltukSayisi == 12) {
		int arr[12];
		for (int i = 0; i < 12; i++) {
			arr[i] = i + 1;
		}
		for (int i = 0; i < 12; i++) {
			if (arr[i] == secim) {
				if (arr[i] % 3 == 1) {
					cout << "X";
				}
				else if (arr[i] % 3 == 2) {
					cout << "\t" << "X";
				}
				else {
					cout << " " << "X" << endl;
				}
				
			}
			else if (arr[i] % 3 == 1) {
				cout << arr[i];
			}
			else if (arr[i] % 3 == 2) {
				cout << "\t" << arr[i];
			}
			else {
				cout << " " << arr[i] << endl;
			}
		}
	}
	
	else if (koltukSayisi == 24) {
		int arr[24];
		for (int i = 0; i < 24; i++) {
			arr[i] = i + 1;
		}

		for (int i = 0; i < 24; i++) {

			if (arr[i] == secim) {
				if (arr[i] % 3 == 1) {
					cout << "X";
				}
				else if (arr[i] % 3 == 2) {
					cout << "\t" << "X";
				}
				else {
					cout << " " << "X" << endl;
				}

			}
			else if (arr[i] % 3 == 1) {
				cout << arr[i];
			}
			else if (arr[i] % 3 == 2) {
				cout << "\t" << arr[i];
			}
			else {
				cout << " " << arr[i] << endl;
			}
		}
	}
	else {
		cout << "Yanlis Bir Secim Yaptiniz!!!";
	}
}
 void Travegobus::otobusBilgi() {
	cout << "Plaka Bilgisi: " << plaka << endl;
	cout << "Model: " << model << endl;
	cout << "Koltuk Tipi: 2+1" <<  endl;
	cout << "Koltuk Sayisi: " << koltukSayisi << endl;
}
#endif //TRAVEGOBUS