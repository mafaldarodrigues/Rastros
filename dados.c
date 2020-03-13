#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"
#define BUF_SIZE 1024


// Função que inicializa um estado vazio
ESTADO *inicializar_estado(){
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO))
    e -> jogador_atual = 1;
    e -> num_jogadas = 0;
    e -> ultima_jogada.linha = 3;
    e -> ultima_jogada.coluna = 4;

    for(int l = 0; l < 8; l++){
        for(int c = 0; c < 8; c++){
            e -> tab[l][c] = VAZIO;
        }
    }
    e -> tab[3][4] = BRANCA;
    return e;
}


// Função que permite obter o número do jogador que vai jogar
int obter_jogador_atual(ESTADO *estado){
    int j;
    j = estado -> jogador_atual;
    return j;
}

//Função que permite obter o número de jogadas efetuadas durante o jogo
int obter_numero_de_jogadas(ESTADO *estado){
    int j;
    j = estado -> num_jogadas;
    return j;
}

//Função que permite obter o estado da casa atual
int obter_estado_casa(ESTADO *e, COORDENADA c){
    int c, l, t;
    c = c.coluna;
    l = c.linha;
    t = e -> tab[l][c];
    return t;
}
