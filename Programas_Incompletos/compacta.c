// ----------------------------------------------------------------------------
// Programa compacta.c
//
// Lê um arquivo texto de entrada com um grafo e
// gera um arquivo binário de saída com matriz de adjacência compacta
//
// Para compilar: gcc compacta.c -o compacta -Wall
// Para executar: ./compacta <nome arquivo entrada> <nome arquivo saída>
// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----------------------------------------------------------------------------
// Variáveis globais

// ...

// ----------------------------------------------------------------------------
// Programa principal

int main(int argc, char *argv[])
{
	char nome_arq_entrada[100],
		  nome_arq_saida[100] ;

	FILE *arq_entrada,	// Arquivo texto de entrada
		  *arq_saida ; 	// Arquivo binário de saída

	// Outras declarações
	// ...

	if (argc != 3)
	{
		printf("\nErro nos argumentos da linha de comando\n") ;
		exit(1) ;
	}

	// Obtém nome dos arquivos de entrada e saída
	strcpy(nome_arq_entrada, argv[1]) ;
	strcpy(nome_arq_saida, argv[2]) ;

	// Abre arquivo texto de entrada
	arq_entrada = fopen(nome_arq_entrada, "rt") ;

	if (arq_entrada == NULL)
	{
		printf("\nArquivo texto de entrada não encontrado\n") ;
		exit(1) ;
	}

	// Cria arquivo binário de saída
	arq_saida = fopen(nome_arq_saida, "wb") ;

	if (arq_saida == NULL)
	{
		printf("\nArquivo binário de saída não pode ser criado\n") ;
		exit(1) ;
	}

	// Lê do arquivo texto de entrada com:
	// fscanf(arq_entrada, ...) ;
	// ...

	// Escreve no arquivo binário de saída com:
	// fwrite(..., arq_saida) ;
	// ...

	// Fecha arquivo texto de entrada
	fclose(arq_entrada) ;
	// Fecha arquivo binário de saída
	fclose(arq_saida) ;

	return 0 ;
}
// ----------------------------------------------------------------------------
