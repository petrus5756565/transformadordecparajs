//inclui a bibiblioteca stdio.h que permite usar entrada e saida de infos(printf e escanf)
#include <stdio.h>
//inclui a bibiblioteca stdlib.h que permite funcoes utilitarias(system))
#include <stdlib.h>
//Declarar a funçao principal, opnde o programa começa a execução
int main(){

    //declarar variaveis
    float numero1, numero2, respostaSoma;

    printf("Digite o primeiro numero: ");
    scanf("%f" , &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f" , &numero2);
    printf("A soma dos numeros é: ");

    respostaSoma=numero1+numero2;
    printf("%.2f\n",respostaSoma);
    //pausar o sistema.
     system("pause");

   return 0;




}

