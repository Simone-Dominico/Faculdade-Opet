#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int  valor = 0,contador = 0,soma = 0;
        
        printf("Digite o valor para calcular a soma dos pares ate o valor digitado\n");
        scanf("%d",&valor);

    valor = valor * 2;
    for (int i = 0; i <= valor; i++)
    {
       if((contador % 2) == 0)
        {
            printf("calculando...\n");
            soma = soma + contador;
            contador++;
        }else
        {
            contador++;
        }
    }

    printf("O valor total da soma e %d\n",soma);
    
}
