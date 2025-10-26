#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    int quantidadeAlunos; // Variável para armazenar o número de alunos
    float nota, soma = 0, media; // Variáveis para as notas, soma das notas e média
    int i; // Variável de controle do loop

    // Solicita ao usuário a quantidade de alunos na turma
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos); // Lê o valor digitado e armazena em quantidadeAlunos

    // Estrutura de repetição para ler as notas de cada aluno
    for (i = 1; i <= quantidadeAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota); // Lê a nota digitada e armazena em 'nota'
        soma = soma + nota; // Soma a nota à variável 'soma'
    }

    // Calcula a média das notas
    media = soma / quantidadeAlunos;

    // Exibe a média calculada
    printf("\nA média da turma é: %.2f\n", media);

    // Estrutura condicional para avaliar o desempenho da turma
    if (media >= 7.0) {
        printf("Desempenho bom! A turma está aprovada.\n");
    } else if (media >= 5.0) {
        printf("Desempenho regular. A turma precisa melhorar.\n");
    } else {
        printf("Desempenho insuficiente. A turma está reprovada.\n");
    }

    return 0; // Indica que o programa terminou corretamente
}
