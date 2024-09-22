#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
     int num;

        printf("Digite um número: ");
            scanf("%d", &num);
        
        if (num % 6==0)
        {
           printf("%d é divisível por 6!",num);
        }else{
            printf("%d não é divisível por 6!",num);
        }
    return 0;  
}