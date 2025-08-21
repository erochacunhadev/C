// #include <stdio.h>

// int main(){
//     float *q, b; q é um ponteiro que aponta para um endereço aleatório

//     b = 3.14;
//     *q = *q + 1; tenta acessar e modificar memória não alocada
//     printf("*q = %f\n", *q);

//     return 0;
// }

#include <stdio.h>

int main() {
    float *q, b;

    b = 3.14;
    q = &b; //q apontando para b 
    *q = *q + 1; //modifica b através de q

    printf("*q = %f\n", *q);
    printf("b = %f\n", b);

    return 0;
}