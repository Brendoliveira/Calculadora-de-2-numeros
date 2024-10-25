//Calculadora
#include <stdio.h>

int main()
{
    double num1, num2;
    double soma, subt, mult, divi;
    int opera;
    

    printf("Digite em numero qual operação deseja pra 2 numeros \n 1-Soma\n 2-Subtração\n 3-Multiplicaçao\n 4-Divisão \n");
    scanf("%d", &opera);
    
    if(opera == 1){
        printf("Digite seu numero: ");
        scanf("%lf", &num1);
        printf("Digite seu numero: ");
        scanf("%lf", &num2);
        soma = num1 + num2;
        printf("A soma é: %.2lf", soma);
        
    }else if(opera == 2){
        printf("Digite seu numero: ");
        scanf("%lf", &num1);
        printf("Digite seu numero: ");
        scanf("%lf", &num2);
        subt = num1 - num2;
        printf("A Subtração é: %.2lf", subt);
        
    }else if(opera == 3){
        printf("Digite seu numero: ");
        scanf("%lf", &num1);
        printf("Digite seu numero: ");
        scanf("%lf", &num2);
        mult = num1 * num2;
        printf("A Multiplicação é: %.2lf", mult);
        
    }else if(opera == 4){
        printf("Digite seu numero: ");
        scanf("%lf", &num1);
        printf("Digite seu numero: ");
        scanf("%lf", &num2);
        divi = num1 / num2;
        printf("A Divisão é: %.2lf", divi);
    } else{
        printf("Numero invalido!!!");
    }
    return 0;
}
