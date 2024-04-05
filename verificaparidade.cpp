#include <iostream>

int main(){
int num;

printf("Difite um número: ");
scanf("%d", &num);

if (num % 2 == 0) {
    printf("O número digitado é par.\n");
}

return 0;
}