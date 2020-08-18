/* Passando arrays e elementos isolados de arrays para funções */
#include <stdio.h>
#define TAMANHO 5

void modificaArray(int [], int);
void modificaElemento(int);

main() {
int i;
int a[TAMANHO] = {0, 1, 2, 3, 4};
printf("Efeitos de passar o array inteiro por meio "
"de chamada por referencia: \n\n OS valores do "
"array original sao:\n");

for (i = 0; i <= TAMANHO - 1; i++)
printf("%3d", a[i]);

printf("\n");

modificaArray(a, TAMANHO); /* array a passado por meio de chamada por referencia*/

printf("Os valores do array modificado sao:\n");
for (i = 0; i <= TAMANHO - 1; i++)
printf("%3d", a[i]);

printf("\n\nEfeitos de passar elementos do array por meio "
"de uma chamada por valor:\n\nO valor de a[3] e %d\n", a[3]);

modificaElemento(a[3]);
printf("O valor de a[3] e %d\n", a[3]);
return 0;
}

void modificaArray(int b[], int tamanho){
int j;
for (j = 0; j <= tamanho - 1; j++)
b[j] *= 2;

}

void modificaElemento(int e){

printf("Valor em modificaElemento e %d\n", e *= 2);

}
