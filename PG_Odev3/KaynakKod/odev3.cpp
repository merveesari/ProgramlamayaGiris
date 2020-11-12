/****************************************************************************
**					       SAKARYA ÜNÝVERSÝTESÝ
**			      BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				      BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				        PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI.....:3
**				ÖÐRENCÝ ADI.......:Merve Sarý
**				ÖÐRENCÝ NUMARASI..:b181210074
**				DERS GRUBU........:Birinci Öðretim-B
****************************************************************************/
#include<iostream>

using namespace std;

struct Islem
{
	int giris[5][5] = { 3, 2, 5, 1, 0,
						6, 2, 1, 0, 2,
						3, 0, 0, 2, 4,
						1, 1, 3, 2, 3,
						1, 1, 3, 2, 1 };

	int giris_boyut ;
	int kayma_miktari;
	int cekirdek_boyut;
	int sonuc_boyut;
	int cekirdek_matris[100][100];
	int sonuc_matris[100][100];
};

Islem cekirdek;

int matrisislem(int a, int b);

int main()
{
	cout << "Cekirdek boyutunu giriniz: ";
	cin >> cekirdek.cekirdek_boyut;

	if (cekirdek.cekirdek_boyut < 2 || cekirdek.cekirdek_boyut > 5) 
	{
		cout << "2 ve 5 arasinda bir cekirdek boyutu giriniz: ";
		cin >> cekirdek.cekirdek_boyut;
	}

	cout << endl;

	cout << "Kayma miktarini giriniz: ";
	cin >> cekirdek.kayma_miktari;

	//Kayma miktarý, sonuç matrisin boyunu hesaplama formülünde paydada olduðundan sýfýr olduðunda tanýmsýz olur
	if (cekirdek.kayma_miktari==0) 
	{
		cout << "bu islem yapilamaz..." << endl;
	}

	Islem sonuc;

	sonuc.giris_boyut = sizeof(cekirdek.giris) / sizeof(cekirdek.giris[0]);
	sonuc.sonuc_boyut = ((sonuc.giris_boyut - cekirdek.cekirdek_boyut) / cekirdek.kayma_miktari) + 1;

	for (int i = 0; i < cekirdek.cekirdek_boyut; i++) //Matrisin satýr sayýsýný ekrana yazdýrma 
	{
		for (int j = 0; j < cekirdek.cekirdek_boyut; j++)  //Matrisin sütun sayýsýný ekrana yazdýrma 
		{
			cout << "cekirdek" << "[" << i << "]" << "[" << j << "]" << "=";
			cin >> cekirdek.cekirdek_matris[i][j];
			cout << endl;
		}
	}

	//Sonuç matrisinin elemanlarýna deðer atamak için döngü
	for (int i = 0; i < sonuc.sonuc_boyut; i++) 
	{
		for (int j = 0; j < sonuc.sonuc_boyut; j++)
		{
			sonuc.sonuc_matris[i][j] = matrisislem(i, j);
			cout << sonuc.sonuc_matris[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}


int matrisislem(int a, int b)  //Çekirdek ve giriþ matrislerinin çarpýmlarýný yapmak için fonksiyon
{
	int gecici = 0;
	int toplam = 0;

	for (int i = 0; i < cekirdek.cekirdek_boyut; i++)
	{
		for (int j = 0; j < cekirdek.cekirdek_boyut; j++)
		{
			gecici = cekirdek.giris[a][b] * cekirdek.cekirdek_matris[i][j];
			toplam = gecici + toplam;
			b++;
		}
		a++;
		b -= cekirdek.cekirdek_boyut;
	}
	return toplam;
}