#include <iostream>
int main(){
    int Kerubin;

    printf("Para as perguntas 1 para sim e 0 para não - ");

    printf("Kerubin existe? ");
    scanf("%d", &Kerubin);

    if (Kerubin == 1){
        printf("Kerubin ama Yuka.\n");
    }
    else
    {
        printf("Kerubin começa a existir para amar Yuka.\n");
    }
    return 0;
}