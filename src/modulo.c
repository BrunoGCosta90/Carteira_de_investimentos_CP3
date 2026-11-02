#include <stdio.h>
#include "modulo.h"

int carregarCarteira(Ativo ativo[], int tamanho) {
    FILE *arquivo = fopen("data/carteira.txt", "r"); 
    
    if (arquivo == NULL) {
        return 0; 
    }

    int i = 0;
    while (i < tamanho && fscanf(arquivo, " %49[^;];%29[^;];%d;%lf;%lf", 
             ativo[i].nome, 
             ativo[i].categoria, 
             &ativo[i].quantidade, 
             &ativo[i].precoCompra, 
             &ativo[i].precoAtual) == 5) {
        i++;
    }

    fclose(arquivo);
    return i;
}

void salvarCarteira(Ativo ativo[], int tamanho) {
    FILE *arquivo = fopen("data/carteira.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    
	int i;
    for (i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%s;%s;%d;%.2f;%.2f\n", 
                ativo[i].nome, 
                ativo[i].categoria, 
                ativo[i].quantidade, 
                ativo[i].precoCompra, 
                ativo[i].precoAtual);
    }

    fclose(arquivo);
}
