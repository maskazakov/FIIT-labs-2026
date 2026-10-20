#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    int low = 1, high = 1000, guess = 0, attempts = 0;
    char answer;

    printf("загадайте число от 1 до 1000\n");

    do {
        guess = (low + high) / 2;
        attempts=attempts+1;
        printf("это число %i", guess);
        scanf_s(" %c", &answer);

        if (answer == '>')
            low = guess + 1;
        else if (answer == '<')
            high= guess - 1;
    } while (answer != '=');

    printf("Угадал за %i попыток число %i\n", attempts, guess);

    return 0;
}
