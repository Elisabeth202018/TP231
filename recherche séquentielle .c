#include <stdio.h>

int recherche_sequentielle(int tab[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (tab[i] == x) {
            return i; // Retourne la position trouvée
        }
    }
    return -1; // Pas trouvé
}

int main() {
    int tab[] = {5, 8, 12, 7, 3};
    int n = 5;
    int x;

    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &x);

    int pos = recherche_sequentielle(tab, n, x);

    if (pos != -1)
        printf("Valeur %d trouvée à la position %d\n", x, pos);
    else
        printf("Valeur %d non trouvée.\n", x);

    return 0;
}