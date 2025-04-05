#include <stdio.h>

int main()
{
	char chipi[] = " Chipi";
	char chapa[] = " Chapa";
	char dubi[] = " Dubi";
	char daba[] = " Daba";
	char magi[] = " Magi co mi";
	char boom[] = " Boom!";
	char booooom[] = " Booooom!";

	int loop = 0;

	while (loop < 2)
	{
		printf("\n");
		for (int i = 1; i <= 2; i++)
		{
			printf("%s", chipi);
		}

		printf("\n");

		for (int i = 1; i <= 2; i++)
		{
			printf("%s", chapa);
		}

		printf("\n");

		for (int i = 1; i <= 2; i++)
		{
			printf("%s", dubi);
		}

		printf("\n");

		for (int i = 1; i <= 2; i++)
		{
			printf("%s", daba);
		}

		printf("\n");

		for (int i = 1; i <= 1; i++)
		{
			printf("%s", magi);
		}

		printf("\n");

		for (int i = 1; i <= 2; i++)
		{
			printf("%s", dubi);
		}

		printf("\n");

		if (loop == 0)
		{
			for (int i = 1; i <= 4; i++)
			{
				printf("%s", boom);
			}
		}
		else
		{
			printf("%s", booooom);
		}
		loop++;
		printf("\n");
	}
}