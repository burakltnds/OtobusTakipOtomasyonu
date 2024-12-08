#ifndef FLIXBUS_H
#define FLIXBUS_H
#include <iostream>
#include <string>
using namespace std;
#include "Otobus.h"

class Flixbus : public Otobus {
	public:
		Flixbus(string plaka, string model, int koltukSayisi) : Otobus(plaka, model,koltukSayisi) {}
		~Flixbus() {}
		void koltukSec(int secim)override;
		void otobusBilgi()override;
	};

void Flixbus::koltukSec(int secim) {
	if (koltukSayisi == 20) {
		int arr[20];
		for (int i = 0; i < 20; i++) {
			arr[i] = i + 1;
		}
		for (int i = 0; i < 20; i++) {
			if (arr[i] == secim) {
				if (arr[i] % 4 == 1) {
					cout << "X";
				}
				else if (arr[i] % 4 == 2) {
					cout << " X";
				}
				else if (arr[i]% 4== 3) {
					cout << "\t" << "X";
				}
				else {
					cout << " X" << endl;
				}
				

			}
			else if(arr[i] % 4 == 1) {
				cout << arr[i];
			}
			else if (arr[i] % 4 == 2) {
				cout << " " << arr[i];
			}
			else if (arr[i] % 4 == 3) {
				cout << "\t" << arr[i];
			}
			else {
				cout << " "<< arr[i] << endl;
			}


		}
	}

	else if (koltukSayisi == 40) {
		int arr[40];
		for (int i = 0; i < 40; i++) {
			arr[i] = i + 1;
		}

		for (int i = 0; i < 40; i++) {

			if (arr[i] == secim) {
				if (arr[i] % 4 == 1) {
					cout << "X";
				}
				else if (arr[i] % 4 == 2) {
					cout << " X";
				}
				else if (arr[i] % 4 == 3) {
					cout << "\t" << "X";
				}
				else {
					cout << " X" << endl;
				}


			}
			else if (arr[i] % 4 == 1) {
				cout << arr[i];
			}
			else if (arr[i] % 4 == 2) {
				cout << " " << arr[i];
			}
			else if (arr[i] % 4 == 3) {
				cout << "\t" << arr[i];
			}
			else {
				cout << " " << arr[i] << endl;
			}
		}
	}
	else {
		cout << "Yanlis Bir Secim Yaptiniz!!!"<<endl;
	}
}
inline void Flixbus::otobusBilgi() {
	cout << "Plaka Bilgisi: " << plaka << endl;
	cout << "Model: " << model << endl;
	cout << "Koltuk Tipi: 2+2" << endl;
	cout << "Koltuk Sayisi: " << koltukSayisi << endl;
}
#endif //FLIXBUS