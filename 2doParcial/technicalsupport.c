#include "technicalsupport.h"
eTechnicalSupport* technicalSupport_new(void)
{
    eTechnicalSupport* miSoporteTecnico;
    miSoporteTecnico=(void*)malloc(sizeof(eTechnicalSupport));
    if(miSoporteTecnico!=NULL)
    {
        technicalSupport_setId(miSoporteTecnico,0);
        technicalSupport_setFecha(miSoporteTecnico,"");
        technicalSupport_setNumCliente(miSoporteTecnico,0);
        technicalSupport_setIdProblema(miSoporteTecnico,0);
        technicalSupport_setSolucionado(miSoporteTecnico,0);
    }
    return miSoporteTecnico;
}
eTechnicalSupport* technicalSupport_newParametros(char* idStr,char* fechaStr,char* numClienteStr,char* idProblemaStr,char* solucionadoStr)
{
    eTechnicalSupport* miSoporteTecnico=NULL;
    miSoporteTecnico=technicalSupport_new();
    if(miSoporteTecnico!=NULL)
    {
        technicalSupport_setId(miSoporteTecnico,atoi(idStr));
        technicalSupport_setFecha(miSoporteTecnico,fechaStr);
        technicalSupport_setNumCliente(miSoporteTecnico,atoi(numClienteStr));
        technicalSupport_setIdProblema(miSoporteTecnico,atoi(idProblemaStr));
        technicalSupport_setSolucionado(miSoporteTecnico,atoi(solucionadoStr));
    }

    return miSoporteTecnico;
}
int technicalSupport_getId(eTechnicalSupport* this,int* id)
{
    int retorno=0;
    if(this!=NULL && id!=NULL)
    {
        *id=this->id_llamada;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_getFecha(eTechnicalSupport* this,char* fecha)
{
    int retorno=0;
    if(this!=NULL && fecha!=NULL)
    {
        strcpy(fecha,this->fecha);
        retorno=1;
    }
    return retorno;
}
int technicalSupport_getNumCliente(eTechnicalSupport* this,int* numCliente)
{
    int retorno=0;
    if(this!=NULL && numCliente!=NULL)
    {
        *numCliente=this->num_cliente;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_getIdProblema(eTechnicalSupport* this,int* idProblema)
{
    int retorno=0;
    if(this!=NULL && idProblema!=NULL)
    {
        *idProblema=this->idProblema;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_getSolucionado(eTechnicalSupport* this,int* solucionado)
{
    int retorno=0;
    if(this!=NULL && solucionado!=NULL)
    {
        *solucionado=this->solucionado;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_setId(eTechnicalSupport* this,int id)
{
    int retorno=0;
    if(this!=NULL && id>=0)
    {
        this->id_llamada=id;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_setFecha(eTechnicalSupport* this,char* fecha)
{
    int retorno=0;
    if(this!=NULL && fecha!=NULL)
    {
        strcpy(this->fecha,fecha);
        retorno=1;
    }
    return retorno;
}
int technicalSupport_setNumCliente(eTechnicalSupport* this,int numCliente)
{
    int retorno=0;
    if(this!=NULL && numCliente>=0)
    {
        this->num_cliente=numCliente;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_setIdProblema(eTechnicalSupport* this,int idProblema)
{
    int retorno=0;
    if(this!=NULL && idProblema>=0)
    {
        this->idProblema=idProblema;
        retorno=1;
    }
    return retorno;
}
int technicalSupport_setSolucionado(eTechnicalSupport* this,int solucionado)
{
    int retorno=0;
    if(this!=NULL && solucionado>=0)
    {
        this->solucionado=solucionado;
        retorno=1;
    }
    return retorno;
}
void technicalSupport_ShowOneEmployee(eTechnicalSupport* this)
{
    int id;
    char fecha[20];
    int numCliente;
    int idProblema;
    int solucionado;
    char problema[50];
    char solucionado1[5]="NO";
    if(this!=NULL)
    {
        technicalSupport_getId(this,&id);
        technicalSupport_getFecha(this,fecha);
        technicalSupport_getNumCliente(this,&numCliente);
        technicalSupport_getIdProblema(this,&idProblema);
        technicalSupport_getSolucionado(this,&solucionado);
        switch(solucionado)
        {
        case 0:
            strcpy(solucionado1,"NO");
            break;
        case 1:
            strcpy(solucionado1,"SI");
            break;
        }
        switch(idProblema)
        {
        case 1:
            strcpy(problema,"No enciende PC");
            break;
        case 2:
            strcpy(problema,"No funciona mouse");
            break;
        case 3:
            strcpy(problema,"No funciona teclado");
            break;
        case 4:
            strcpy(problema,"No hay internet");
            break;
        case 5:
            strcpy(problema,"No funciona teléfono");
            break;
        }
        printf("%5d%15s%10d%25s%10s\n",id,fecha,numCliente,problema,solucionado1);
    }

}

/*

1
No enciende PC
2
No funciona mouse
3
No funciona teclado
4
No hay internet
5
No funciona teléfono*/
