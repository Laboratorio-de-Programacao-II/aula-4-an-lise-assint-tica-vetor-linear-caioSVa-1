#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s <N> <X>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    int x = atoi(argv[2]);

    if (n <= 0) {
        fprintf(stderr, "Erro: N deve ser maior que zero.\n");
        return 1;
    }

    srand(42);

    int *v = malloc(n * sizeof(int));
    if (v == NULL) {
        fprintf(stderr, "Erro: memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        v[i] = rand() % 100;

    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == x)
            freq++;
    }

    printf("N=%d  X=%d  frequencia=%d\n", n, x, freq);

    free(v);
    return 0;
}
