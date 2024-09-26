#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(NULL));//Lignes de code pour nombre aléatoire
	int random_number = rand() % 100 + 1;//Lignes de code pour nombre aléatoire
	int guess;
	printf("Bienvenue dans notre jeu!\n"); 

	while (guess != random_number)// Boucle qui initialise le jeu
	{
    	printf("Choisissez un nombre entre 1 et 100.\n");
		scanf("%d", &guess);// Demande un nombre
		if (guess == random_number) 
		{
			printf("Gagné\n");// Si l'utilisateur a trouvé le numéro magique, alors, il a gagné
		}
		else if ((guess < random_number) && (guess > 0))
		{
			printf("C'est plus!\n");// Si l'utilisateur a donné un numéro en dessous du numéro magique et superieur à 0, le terminal affichera "C'est plus!".
		}
		else if ((guess > random_number) && (guess < 100))
		{
			printf("C'est moins\n");// Si l'utilisateur a donné un numéro superieur au numéro magique et inferieur à 100, alors le terminal affichera "C'est moins".
		}
		else
		{
			printf("Votre nombre n'est pas entre 1 et 100.\n");
		}
	}
	return 0;
}