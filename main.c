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
		int somme= nb1 + nb2;
		printf("Une addition ! \n");
		printf("Et en voici la somme: %d %c %d = %d\n", nb1, signe, nb2, somme);
	}
	else if (signe == 45)
	{
		int difference= nb1 - nb2;
		printf("Une soustraction ! \n");
		printf("Et en voici la différence: %d %c %d = %d\n", nb1, signe, nb2, difference);
	}
	else if (signe == 42)
	{
		int produit= nb1 * nb2;
		printf("Une multiplication ! \n");
		printf("Et en voici le produit: %d %c %d = %d\n", nb1, signe, nb2, produit);
	}
	else if (signe == 47)
	{
		if (nb1, nb2 == 0)
		{
			printf("On ne divise pas par 0 ! ^^\n");
		}
		else
		{
			double quotient= (double)nb1 / (double)nb2;
			printf("Une division ! \n");
			printf(" Et en voici le quotient: %d %c %d = %.2f\n", nb1, signe, nb2, quotient);
		}
	}
	else if (signe == 37)
	{
		if (nb1, nb2 == 0)
                {
                        printf("On ne divise pas par 0 ! ^^\n");
                }
		else
		{
			int reste= nb1 % nb2;
			printf("Un modulo ! \n");
			printf("Et en voici le reste: %d %c %d = %d\n", nb1, signe, nb2, reste);
		}
	}
	else
	{
		printf("L'opérateur ne fait pas partie de la liste, désolé.\n");
	}
	exit(0);
}
