#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int valor(int n){
    if(n>0){
        return true;
    } else{
        if (n < 0){
            return false;
        }       
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero;
    _Bool resultado;

        printf("Digite um n�mero: \n");
            scanf("%d", &numero);
        resultado = valor(numero);

        if (resultado == true) {
           printf("%d � um n�mero POSITIVO", numero);
        }else{
            printf("%d � um n�mero NEGATIVO", numero);
        }
        
}