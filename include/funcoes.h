#ifndef FUNCOES_H
#define FUNCOES_H
#include "modulo.h"

int imprimeMenu();
int capturaOpcao();
void cadastrarAtivo(Ativo ativos[], int *totalAtivos, int tamanho);
void listarAtivos(Ativo ativos[], int totalAtivos);
double totalIndividual(Ativo ativos[], int indice);
double rentabilidadeIndividual(Ativo ativos[], int indice);
double total(Ativo ativos[], int totalAtivos);
void imprimeTotal(Ativo ativos[], int totalAtivos);
void rentabilidadeGeral(Ativo ativos[], int totalAtivos);
void imprimeRentabilidade(Ativo ativos[], int totalAtivos);
void lucro(Ativo ativos[], int totalAtivos);
void ordenarRentabilidade(Ativo ativos[], int totalAtivos);
void imprimeOrdenado(Ativo ativos[], int totalAtivos);
void simulador(Ativo ativos[], int totalAtivos, double poupanca, double tesouro, double cdb);
void relatorioFinal(Ativo ativos[], int totalAtivos);

#endif
