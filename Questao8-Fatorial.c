#include <stdio.h>
#include <locale.h>

int fatorial(int n){
    int fator = 1;
    int i;

        for(i = n; i > 1; i--){
            fator = fator*i;
        }
    return fator;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

        printf("Digite um número: ");
            scanf("%d",&num);

        if (num >=0){
           printf("O fatorial de %d é igual a %d", num, fatorial(num));
        } else{
            printf("Não é possível calcular o fatorial de número negativo!");
        }
        
}