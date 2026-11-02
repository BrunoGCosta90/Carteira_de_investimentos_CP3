#include <stdio.h>
#include "funcoes.h"
#include "modulo.h"

#define TAMANHO 50
#define POUPANCA 0.0066 //outubro 2026
#define TESOURO_SELIC 0.0092 //outubro 2026
#define CDB_100_CDI 0.0107 //outubro 2026

int main() {
	Ativo ativos[TAMANHO];
	int continua = 1;
	int totalAtivos = 0;
	totalAtivos = carregarCarteira(ativos, TAMANHO);
	
	
	while (continua == 1){
		
		imprimeMenu();
		int opcao = capturaOpcao();
		
		switch(opcao){
			case 1: 
				cadastrarAtivo(ativos, &totalAtivos, TAMANHO);
				break;
			case 2: 
				listarAtivos(ativos, totalAtivos); 
				break;
			case 3:
				imprimeTotal(ativos, totalAtivos);
				break;
			case 4:
				imprimeRentabilidade(ativos, totalAtivos);
				break;
			case 5:
				imprimeOrdenado(ativos, totalAtivos);
				break;
			case 6:
				simulador(ativos, totalAtivos, POUPANCA, TESOURO_SELIC, CDB_100_CDI);
				break;
			case 7:
				relatorioFinal(ativos, totalAtivos);
				break;
			case 0: 
				continua = 0;
				printf("Saindo...\n");
				break;
			default: break;
		}
		
	}
	
	
	return 0;
}
