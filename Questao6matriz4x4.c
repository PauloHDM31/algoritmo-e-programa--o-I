#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int matriz4[4][4];
    int c = 0;
    int i;
    int j;

        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                printf("Digite um valor:  ");
                    scanf("%d", &matriz4[i][j]);
            }
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(matriz4[i][j] > 7){
                     printf("%d\t",matriz4[i][j]);
                }
            }
        }
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                if(matriz4[i][j] > 7){
                     c++;
                }
            }
        }
        printf("\nForam digitados %d valores maiores que 7", c);

}