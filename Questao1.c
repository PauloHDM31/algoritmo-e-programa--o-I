#include <stdio.h>
#include <locale.h>

    int main(){ 
        setlocale(LC_ALL,"Portuguese");
        int numero;
        printf("Digite um número que seja maior que 17: ");
            scanf("%d", &numero);

            if (numero > 17) {
                printf("%d é maior que 17", numero);
            } 
            else{      
                 printf("%d não é maior que 17", numero);
            }
            return 0;
    }