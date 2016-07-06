#ifndef OPERATIONMAP
#define OPERATIONMAP

#include <map>
#include <string>

/** \class OperationMap
* \brief traduz o opcode para string
* atrav�s da fun��o getOperation
*
*/
namespace OperationMap{
    std::map<uint8_t, std::string> create_map();
    std::string getOperation(uint8_t opcode);
}

#endif //op_mapa
