#include <stdio.h>


void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){
    int N, i;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char nomes[N][80];
    double notas1[N], notas2[N];

    for (int i = 0; i < N; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", i + 1);
        limpar_entrada();
        ler_texto(nomes[i], 80);
		scanf("%lf", &notas1[i]);
        scanf("%lf", &notas2[i]);
    }

    printf("Alunos aprovados:\n");

    for (int i = 0; i < N; i++) {
        media = (notas1[i] + notas2[i]) / 2.0;

        if (media >= 6.0) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
