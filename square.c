/* Funcao square definida pelo programador */
#include <stdio.h>
int square(int); /* protótipo da funcao */
main() {
int x;
for (x = 1; x <= 10; x++)
printf("%d \n", square(x));

return 0;
}
/* Definição da funcao */
int square(int y)
{
return y * y;
}
