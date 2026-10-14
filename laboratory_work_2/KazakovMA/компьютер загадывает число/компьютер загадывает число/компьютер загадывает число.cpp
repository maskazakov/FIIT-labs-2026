#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(void) {
	setlocale(LC_ALL, "");
	setlocale(LC_NUMERIC, "C");
	int count_of_attempts = 0, number, guess;
	srand(time(NULL));
	number = (rand()) % 1000 + 1;

	do {
		printf("введите число\n");
		scanf_s("%i", &guess);
		count_of_attempts++;

		if (guess < number)
			printf("загаданное число бoльше вашего\n");

		else if (guess > number)
			printf("загаданное число меньше вашего\n");

		else if (guess == number)
			printf("угадали\n");
	} while (guess != number);

	printf("Всего %i попыток\n", count_of_attempts);
	return 0;
}