/****************************************************************************************
**                               SAKARYA �N�VERS�TES�
**                     B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**                          B�LG�SAYAR M�HEND�SL��� B�L�M�
**                             PROGRAMLAMAYA G�R�� DERS�
**
**                        �DEV NUMARASI....:1.�dev 1.B�l�m
**                        ��RENC� ADI......:MERVE SARI
**                        ��RENC� NUMARASI.:B181210074
**                        DERS GRUBU.......:Birinci ��retim-B
*****************************************************************************************/
#include<iostream>

using namespace std;

int main()
{
	int i;
	int j;

	// �eklin �st taraf� i�in d�ng�

	for ( i = 5; i > 0; i--)   // Sat�r say�s� i�in d�ng�
	{
		for ( j = 0; j < i; j++)   // Bir sat�rdaki y�ld�zlar i�in d�ng�
		{
			cout << "* ";
		}
		for ( j = 0; j <= 10-2*i; j++)   // �ki ��gen aras�ndaki bo�luklar i�in d�ng�
		{
			cout << "  ";
		}
		for ( j = 0; j < i; j++)   // Bir sat�rdaki y�ld�zlar i�in d�ng�
		{
			cout << "* ";
		}
		cout << endl;
	}

	// �eklin alt taraf� i�in d�ng�

	for ( i = 0; i <= 5; i++)   // Sat�r say�s� i�in d�ng�
	{
		for ( j = 0; j <i ; j++)   // Bir sat�rdaki y�ld�zlar i�in d�ng�
		{
			cout << "* ";
		}
		for ( j = 0; j <= 10-2*i; j++)   // �ki ��gen aras�ndaki bo�luklar i�in d�ng�
		{
			cout << "  ";
		}
		for ( j = 0; j < i; j++)   // Bir sat�rdaki y�ld�zlar i�in d�ng�
		{
			cout << "* ";
		}

		cout << endl;
	}
	
	system("pause");

	return 0;
}