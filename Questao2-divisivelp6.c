#include <stdio.h>
#include <locale.h>
/*
*Maria Das Dores De Paula Sousa
*Paulo Henrique Dantas Monte
*/
int main(){
    setlocale(LC_ALL, "Portuguese");
     int num;

        printf("Digite um n√∫mero: ");
            scanf("%d", &num);
        
        if (num % 6==0){
           printf("%d È divis√Ìvel por 6!",num);
        }else{
            printf("%d n„o È divisÌvel por 6!",num);
        }
    return 0;  
}