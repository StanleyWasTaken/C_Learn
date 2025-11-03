// 🎓 LEARN C — PRAKTICKÝ PROJEKT

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// 🎈 FUNKCE S PARAMETRY
void happyBirthday(char name[], int age) {
    printf("JMENO: %s\n", name);
    printf("CISLO: %d\n", age);
}

// ➕ SOUČET
int soucet(int x, int y) {
    return x + y;
}

// ➗ DĚLENÍ
float divided(int x, int y) {
    return (float)y / x;
}

// 💰 BANKOVNÍ FUNKCE
float checkBalance(float balance) {
    printf("\nTvuj aktualni balanc je: %.2f", balance);
    return balance;
}

float withdraw(float balance) {
    float mnozstvi;
    while (1 == 1) {
        printf("Kolik si chces vybrat: ");
        scanf("%f", &mnozstvi);
        if (mnozstvi > balance) {
            printf("Tolik nemas na uctu!\n");
        } else {
            break;
        }
    }
    return mnozstvi;
}

float deposit() {
    float putIn;
    printf("Kolik bys si chtel vlozit na ucet: ");
    scanf("%f", &putIn);
    return putIn;
}

int main() {

    // 🔢 PROMĚNNÉ
    int x = 123;
    float y = 1.23;
    char znak = '#';
    char jmena[][15] = {"Stanislav Cech", "Jouda", "Vendy"};
    printf("%d %.2f %c %s\n\n", x, y, znak, jmena[0]);

    // 🧮 FUNKCE
    int vysledek = soucet(5, 7);
    printf("Součet 5 + 7 = %d\n", vysledek);
    float deleni = divided(2, 4);
    printf("Výsledek dělení = %.2f\n\n", deleni);

    // 🎲 NÁHODNÁ ČÍSLA
    srand(time(NULL));
    int randomNum = (rand() % 50) + 1;
    printf("Náhodné číslo: %d\n\n", randomNum);

    // 🧊 2D POLE
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("2D pole (matice):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 🤔 HÁDÁNÍ ČÍSLA
    int min = 1, max = 100, pokus;
    int hadaneCislo = (rand() % (max - min + 1)) + min;
    printf("****** UHODNI CISLO ******\n");

    while (1 == 1) {
        printf("Zadej cislo (1-100): ");
        scanf("%d", &pokus);

        if (pokus > hadaneCislo) {
            printf("TO JE MOC!\n");
        } else if (pokus < hadaneCislo) {
            printf("TO JE MALO!\n");
        } else {
            printf("GRATULUJI! UHODL JSI TO! Hadane cislo bylo %d\n\n", hadaneCislo);
            break;
        }
    }

    // 💳 BANKOVNÍ APLIKACE
    float balance = 100;
    int moznost = 0;

    printf("***** Vitej v bankovni aplikaci *****\n");

    while (moznost != 4) {
        printf("\nVyber moznost:\n");
        printf("1. Vybrat si\n");
        printf("2. Vlozit penize\n");
        printf("3. Kontrola kreditu\n");
        printf("4. Ukoncit aplikaci\n");
        printf("Tvuj vyber: ");
        scanf("%d", &moznost);

        switch (moznost) {
            case 1:
                balance -= withdraw(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                printf("\nS panem Bohem!\n");
                break;
            default:
                printf("\nMusis zadat moznost 1-4!\n");
                break;
        }
    }

    // ⭐ HVĚZDIČKOVÉ VZORY
    printf("\nLevostranný trojúhelník:\n");
    for (int i = 6; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\nPravostranný trojúhelník:\n");
    int rows = 6;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    // 🧩 POLE ČÍSEL
    int scores[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Zadej skore #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("Zadaná skóre: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n\n");

    // 🔠 ARRAY OF STRINGS
    char numbersStr[][10] = {"One", "Two", "Three", "Four", "Five"};
    int size = sizeof(numbersStr) / sizeof(numbersStr[0]);

    printf("Array of strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", numbersStr[i]);
    }
    printf("\n");

    // 🧍‍♂️ UŽIVATELSKÁ JMÉNA
    char names[3][25] = {0};
    getchar(); // flush před fgets
    printf("Zadej jmeno: ");
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names[0]) - 1] = '\0';
    printf("Zadal jsi: %s\n", names[0]);

    return 0;
}
