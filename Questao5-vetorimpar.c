#include <stdio.h>
#include <locale.h>
/*
*Maria Das Dores De Paula Sousa
*Paulo Henrique Dantas Monte
*/
int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetorimpar[10];
    int cont = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
            scanf("%d", &vetorimpar[i]);
    }
    for(int i = 0; i < 10; i++){
        if(vetorimpar[i]%2==1){
            printf("%d\t",vetorimpar[i]);
        }
    }
    for(int i = 0; i < 10; i++){
        if(vetorimpar[i]%2==1){
            cont = cont+1;
        }
    }
        printf("\nEste vetor apresenta %d valores ímpares.\n", cont);
}