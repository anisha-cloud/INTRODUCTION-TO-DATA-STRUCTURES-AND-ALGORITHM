#include <stdio.h>

int main() {
    int N, X;

    // Input the number of domestic animals
    printf("Enter the number of domestic animals: ");
    scanf("%d", &N);

    // Input the number of wild animals
    printf("Enter the number of wild animals: ");
    scanf("%d", &X);

    // Declare arrays to store the names of the animals
    char domesticAnimals[N][30];
    char wildAnimals[X][30];

    // Input the names of domestic animals
    printf("Enter the names of the domestic animals:\n");
    for (int i = 0; i < N; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domesticAnimals[i]);
    }

    // Input the names of wild animals
    printf("Enter the names of the wild animals:\n");
    for (int i = 0; i < X; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wildAnimals[i]);
    }

    // Print all animals
    printf("\nAll animals:\n");

    for (int i = 0; i < N; i++) {
        printf("%s\n", domesticAnimals[i]);
    }

    for (int i = 0; i < X; i++) {
        printf("%s\n", wildAnimals[i]);
    }

    return 0;
}

