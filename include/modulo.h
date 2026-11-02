#ifndef MODULO_H
#define MODULO_H

typedef struct {
	char nome[50];
	char categoria[50];
	int quantidade;
	double precoCompra;
	double precoAtual;
} Ativo;

int carregarCarteira(Ativo ativo[], int tamanho);

void salvarCarteira(Ativo ativo[], int tamanho);

#endif
