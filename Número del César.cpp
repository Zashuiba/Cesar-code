// Número del César.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


char abc[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
  
void code(int n)
{

char cadena[] = { "espacio" };
cout << "Introduzca la cadena a cifrar : " << '\n';
cin >> cadena;
char res[sizeof(cadena)];

for (int i(0); i <= sizeof(cadena); i++)
{
	for (int f(0); f <= 26; f++)
	{
		if (cadena[i] == abc[f])
			res[i] = abc[f + n];
	}


}
cout << res << '\n';
system("pause");
}

void decode(int n)
{

	char cadena[] = { "espacio" };
	cout << "Introduzca la cadena a cifrar : " << '\n';
	cin >> cadena;
	char res[sizeof(cadena)];

	for (int i(0); i <= sizeof(cadena); i++)
	{
		for (int f(0); f <= 26; f++)
		{
			if (cadena[i] == abc[f])
				res[i] = abc[f - n];
		}


	}
	cout << res << '\n';
	system("pause");
}




int main()
{
	
	int n;
	cout << "Introduzca el numero del cesar " << '\n';
	cin >> n;
	cout << "Desea usted cifrar o descifrar?" << '\n';
	cout << "Introduzca c para cifrar o d para descifrar" << '\n';
	char chos;
	cin >> chos;
	if (chos == 'c')
		code(n);
	else decode(n);



    return 0;
}

