#include "data.h"

//Funçao que deve ser completada e colocada na camada de interface
void mostrar_tabuleiro(ESTADO *e){
   int i,j;
    for (i=0;i<8;i++){
        printf (" \n");
        for (j=0; j<8; j++){
            if (i==0 && j==7){
                printf ("2");
              }else {
                if (i==3 && j==4){
                    printf ("*");
                  }else{
                    if (i==7 && j==0){
                     printf ("1");
                    }else{
                      printf (".");
                    } 
                  }
                }
              }
        }
    printf (" \n");
    return 0;
}

//Funçao que deve ser completada e colocada na camada de interface 
int interpretador(ESTADO *e){
    char linha [BUF_SIZE];
    char col[2], lin[2];
    if (fgets(linha, BUF_SIZE, stdin) == NULL)
    return 0;
    if (strlen (linha) == 3 && sscanf (linha, "%[a-h]%[1-8]", col, lin)== 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(e);
    }
    return 1;
}
