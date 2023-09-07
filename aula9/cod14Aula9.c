#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALUNOS 15

// Função para gerar números aleatórios entre 0 e 10
float gerarNotaAleatoria() {
    return ((float)rand() / RAND_MAX) * 10;
}

int main() {
    
    srand(time(NULL)); // Inicializa a semente de números aleatórios com o tempo atual

    float notasAvaliacao1[NUM_ALUNOS];
    float notasAvaliacao2[NUM_ALUNOS];
    float medias[NUM_ALUNOS];

    // Preencha os arrays de notas da primeira e segunda avaliações com valores aleatórios
    for (int i = 0; i < NUM_ALUNOS; i++) {
        notasAvaliacao1[i] = gerarNotaAleatoria();
        notasAvaliacao2[i] = gerarNotaAleatoria();
    }

    // Compare as notas e calcule as médias
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (notasAvaliacao2[i] > notasAvaliacao1[i]) {
            printf("Aluno %d: Melhorou\n", i + 1);
        } else if (notasAvaliacao2[i] < notasAvaliacao1[i]) {
            printf("Aluno %d: Piorou\n", i + 1);
        } else {
            printf("Aluno %d: Manteve a nota\n", i + 1);
        }

        // Calcule a média das duas avaliações
        medias[i] = (notasAvaliacao1[i] + notasAvaliacao2[i]) / 2;
    }

    // Imprima as médias
    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: %.2f\n", i + 1, medias[i]);
    }

    return 0;
}
