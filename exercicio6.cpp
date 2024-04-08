#include <iostream>

int main(){
    int num;

    printf("Escolha um número de 1 a 7: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("Domingo.\n");
    } else if (num == 2) {
        printf("Segunda-feira.\n");
    } else if (num == 3) {
        printf("Terça-feira.\n");
    } else if (num == 4) {
        printf("Quarta-feira.\n");
    } else if (num == 5) {
        printf("Quinta-feira.\n");
    } else if (num == 6) {
        printf("Sexta-feira.\n");
    } else if (num == 7) {
        printf("Sabado.\n");
    }

    return 0;
}