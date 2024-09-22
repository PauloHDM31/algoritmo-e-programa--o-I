#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portguese");
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
        printf("\nEntre os números 1000 e 2000 há %d valores que divididos por 7 dão resto 3.", contador);
}