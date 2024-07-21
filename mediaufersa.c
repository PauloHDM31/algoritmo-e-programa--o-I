#include <stdio.h>
#include <locale.h> 

    int main(){
        setlocale(LC_ALL,"Portuguese");
        float nota1, nota2, nota3, media, recup;
        printf("Digite o valor da nota da sua 1° avaliação : ");
            scanf("%f", &nota1);
        printf("Digite o valor danota da sua 2° avaliação: ");
            scanf("%f", &nota2);
        printf("Digite o valor danota da sua 3° avaliação: ");
            scanf("%f", &nota3);
            media = (nota1 + nota2 + nota3) /3;
        printf("Sua média neste semestre foi %.1f\n ", media);
 if (media >= 7)
 {
    printf("Parabéns! Você foi aprovado");
 } 
 else 
    if (media < 7)
    {
        printf("Você está na recuperação! ");
        printf("Digite o valor da  nota da sua recuperação: ");
        scanf("%f", &recup);
        media = (media + recup) / 2;
            printf("Sua média após a recuperação é %.1f\n ", media);
            if (media >= 5)
            {
               printf("Parabéns! Você passou na recuperação ");
            } else
                printf("REPROVADO! Estude mais na próxima vez! ");
    }     
    return 0;   
}