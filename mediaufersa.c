#include <stdio.h>
#include <locale.h> 

    int main(){
        setlocale(LC_ALL,"Portuguese");
        float nota1, nota2, nota3, media, recup;
        printf("Digite o valor da nota da sua 1� avalia��o : ");
            scanf("%f", &nota1);
        printf("Digite o valor danota da sua 2� avalia��o: ");
            scanf("%f", &nota2);
        printf("Digite o valor danota da sua 3� avalia��o: ");
            scanf("%f", &nota3);
            media = (nota1 + nota2 + nota3) /3;
        printf("Sua m�dia neste semestre foi %.1f\n ", media);
 if (media >= 7)
 {
    printf("Parab�ns! Voc� foi aprovado");
 } 
 else 
    if (media < 7)
    {
        printf("Voc� est� na recupera��o! ");
        printf("Digite o valor da  nota da sua recupera��o: ");
        scanf("%f", &recup);
        media = (media + recup) / 2;
            printf("Sua m�dia ap�s a recupera��o � %.1f\n ", media);
            if (media >= 5)
            {
               printf("Parab�ns! Voc� passou na recupera��o ");
            } else
                printf("REPROVADO! Estude mais na pr�xima vez! ");
    }     
    return 0;   
}