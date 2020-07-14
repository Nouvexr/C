/* Usando a instrução continue em uma estrutura for */
#include <stdio.h>
main( ) {
int x;
for (x = 1; x <= 10; x++) {
if (x == 5)
continue; /* ignora o codigo restante se x == 5 */
printf("%d ", x);
}
printf("Continue usado para ignorar a impressao do valor 5\n");
return 0;
}
