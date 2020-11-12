/********************************************************************************************************
**                                      SAKARYA ÜNÝVERSÝTESÝ
**                            BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**                                 BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**                                   PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**                               ÖDEV NUMARASI....:1.Ödev 2.Bölüm 
**                               ÖÐRENCÝ ADI......:Merve Sarý
**                               ÖÐRENCÝ NUMARASI.:B181210074
**                               DERS GRUBU.......:B
*********************************************************************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int sayac_a=0;
	int sayac_e=0;
	int sayac_i=0;
	int sayac_o=0;
	int sayac_u=0;
	char cumle[1000];
	

	cout << "Bir cumle giriniz:";
	cin >> cumle;

	cout << "H" <<setw(9) << "TS" ;

	for (int i = 0; cumle[i] != '\0'; i++)    // Her harfin tekrar sayýsý(sayacý) hesaplanýr
	{
		if (cumle[i] == 'a' || cumle[i] == 'A')
		{
			sayac_a++;
		}
		if (cumle[i] == 'e' || cumle[i] == 'E')
		{
			sayac_e++;
		}
		if (cumle[i] == 'i' || cumle[i] == 'I')
		{
			sayac_i++;
		}
		if (cumle[i] == 'o' || cumle[i] == 'O')
		{
			sayac_o++;
		}
		if (cumle[i] == 'u' || cumle[i] == 'U')
		{
			sayac_u++;
		}
	}
	
	int sayaclar[5] = { sayac_a,sayac_e,sayac_i,sayac_o,sayac_u };  // En çok tekrar edilen harf belirlenir
	int sayac_enbuyuk = sayaclar[0];
	for (int i = 0; i < 5; i++)
	{
		if (sayaclar[i] > sayac_enbuyuk)
		{
			sayac_enbuyuk = sayaclar[i];
		}
	}
	for (int i = 0; i < sayac_enbuyuk; i++)   // En çok tekrar edilen harfin rekrar sayýsý yan yana ekrana yazýlýr
	{
		cout <<setw(5)<< i+1;
	}
	cout << endl;
	
	if (sayac_a != 0)   // "a" harfini tekrar miktarý kadar ekrana yazdýrma
	{
		cout << "a" << setw(8) << sayac_a<<"  ";
		for (int i = 0; i < sayac_a; i++)
		{
			cout << setw(4) << "a"<<" ";
		}
		cout << endl;
	}
	

	if (sayac_e != 0)  //"e" harfini tekrar miktarý kadar ekrana yazdýrma
	{
		cout << "e" << setw(8) << sayac_e << "  ";
		for (int i = 0; i < sayac_e; i++)
		{
			cout << setw(4) << "e" << " ";
		}
		cout << endl;
	}
	

	if (sayac_i != 0)  // "i" harfini tekrar miktarý kadar ekrana yazdýrma
	{
		cout << "i" << setw(8) << sayac_i << "  ";
		for (int i = 0; i < sayac_i; i++)
		{
			cout << setw(4) << "i" << " ";
		}
		cout << endl;
	}
	

	if (sayac_o != 0)   // "o" harfini tekrar miktarý kadar ekrana yazdýrma
	{
		cout << "o" << setw(8) << sayac_o << "  ";
		for (int i = 0; i < sayac_o; i++)
		{
			cout << setw(4) << "o" << " ";
		}
		cout << endl;
	}
	

	if (sayac_u != 0)   // "u" harfini tekrar miktarý kadar ekrana yazdýrma
	{
		cout << "u" <<setw(8) << sayac_u << "  ";
		for (int i = 0; i < sayac_u; i++)
		{
			cout << setw(4) << "u" << " ";
		}
		cout << endl;
	}
	system("pause");
}