#include <stdio.h>
#include <locale.h>
/*
*Maria Das Dores De Paula Sousa
*Paulo Henrique Dantas Monte
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
    int milhar;
    int contador=0;
        for(milhar = 1000; milhar <=2000; milhar++){
            if(milhar%7==3){
                printf("%d\t",milhar);
            }
        }

        for(milhar = 1000; milhar <=2000; milhar++){
            if(milhar%7==3){
                contador = contador+1;
            }
        }
        printf("\nEntre os n�meros 1000 e 2000 h� %d valores que divididos por 7 d�o resto 3.", contador);
}