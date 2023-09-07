#include <stdio.h>
#include <stdbool.h>

// Função para verificar se o ano é bissexto
bool ehAnoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para verificar se a data é válida
bool ehDataValida(int dia, int mes, int ano) {
    if (ano < 1 || mes < 1 || mes > 12 || dia < 1) {
        return false;
    }

    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (ehAnoBissexto(ano)) {
        diasNoMes[2] = 29;
    }

    return dia <= diasNoMes[mes];
}

int main() {
    int dia, mes, ano;

    printf("Digite a data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (ehDataValida(dia, mes, ano)) {
        const char* nomesMes[] = {
            "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
            "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
        };

        printf("Dia: %d\n", dia);
        printf("Mês: %s\n", nomesMes[mes - 1]);
        printf("Ano: %d\n", ano);
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
