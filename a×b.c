#include <stdio.h>

int add(int x, int y) {
    int somme = x;
    for (int i = 0; i < y; i++) {
        somme = somme + 1;  // on ajoute 1 à chaque tour
    }
    return somme;
}

int mult(int a, int b) {
    int produit = 0;
    for (int i = 0; i < b; i++) {
        produit = add(produit, a);  // ajouter 'a' en utilisant uniquement +1
    }
    return produit;
}

int main() {
    int a, b;
    printf("Entrez a (>0) : ");
    scanf("%d", &a);
    printf("Entrez b (>0) : ");
    scanf("%d", &b);

    int resultat = mult(a, b);
    printf("%d × %d = %d\n", a, b, resultat);

    return 0;
}