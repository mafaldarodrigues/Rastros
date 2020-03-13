#include "logica.h"

int jogar(ESTADO *estado, COORDENADA c){
    int validar = jogada_valida(estado, c);
    if(validar == 1) {
        estado->tab[c.linha][c.coluna] = PECA;
        estado->tab[estado->ultima_jogada.linha][estado->ultima_jogada.coluna] = RASTRO;
        estado->ultima_jogada = c;

        return 1;
    }
    return 0;
}
int jogada_valida(ESTADO *estado, COORDENADA c){
    int x1 = estado->ultima_jogada.coluna, y1 = estado->ultima_jogada.linha;
    int x2 = c.coluna, y2 = c.linha;

    // Validar casas em volta da PECA
    if(((x1 == x2) && (((abs(y1-y2))==1))) // Cima e baixo
       || (((abs(x2-x1))==1) && ((abs(y2-y1))==1 || y2 == y1 ))) // Esquerda e Direita
    {
        CASA casa_coord = obter_estado_casa(estado, coord);
        if(casa_coord == VAZIO) return 1;
    }
    return 0;
}