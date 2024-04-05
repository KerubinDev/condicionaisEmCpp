#include <iostream>
int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num == 0){
        printf("O número é zero.\n");
    }
    else
    {
        printf("O número não é igual a zero.\n");
    }
    return 0;
}