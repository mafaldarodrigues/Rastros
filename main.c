#include <stdio.h>
#include "data.h"
#include "dados.h"
#include "interface.h"
#include "logica.h"
#define BUF_SIZE 1024

int main() {
    ESTADO *e = inicializar_estado();
    interpretador(e);
    return 0
}
