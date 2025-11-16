#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// Gera uma letra aleatória de 'A' até 'A' + alphabetLimit - 1
char generateRandomLetter(int alphabetLimit) {
    return rand() % alphabetLimit + 'A';
}

// Imprime numLetters letras aleatórias usando generateRandomLetter
void printRandomLetter(int numLetters, int alphabetLimit) {
    for (int i = 0; i < numLetters; i++) {
        printf("%c\n", generateRandomLetter(alphabetLimit));
    }
    printf("Letters generated: %d\n", numLetters);
}

int main(void) {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    printRandomLetter(5, 5); // Exemplo: 5 letras de 'A' a 'E'

    return 0;
}
