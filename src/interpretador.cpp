#include "../include/interpretador.hpp"

void iadd(jStackFrame &jStack){
    uint8_t lhs, rhs;
    printf("Entrou na funcao\n");
    lhs = jStack.opStack.back();
    jStack.opStack.pop_back();
    rhs = jStack.opStack.back();
    jStack.opStack.pop_back();
    printf("lhs: %d rhs: %d\n", lhs, rhs);
    jStack.opStack.push_back(lhs + rhs);

}

/*fun��o initInterpreter(void)
* retorna um vetor de ponteiros a fun��o (ponteiro de ponteiro de fun��o)
* as fun��es q comp�em o vetor sao do tipo: int func(uint8_t*)*/
std::vector<instructionFunction> init_interpreter (){
    //inicializa o vetor de ponteiros pra fun��o.
    //so n sei como uma fun��o recebe/retorna ponteiro pra fun��o D:
    //int (*pt)(op_stack**);//declara o vetor de ponteiro de fun��o
    std::vector<instructionFunction> pt;


    //pt = (int(**)(op_stack**)) calloc(sizeof(int(*)(**op_stack)), numOpcodes );//aloca o vetor
    //pt[0] = &iadd;//associa a fun��o a posi��o


    pt.push_back(&iadd);
    printf("Interpretador inicializado.\n");
    return pt;
}
