/****************************************************************************************
**                               SAKARYA ÜNÝVERSÝTESÝ
**                     BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**                          BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**                             PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**                        ÖDEV NUMARASI....:1.Ödev 1.Bölüm
**                        ÖÐRENCÝ ADI......:MERVE SARI
**                        ÖÐRENCÝ NUMARASI.:B181210074
**                        DERS GRUBU.......:Birinci öðretim-B
*****************************************************************************************/
#include<iostream>

using namespace std;

int main()
{
	int i;
	int j;

	// Þeklin üst tarafý için döngü

	for ( i = 5; i > 0; i--)   // Satýr sayýsý için döngü
	{
		for ( j = 0; j < i; j++)   // Bir satýrdaki yýldýzlar için döngü
		{
			cout << "* ";
		}
		for ( j = 0; j <= 10-2*i; j++)   // Ýki üçgen arasýndaki boþluklar için döngü
		{
			cout << "  ";
		}
		for ( j = 0; j < i; j++)   // Bir satýrdaki yýldýzlar için döngü
		{
			cout << "* ";
		}
		cout << endl;
	}

	// Þeklin alt tarafý için döngü

	for ( i = 0; i <= 5; i++)   // Satýr sayýsý için döngü
	{
		for ( j = 0; j <i ; j++)   // Bir satýrdaki yýldýzlar için döngü
		{
			cout << "* ";
		}
		for ( j = 0; j <= 10-2*i; j++)   // Ýki üçgen arasýndaki boþluklar için döngü
		{
			cout << "  ";
		}
		for ( j = 0; j < i; j++)   // Bir satýrdaki yýldýzlar için döngü
		{
			cout << "* ";
		}

		cout << endl;
	}
	
	system("pause");

	return 0;
}