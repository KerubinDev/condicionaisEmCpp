#include <iostream>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("Você é maior de idade.\n");
    }
    else
    {
        printf("Você não pode continuar você é menor de idade >:( \n");
    }
    return 0;
}