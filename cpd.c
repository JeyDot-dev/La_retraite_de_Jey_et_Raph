#include <stdio.h>

int	main(void)
{
	int	interest;
	int	mthadd;
	int	months;
	long int	total;
	long int	diff;
	long int	totdiff;
	int	year;
	int	i;
	
	year = 0;
	interest = 6;	// %d'interet annuel
	mthadd = 2000;  //argent a mettre de cote chaque mois
	months = 180;	//duree en mois
	i = 1;
	total = 0;
	totdiff = 0;
	while (i <= months)
	{
		diff = total;
		total += mthadd;
		if (i % 12 == 0)
		{
			total = total + ((total / 100) * interest);
			diff = total - diff;
			totdiff += diff;
		}
		printf("Month %i, total : %lichf.\n", i, total);
		if (i % 12 == 0)
			printf("-------YEAR %i INTERESTS : %liCHF. | TOTAL : %liCHF.------\n", i / 12, diff, total);
		i++;
	}
	printf("*********total earned from interests : %li*******\n", totdiff);
}
