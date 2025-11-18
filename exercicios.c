#include <stdio.h>

int main() {
    //variaveis
    int num;

    //entrada de dados//
    printf("Digite o NUmero Pra saber se ele e divisivel por 5: \n");
    scanf("%d", &num);

    if (num % 5 == 0)
        printf("e %d e divisivel por 5\n", num);

    else
        printf("e não boy");


    return (0);

}