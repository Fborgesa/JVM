#include "../include/interpretador.hpp"

std::vector<instructionFunction> init_interpreter (){
    //inicializa o vetor de ponteiros pra fun��o.
    //so n sei como uma fun��o recebe/retorna ponteiro pra fun��o D:
    //int (*pt)(op_stack**);//declara o vetor de ponteiro de fun��o
    //pt = (int(**)(op_stack**)) calloc(sizeof(int(*)(**op_stack)), numOpcodes );//aloca o vetor
    //pt[0] = &iadd;//associa a fun��o a posi��o
    std::vector<instructionFunction> pt;

    //cada instru��o dever� ser colocada na posi��o do vetor equivalente ao seu byte de opcode
    pt.push_back(&iadd);
    printf("Interpretador inicializado.\n");
    return pt;
}
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

//int iadd(uint8_t* frameInit){
//    printf("Entrou na funcao\n");
//    return frameInit[0]+frameInit[1];
//}

//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
//
//int ladd(uint8_t* frameInit){
//    return 0;
//}
