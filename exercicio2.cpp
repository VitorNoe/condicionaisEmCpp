#include <iostream>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
 
    if (num < 1) {
        printf("O número digitado é zero.\n");
    }

    return 0;
}