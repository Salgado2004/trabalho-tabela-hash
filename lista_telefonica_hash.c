//Estrutura programa Tabela Hash - Professor Lucas.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define LEN 10

typedef struct data{
    char nome[51];
    char numero[11];
} contato;
    
contato *hashTable[LEN];

void inicializarTabela() {
    for (int i = 0; i < LEN; i++) {
        hashTable[i] = NULL;
    }
}

unsigned int hash(char *nome){
    int soma = 0;
    double somatorio = 0;
    int conta = 0;
    int media;
    double desvPad;
    for (int i=0; i < strlen(nome); i++){
        conta++;
        soma += nome[i];
        somatorio += pow(nome[i], 2);
        media = soma/conta;
        desvPad = sqrt((somatorio - (2*media*soma) + (pow(media, 2)*conta))/conta-1);
    }
    int pos = ((int) desvPad+media) % LEN;
    return pos;
}

void adicionarContato() {
    char nome[50];
    char numero[10];
    printf("Nome do contato (sem espacos): ");
    scanf("%s", nome);
    int index = hash(nome);
    printf("Numero do contato: ");
    scanf("%s", numero);
    contato *novoContato = (contato *) malloc(sizeof(contato));
    strcpy(novoContato->nome, nome);
    strcpy(novoContato->numero, numero);
    if (hashTable[index] == NULL) {
        hashTable[index] = novoContato;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("Colisao! Implemente tratamento de colisao.\n");
    }
    return;
}

void buscarContato() {
    char nome[50];
    printf("Nome do contato: ");
    scanf("%s", nome);
    
    clock_t start, end;
    start = clock();
    
    int index = hash(nome);
    if (hashTable[index] != NULL) {
        end = clock();
        double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Contato encontrado: %s - %s ", hashTable[index]->nome, hashTable[index]->numero);
        printf("(Tempo de busca: %.2f ms)\n", cpu_time_used);
    } else {
        printf("Contato nao encontrado.\n");
    }
    return;
}

void removerContato() {
    printf("Funcao para remover contato.\n");
}

void exibirContatos() {
    for (int i = 0; i < LEN; i++) {
        if (hashTable[i] != NULL) {
            printf("Posicao %d: %s - %s\n", i, hashTable[i]->nome, hashTable[i]->numero);
        }
    }
}

int main() {
    int opcao;
    inicializarTabela();

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Adicionar contato\n");
        printf("2 - Buscar contato por nome\n");
        printf("3 - Remover contato\n");
        printf("4 - Exibir todos os contatos\n");
        printf("0 - Sair\n");
        printf("Digite uma opcao: ");
        
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato();
                break;
            case 2:
                buscarContato();
                break;
            case 3:
                removerContato();
                break;
            case 4:
                exibirContatos();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
