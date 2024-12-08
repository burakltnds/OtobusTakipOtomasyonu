#include "Otobus.h"
#include "Travegobus.h"
#include "Flixbus.h"
#include "Kullanici.h"
#include "Yonetici.h"
#include "Musteri.h"
#include "Rota.h"
#include "Manuel.h"
#include "IstanbulAnkara.h"
#include "IstanbulKocaeli.h"
#include "IstanbulOrdu.h"
#include "KocaeliAnkara.h"
#include "BagliListe.h"


int main()
{
	BagliListe<Ikram*> ikramListesi;
	int gir, sec, sifre, yoneticiIslem, ctrlKoltukNo, islem, sehirSec, rotaKm, kmBasiFiyat = 2;
	string isim, ismGnc, tarihGnc, ctrlTarih, ctrlTc, rotaIsm;
	Yonetici <int>* y1 = new Yonetici<int>("Burak Altundas", 54849, 1582);
	Musteri<string>* m1 = new Musteri<string>("Yunus Guler", "45789", 15, "15.01.2025");
	Otobus* o1 = new Flixbus("34 GS 1905", "Mercedes-Benz", 20);
	Otobus* o2 = new Travegobus("34 JH 6145", "Isuzu", 12);
	Rota* r1 = new IstanbulAnkara("IstanbulAnkara",kmBasiFiyat,442);
	Rota* r2 = new IstanbulOrdu("IstanbulOrdu", kmBasiFiyat, 884);
	Rota* r3 = new IstanbulKocaeli("IstanbulKocaeli", kmBasiFiyat, 210);
	Rota* r4 = new KocaeliAnkara("KocaeliAnkara", kmBasiFiyat, 346);
	Rota* r5 = nullptr;
	ikramListesi.ekle(new Ikram("Cay", 20));
	ikramListesi.ekle(new Ikram("Kahve", 15));
	ikramListesi.ekle(new Ikram("Kek", 10));
	ikramListesi.ekle(new Ikram("Cikolata", 10));
	ikramListesi.ekle(new Ikram("Soda", 10));
	ikramListesi.ekle(new Ikram("Kola", 30));
	ikramListesi.ekle(new Ikram("Kraker", 50));
	do {
		cout << "******************************************************************************************************" << endl;
		cout << "Giris Yontemi Seciniz" << endl;
		cout << "1-Yonetici Girisi\n2-Musteri Girisi\n3-Otobus Bilgileri\n4-Rota Bilgileri\n5-Ikram Listesini Goruntule\n6-Cikis Yap\n" << endl;
		cin >> gir;

		switch (gir) {
		case 1:
			cout << "Sifrenizi Giriniz" << endl;
			cin >> sifre;
			if (sifre == y1->getParola()) {
				cout << "Giris Basarili\nYapmak Istediginiz Islemi Seciniz\n1-Isminizi Guncelleyin\n2-Parolanizi Guncelleyin\n3-Yonetici Bilgilerinizi Gorun\n" << endl;
				cin >> yoneticiIslem;
				switch (yoneticiIslem) {
				case 1:
					cout << "Yeni Isminizi Giriniz" << endl;
					cin >> isim;
					y1->yoneticiGuncelle(isim);
					cout << "Yeni Isim:" << y1->getIsimSoyisim() << endl;
					break;
				case 2:
					int parola;
					cout << "Yeni Parolanizi Giriniz" << endl;
					cin >> parola;
					y1->yoneticiGuncelle(parola);
					cout << "Yeni Parola:" << y1->getParola() << endl;
					break;
				case 3:
					y1->kullaniciBilgi();
					break;
				}

			}
			else {
				cout << "Sifre Yanlis!!!" << endl;
			}
			break;
		case 2:
			cout << "Musteri Olarak Giris Yapildi\nIsleminizi Seciniz\n1-Rezervasyon Guncelle\n2-Bilgileri Goster\n3-Rezervasyon Kontrol\n" << endl;
			cin >> sec;
			switch (sec) {
			case 1:

				cout << "Yeni Isim Giriniz:" << endl;
				cin >> ismGnc;
				cout << "Yeni Tarih Giriniz:" << endl;
				cin >> tarihGnc;
				m1->setIsimSoyisim(ismGnc);
				m1->setTarihSaat(tarihGnc);
				break;
			case 2:
				m1->kullaniciBilgi();
				break;
			case 3:
				cout << "Koltuk Numaranizi Giriniz:" << endl;
				cin >> ctrlKoltukNo;
				cout << "Tarih Bilgisi Giriniz:" << endl;
				cin >> ctrlTarih;
				cout << "Tc Numaranizi Giriniz:\n" << endl;
				cin >> ctrlTc;
				if (m1->rezervasyonKontrol(ctrlKoltukNo, ctrlTarih, ctrlTc) == 0) cout << "Rezervasyon bulunamadi" << endl;
				else cout << "Musteri Bulundu" << endl;
			}
			break;
		case 3:
			cout << "Gitmek Istediginiz Otobusu Seciniz\n1-Flixbus(Otobus Duzeni)\n2-Travegobus(Otobus Duzeni)\n3-Flixbus(Otobus Bilgi)\n4-Travegobus(Otobus Bilgi)\n" << endl;
			cin >> islem;
			switch (islem) {
			case 1:
				int secKoltuk, secKoltukSayi;
				cout << "Koltuk Sayisi Seciniz(20 yada 40)" << endl;
				cin >> secKoltukSayi;
				o1->setKoltukSayisi(secKoltukSayi);
				cout << "Koltuk Numaranizi Seciniz" << endl;
				cin >> secKoltuk;
				o1->koltukSec(secKoltuk);
				break;
			case 2:
				int secKoltuk1, secKoltukSayi1;
				cout << "Koltuk Sayisi Seciniz(12 yada 24)" << endl;
				cin >> secKoltukSayi;
				o2->setKoltukSayisi(secKoltukSayi);
				cout << "Koltuk Numaranizi Seciniz" << endl;
				cin >> secKoltuk;
				o2->koltukSec(secKoltuk);
				break;
			case 3:
				o1->otobusBilgi();
				break;
			case 4:
				o2->otobusBilgi();
				break;
			}
			break;
		case 4:
			cout << "Gitmek Istediginiz Rotayi Seciniz\n1-Manuel Giris\n2-Istanbul-Ankara\n3-Istanbul-Ordu\n4-Istanbul-Kocaeli\n5-Kocaeli-Ankara\n" << endl;
			cin >> sehirSec;
			switch (sehirSec) {
			case 1:
				cout << "Rota Uzunlugunu Giriniz:" << endl;
				cin >> rotaKm;
				r5 = new Manuel(" ", kmBasiFiyat, rotaKm);
				cout << "Rota Ismini Giriniz:" << endl;
				cin >> rotaIsm;
				r5->setRotaIsim(rotaIsm);
				if(rotaKm>=200)r5->rotaBilgi();
				cout << r5->pnrOlustur();
				break;
			case 2:
				r1->rotaBilgi();
				break;	
			case 3:
				r2->rotaBilgi();
				break;
			case 4:
				r3->rotaBilgi();
				break;
			case 5:
				r4->rotaBilgi();
				break;
			}
			break;
		case 5:
			ikramListesi.goruntule();
			break;
		default:
			if (gir == 6) break;
			cout << "Yanlis Bir Tuslama Yaptiniz" << endl;
			break;
		}
	} while (gir != 6);
	delete r1,r2,r3,r4,r5,o1,o2,y1,m1;
}