//Skriv en funktion i C som heter StringMaxLen, tar en char* ("string") och en int(kallad maxlength).
//Funktionen ska returnera det st�rsta av
//- l�ngden av str�ngen
//och
//- int - parametern maxlength
//
//Dvs j�mf�r l�ngden p� str�ngen och maxlength
//
//�ss� skriver ju Stefan alltid "skriv kod som anropar" ...
//
//
//
//Det perfekta tentasvaret ;)

#include <stdio.h>
#include <string.h>

int StringMaxLen(char *s, int maxLength)
{
	int len = strlen(s);
	if (len > maxLength) {
		return len;
	}
	return maxLength;
}

int main321312132312()
{
	int max = StringMaxLen("hejh", 123454);
	printf("Det blev %d", max);
	return 0;
}
