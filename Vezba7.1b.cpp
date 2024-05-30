// Vezba7.1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Unos cena artikala (0-kraj) uz pomoc niza
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float cene[100];//cene[0],..,cene[99]
	int brArt = 1, i;
	printf("Unesi broj artikala (max 100): ");
	scanf("%d", &brArt);
	for (i = 0; i < brArt; i++) // 0,1... brArt-1
	{
		printf("Unesi cenu %d.:\n", i+1);
		scanf("%f", &cene[i]);//&cene[0], &cene[1].. cene[2], cene[3], cene[4]
	}
	float ukupno = 0;
	for (i = 0; i < brArt; i++)
		ukupno += cene[i];
	printf("Ukupno: %.2f\n", ukupno);

	float max = cene[0];
	for (i = 1; i < brArt; i++)
		if (cene[i] > max)
			max = cene[i];
	printf("Najveca cena: %.2f\n", max);

	int imin = 0;
	for (i = 1; i < brArt; i++)
		if (cene[i] < cene[imin])
			imin = i;
	printf("Najniza cena: %.2f\n", cene[imin]);
	printf("%d. art je najjeftiniji\n", imin + 1);
}

