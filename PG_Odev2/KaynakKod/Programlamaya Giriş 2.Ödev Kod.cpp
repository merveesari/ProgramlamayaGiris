/***************************************************************************************************************************
**                                               SAKARYA �N�VERS�TES�
**                                   B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**                                          B�LG�SAYAR M�HEND�SL��� B�L�M�
**                                             PROGRAMLAMAYA G�R�� DERS�
**
**                                         �DEV NUMARASI....:2
**                                         ��RENC� ADI......:Merve Sar�
**                                         ��RENC� NUMARASI.:B181210074
**                                         DERS GRUBU.......:Birinci ��retim-B
****************************************************************************************************************************/
#include<iostream>
#include<ctime>

using namespace std;
char Harf[5][10];

bool karakterVarmi(char harf)  //Harf tekrarlar�n� �nlemek i�in fonksiyon
{
	for (int i = 0; i < 5; i++)  //Matrisin sat�r say�s�ndaki tekrarlar�n kontrol�
	{
		for (int j = 0; j < 10; j++)  //Matrisin s�tun say�s�ndaki tekrarlar�n kontrol�
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
	for (int i = 0; i < 5; i++)  //Matrisin sat�r say�s�
	{
		for (int j = 0; j < 10; j++)  //Matrisin s�tun say�s�
		{
			if (j % 2 == 0)  //S�tun numaras� ikinin kat� ise k���k harf yazd�rma
			{
				yeniHarf = 65 + rand() % 26;  //Rastgele harf �retme

				while (karakterVarmi(yeniHarf))  //Rastgele harfin tekrar edip etmedi�ini kontrol etme
				{
					yeniHarf = 65 + rand() % 26;   //Harf tekrar ediyorsa yeniden rastgele harf �retme
				}
				Harf[i][j] = yeniHarf;
				cout << Harf[i][j] << "\t";
			}
			else  //S�tun numaras� ikinin kat� de�ilse b�y�k harf yazd�rma
			{
				yeniHarf = 97 + rand() % 26;  //Rastgele harf �retme

				while (karakterVarmi(yeniHarf))  //Rastgele harfin tekrar edip etmedi�ini kontrol etme
				{
					yeniHarf = 97 + rand() % 26;  //Harf tekrar ediyorsa yeniden rastgele harf �retme
				}
				Harf[i][j] = yeniHarf;
				cout << Harf[i][j] << "\t";
			}
		}
		cout << endl << endl;
	}


	cout << "Siralanmis Dizi" << endl;

	char tmp;
	//Matrisin elemanlar�n� b�y�kten k����e s�ralama
	for (int k = 0; k < 5; k++) 
	{
		for (int m = 0; m < 10; m++)
		{
			for (int p = 0; p < 5; p++)
			{
				for (int n = 0; n < 10; n++)
				{

					if (Harf[k][m] < Harf[p][n])  //�nce olu�tulan harf k���kse yer de�i�tir
					{
						tmp = Harf[k][m];
						Harf[k][m] = Harf[p][n];
						Harf[p][n] = tmp;
					}
				}
			}
		}
	}
	for (int k = 0; k < 5; k++)  //Matrisin sat�r�n� yazd�rma
	{
		for (int m = 0; m < 10; m++)  //Matrisin s�tununu yazd�rma
		{
			cout << Harf[k][m] << "\t";
		}
		cout << endl << endl;
	}
	cout << endl;

	system("pause");

	return 0;
}