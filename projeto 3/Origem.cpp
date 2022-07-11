#include <stdio.h>
#include <locale.h>

int main()
{
	float x, y, res;
	int op;
	setlocale(LC_ALL, "Portuguese");
	printf("CALCULADORA\n");

	printf("Digite um valor para operar: ");
	scanf_s("%f" , &x);
	printf("Digite um segundo valor para operar: ");
	scanf_s("%f" , &y);

	printf("1 - Adiçâo\n");
	printf("2 - Subtrçâo\n");
	printf("3 - Multiplicaçâo\n");
	printf("4 - Divisâo\n");
	printf("Selecione a opçâo desejada:");
	scanf_s("%i" , &op);

	if (op == 1)
	{ //Adiçâo
		res = x + y;
		printf("O resultado da soma é: %.2f", res);
	}
	else
	{
		if (op == 2)
		{ //Subtração
			res = x - y;
			printf("O resultado da sbtração é: %.2f" , res);
		}
		else
		{ 
			if (op == 3)
			{ //Multiplicação
				res = x * y;
				printf("O resultado da multiplicação é: %.2f", res);
			}
			else
			{
				res = x / y;
				printf("O resultado da divisão é: %.2f", res);

			}


		}

	}

	


	return 0;
}