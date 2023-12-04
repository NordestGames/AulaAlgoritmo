// #include <stdio.h>

// int main(){
// int x, y;
// y = 2;
// int * p1, * p2;
// p1 = &y;
// x = 1;
// p2 = p1;
// (*p1)++;
// printf("%d %d", x, y);

// return 0;
// }

// #include <stdio.h>

// int inc(int num){
//    return (++num);
// }

// int main(void){
//     int numero = 5;
//     numero = inc(numero);
//     printf("%d", numero);

// return 0;
// }

#include <stdio.h>
void incrementa(int *ponteiro){
    (*ponteiro)++;
}

int main(void){
int variavel = 5;
incrementa(&variavel);
printf("Valor da variavel: %d", variavel);

return 0;
}
