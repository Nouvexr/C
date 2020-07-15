/* Encontrar o maior de tres inteiros */
#include <stdio.h>
int maximum(int, int, int); /* protótipo da funcao */
main() {
int a, b, c;
printf("Entre com tres inteiros: ");
scanf("%d%d%d", &a, &b, &c);
printf("O maior e: %d\n", maximum(a, b, c));
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
