#include<stdio.h>
#include<ctype.h>
#include<string.h>
//Amanda Gomes
int main()
{
   char str[100];
    int i,j;
    printf("Escrava:");
    fgets(str,100,stdin);
    for(i=0;i<100;i++)
    {
    if(str[i]=='r' && str[i+1]==' ')
    continue;
    }
    else if(str[i] == 'r' && str[i+1] == 'r'){
    str[i] ='l';
    for(j=i+1;j <100;j++){
    str[j] = str[j+1];
   
    }
    }
    else if(str[i]=='r'){
    str[i]='l';
    }
    printf("\nFicara %s",str);
}