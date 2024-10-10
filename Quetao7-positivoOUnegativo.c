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

        printf("Digite um número: \n");
            scanf("%d", &numero);
        resultado = valor(numero);

        if (resultado == true) {
           printf("%d é um número POSITIVO", numero);
        }else{
            printf("%d é um número NEGATIVO", numero);
        }
        
}