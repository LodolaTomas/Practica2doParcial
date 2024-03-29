#include <stdio.h>
#include <stdlib.h>
#include "inputs.h"
#include "Parser.h"

int controller_loadFromText(char* path, LinkedList* pArrayList);
int controller_loadFromBinary(char* path, LinkedList* pArrayList);
//int controller_addEmployee(LinkedList* pArrayListEmployee,int *id);
//int controller_editEmployee(LinkedList* pArrayListEmployee);
//int controller_removeEmployee(LinkedList* pArrayListEmployee,LinkedList* pArrayRemoveEmployee);
int controller_ListTechnicalSupport(LinkedList* pArrayList);
//int controller_sortEmployee(LinkedList* pArrayListEmployee);
int controller_saveAsText(char* path, LinkedList* pArrayList);
int controller_saveAsBinary(char* path, LinkedList* pArrayList);

/**
 * \brief Busca y obtiene el id mas grande
 * \param pArrayListEmployee Lista de empleados
 * \param int* id donde se guarda el id mas grande obtenido
 * \return -
 *
 */
void controller_GetLastId(LinkedList* pArrayListEmployee,int* id);

/**
 * \brief Busca un empleado y obtengo su posicion
 * \param pArrayListEmployee Lista de empleados
 * \return [-1] si el empleado no fue encontrado
                [i] la posicion del empleado
 *
 */
int controller_FindId(LinkedList* pArrayListEmployee);
