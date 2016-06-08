#include "../include/interpretador.hpp"

int iadd(uint8_t* frameInit){
    printf("Entrou na funcao\n");
    return frameInit[0]+frameInit[1];
}


//fun��o initInterpreter(void)
//retorna um vetor de ponteiros a fun��o (ponteiro de ponteiro de fun��o)
//as fun��es q comp�em o vetor sao do tipo: int func(uint8_t*)
int (**initInterpreter(void))(uint8_t*){
    //inicializa o vetor de ponteiros pra fun��o.
    //so n sei como uma fun��o recebe/retorna ponteiro pra fun��o D:
    int (**pt)(uint8_t*);//declara o vetor de ponteiro de fun��o
    pt = (int(**)(uint8_t*)) calloc(sizeof(int(*)(uint8_t*)), numOpcodes );//aloca o vetor
    pt[0] = &iadd;//associa a fun��o a posi��o
    printf("Interpretador inicializado.\n");
    return pt;
}
