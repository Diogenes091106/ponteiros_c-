#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

int main(void)
{
    FILE *pont_arq;
    char frase[MAX_LEN];
    int i;
    int tamanho;

    pont_arq = fopen("arquivo1.txt", "w");
    if (pont_arq == NULL) {
        perror("Erro ao tentar abrir o arquivo");
        return 1; 
    }

    printf("Digite a frase a ser gravada no arquivo (máx. %d caracteres): ", MAX_LEN - 1);
    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        perror("Erro ao ler a entrada");
        fclose(pont_arq);
        return 1; 
    }

    tamanho = strlen(frase);
    if (tamanho > 0 && frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--;
    }

    for (i = 0; i < tamanho; i++) {
        fputc(frase[i], pont_arq);
    }

    fclose(pont_arq);

    printf("Frase gravada com sucesso no arquivo 'arquivo1.txt'.\n");

    return 0;
}

