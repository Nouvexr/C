/* Encontrar o maior de tres inteiros */
#include <stdio.h>
int maximum(int, int, int); /* protótipo da funcao */
main() {
int a, b, c;
printf("Digite tres sequencias de numeros e o programa lhe dirá qual foi o maior valor!\n");
printf("Primeiro numero: ");
scanf("%d", &a);
printf("Segundo numero: ");
scanf("%d", &b);
printf("Terceiro numero: ");
scanf("%d", &c);
printf("O maior valor digitado foi: %d\n", maximum(a, b, c));
return 0; 
}
/* Definição da funcao maximum */
int maximum(int x, int y, int z)
{
int max = x;
if (y > max)
max = y;
if (z > max)
max = z;
return max;
}
