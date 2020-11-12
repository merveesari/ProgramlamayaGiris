/***************************************************************************************************************************
**                                               SAKARYA ÜNÝVERSÝTESÝ
**                                   BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**                                          BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**                                             PROGRAMLAMAYA GÝRÝÞ DERSÝ
**
**                                         ÖDEV NUMARASI....:2
**                                         ÖÐRENCÝ ADI......:Merve Sarý
**                                         ÖÐRENCÝ NUMARASI.:B181210074
**                                         DERS GRUBU.......:Birinci Öðretim-B
****************************************************************************************************************************/
#include<iostream>
#include<ctime>

using namespace std;
char Harf[5][10];

bool karakterVarmi(char harf)  //Harf tekrarlarýný önlemek için fonksiyon
{
	for (int i = 0; i < 5; i++)  //Matrisin satýr sayýsýndaki tekrarlarýn kontrolü
	{
		for (int j = 0; j < 10; j++)  //Matrisin sütun sayýsýndaki tekrarlarýn kontrolü
		{
			if (Harf[i][j] == harf)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	char yeniHarf;

	cout << "Tekrarsiz ve Rastgele Dizi" << endl;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)  //Matrisin satýr sayýsý
	{
		for (int j = 0; j < 10; j++)  //Matrisin sütun sayýsý
		{
			if (j % 2 == 0)  //Sütun numarasý ikinin katý ise küçük harf yazdýrma
			{
				yeniHarf = 65 + rand() % 26;  //Rastgele harf üretme

				while (karakterVarmi(yeniHarf))  //Rastgele harfin tekrar edip etmediðini kontrol etme
				{
					yeniHarf = 65 + rand() % 26;   //Harf tekrar ediyorsa yeniden rastgele harf üretme
				}
				Harf[i][j] = yeniHarf;
				cout << Harf[i][j] << "\t";
			}
			else  //Sütun numarasý ikinin katý deðilse büyük harf yazdýrma
			{
				yeniHarf = 97 + rand() % 26;  //Rastgele harf üretme

				while (karakterVarmi(yeniHarf))  //Rastgele harfin tekrar edip etmediðini kontrol etme
				{
					yeniHarf = 97 + rand() % 26;  //Harf tekrar ediyorsa yeniden rastgele harf üretme
				}
				Harf[i][j] = yeniHarf;
				cout << Harf[i][j] << "\t";
			}
		}
		cout << endl << endl;
	}


	cout << "Siralanmis Dizi" << endl;

	char tmp;
	//Matrisin elemanlarýný büyükten küçüðe sýralama
	for (int k = 0; k < 5; k++) 
	{
		for (int m = 0; m < 10; m++)
		{
			for (int p = 0; p < 5; p++)
			{
				for (int n = 0; n < 10; n++)
				{

					if (Harf[k][m] < Harf[p][n])  //Önce oluþtulan harf küçükse yer deðiþtir
					{
						tmp = Harf[k][m];
						Harf[k][m] = Harf[p][n];
						Harf[p][n] = tmp;
					}
				}
			}
		}
	}
	for (int k = 0; k < 5; k++)  //Matrisin satýrýný yazdýrma
	{
		for (int m = 0; m < 10; m++)  //Matrisin sütununu yazdýrma
		{
			cout << Harf[k][m] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl;

	system("pause");

	return 0;
}