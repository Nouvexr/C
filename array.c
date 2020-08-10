/* inicializando um array */
#include <stdio.h>

/*Inicializando com zero os elementos de um array*/
main() {
int n[10], i;
for (i = 0; i <= 9; i++) /* inicializa o array */
n[i] = 0;
printf("%s%13s\n", "Elemento", "Valor"); for(i =0;i<=9;i++) /*imprime o array */
printf ("%7d%13d\n", i, n[i]);

/*Inicializando os elementos de um array com uma declaração.*/
int y, m[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
printf("%s%13s\n", "Elemento", "Valor");
for(y = 0; y <= 9; y++)
printf("%7d%13d\n", y, m[y]);

return 0;
}
