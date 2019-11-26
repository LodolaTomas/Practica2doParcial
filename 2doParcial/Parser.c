#include "Parser.h"

int parser_TechnicalSupportFromText(FILE* pFile, LinkedList* pArrayList)
{
    int state=1;
    int counter=0;
    eTechnicalSupport* this=NULL;
    char idStr[20];
    char fechaStr[20];
    char numClienteStr[20];
    char idProblemaStr[20];
    char solucionadoStr[5];

    if(pFile!=NULL && pArrayList!=NULL)//Verifico que lo ingresado sea
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",idStr,fechaStr,numClienteStr,idProblemaStr,solucionadoStr);//Falsa lectura
        //leo el primer renglon
        while(!feof(pFile))//leo el archivo hasta el final
        {
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",idStr,fechaStr,numClienteStr,idProblemaStr,solucionadoStr);//leo datos del archivo
            this=technicalSupport_newParametros(idStr,fechaStr,numClienteStr,idProblemaStr,solucionadoStr);//agrego los parametros en mi aux
            ll_add(pArrayList,this);//los agrego al LinkedList
            counter++;
        }
        state=0;//Cambio el estado
        fclose(pFile);
        printf("Fueron cargados : %d\n",counter);//idea de passu
    }
    return state;
}

int parser_TechnicalSupportFromBinary(FILE* pFile, LinkedList* pArrayList)
{
    int state=1;//1 si pArrayListEmployee o pFIle son NULL
    eTechnicalSupport* this;
    int counter=0;
    if(pFile!=NULL && pArrayList!=NULL)//Verifico que no sea NULL
    {
        while(!feof(pFile))//Recorro hasta el final del archivo
        {
            this=technicalSupport_new();//creo un empleadoAux
            if(this!=NULL)
            {
                fread(this,sizeof(eTechnicalSupport),1,pFile);//guardo en el aux lo de tipo FILE
                if(feof(pFile))
                {
                    break;
                }
                ll_add(pArrayList,this);//lo agrego la linkedList
                counter++;
            }
        }
        state=0;//cambio el estado
        fclose(pFile);//cierro el archivo
        printf("Fueron cargados : %d\n",counter);//idea de passu
    }
    return state;// -1 si pFile o pArrayLinkedList es NULL
    // 0 si todo salio correctamente
}
