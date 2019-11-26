//D_Llamada, Fecha, Numero_Cliente, ID_Problema, Solucionado
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{

    int id_llamada;
    char fecha[20];
    int num_cliente;
    int idProblema;
    int solucionado;

}eTechnicalSupport;

eTechnicalSupport* technicalSupport_new(void);
eTechnicalSupport* technicalSupport_newParametros(char* idStr,char* fechaStr,char* numClienteStr,char* idProblemaStr,char* solucionadoStr);
int technicalSupport_getId(eTechnicalSupport* this,int* id);
int technicalSupport_getFecha(eTechnicalSupport* this,char* fecha);
int technicalSupport_getNumCliente(eTechnicalSupport* this,int* numCliente);
int technicalSupport_getIdProblema(eTechnicalSupport* this,int* idProblema);
int technicalSupport_getSolucionado(eTechnicalSupport* this,int* solucionado);
int technicalSupport_setId(eTechnicalSupport* this,int id);
int technicalSupport_setFecha(eTechnicalSupport* this,char* fecha);
int technicalSupport_setNumCliente(eTechnicalSupport* this,int numCliente);
int technicalSupport_setIdProblema(eTechnicalSupport* this,int idProblema);
int technicalSupport_setSolucionado(eTechnicalSupport* this,int solucionado);
void technicalSupport_ShowOneEmployee(eTechnicalSupport* this);
