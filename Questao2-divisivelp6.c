#include <stdio.h>
#include <locale.h>
/*
*Maria Das Dores De Paula Sousa
*Paulo Henrique Dantas Monte
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
     int num;

        printf("Digite um número: ");
            scanf("%d", &num);
        
        if (num % 6==0){
           printf("%d � divis��vel por 6!",num);
        }else{
            printf("%d n�o � divis�vel por 6!",num);
        }
    return 0;  
}