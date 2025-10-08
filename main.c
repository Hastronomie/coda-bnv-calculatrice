#include <stdkib.h>
#include <stdio.h>

int main()
{
	int nb1;
	int nb2;
	char signe;
	printf("Bonjour utilisateur.rice ! :)\n");
	printf("Saisir un opérateur parmi la liste: + - * / % :");
        scanf("%c", signe);
	printf("Saisir un nombre entier: ");
	scanf("%d", nb1);
	printf("Saisir un deuxième nombre entier: ");
	scanf("%d", nb2);
	exit(0);
}
