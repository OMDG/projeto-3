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

	printf("1 - Adi��o\n");
	printf("2 - Subtr��o\n");
	printf("3 - Multiplica��o\n");
	printf("4 - Divis�o\n");
	printf("Selecione a op��o desejada:");
	scanf_s("%i" , &op);

	if (op == 1)
	{ //Adi��o
		res = x + y;
		printf("O resultado da soma �: %.2f", res);
	}
	else
	{
		if (op == 2)
		{ //Subtra��o
			res = x - y;
			printf("O resultado da sbtra��o �: %.2f" , res);
		}
		else
		{ 
			if (op == 3)
			{ //Multiplica��o
				res = x * y;
				printf("O resultado da multiplica��o �: %.2f", res);
			}
			else
			{
				res = x / y;
				printf("O resultado da divis�o �: %.2f", res);

			}


		}

	}

	


	return 0;
}