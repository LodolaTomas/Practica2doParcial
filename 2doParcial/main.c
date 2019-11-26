#include <stdio.h>
#include <stdlib.h>
#include "Controller.h"
int main()
{
    LinkedList* listaSoporte = ll_newLinkedList();
    int respuesta;

     respuesta=controller_loadFromText("RegistroLlamada.csv",listaSoporte);
    switch(respuesta)
                {
                case 0:
                    printf("Cargado exitosamente en Texto\n");
                    break;
                case 1:
                    borrar();
                    printf("pFile no pudo ser abierto o ListaEmpleado es NULL\n");
                    break;
                }
                controller_ListTechnicalSupport(listaSoporte);
    return 0;
}
