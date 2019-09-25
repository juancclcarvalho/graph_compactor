// ----------------------------------------------------------------------------
// Programa gera_visualizacao.c
//
// Lê um arquivo binário de entrada com matriz de adjacência compacta e
// gera um arquivo texto de saída com formato para visualização do grafo
//
// Para compilar: gcc gera_visualizacao.c -o gera_visualizacao -Wall
// Para executar: ./gera_visualizacao <nome arquivo entrada> <nome arquivo saída>
// Para visualizar: 
//		Ir em https://edotor.net/
//		Copiar arquivo de saída gerado para aba do lado esquerdo
//		Escolher Engine = neato ou circo ou dot
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

	FILE *arq_entrada,	// Arquivo binário de entrada
		  *arq_saida ; 	// Arquivo texto de saída

	if (argc != 3)
	{
		printf("\nErro nos argumentos da linha de comando\n") ;
		exit(1) ;
	}

	// Obtém nome dos arquivos de entrada e saída
	strcpy(nome_arq_entrada, argv[1]) ;
	strcpy(nome_arq_saida, argv[2]) ;

	// Abre arquivo binário de entrada
	arq_entrada = fopen(nome_arq_entrada, "rb") ;

	if (arq_entrada == NULL)
	{
		printf("\nArquivo binário de entrada não encontrado\n") ;
		exit(1) ;
	}

	// Cria arquivo texto de saída
	arq_saida = fopen(nome_arq_saida, "wt") ;

	if (arq_saida == NULL)
	{
		printf("\nArquivo texto de saída não pode ser criado\n") ;
		exit(1) ;
	}

	// Lê do arquivo binário de entrada com:
	// fread(..., arq_entrada) ;
	// ...

	// Escreve no arquivo texto de saída com:
	// fprinf(arq_saida, ...) ;
	// ...

	// Fecha arquivo binário de entrada
	fclose(arq_entrada) ;
	// Fecha arquivo texto de saída
	fclose(arq_saida) ;

	return 0 ;
}
// ----------------------------------------------------------------------------
