#include <stdlib.h>
#include <stdio.h>

int main()
{
	int nb1;
	int nb2;
	char signe;
	printf("Bonjour utilisateur.rice ! :)\n");
	printf("Saisir un opérateur parmi la liste: + - * / %% :");
        scanf("%c", &signe);
	printf("Saisir un nombre entier: ");
	scanf("%d", &nb1);
	printf("Saisir un deuxième nombre entier: ");
	scanf("%d", &nb2);

	if (signe == 43)
	{
		printf("Une addition ! \n");
	}
	else if (signe == 45)
	{
		printf("Une soustraction ! \n");
	}
	else if (signe == 42)
	{
		printf("Une multiplication ! \n");
	}
	else if (signe == 47)
	{
		printf("Une division ! \n");
	}
	else if (signe == '%')
	{
		printf("Un modulo ! \n");
	}
	else
	{
		printf("L'opérateur ne fait pas partie de la liste, désolé.\n");
	}
	exit(0);
}
