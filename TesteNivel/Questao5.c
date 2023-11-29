# include <stdio.h>
int main () {
int i ;
for ( i =1 ; i <= 100 ; i *=100) {
if ( i ==30 ) {
break ;
}
else {
printf ("%2d\n" ,2* i ) ;
}
}
printf ("Fim do laco !\n") ;
return 0;
}

// Qual a saída desse programa?
// A saída é: 2 e Fim do laco !
// Como i está sendo multiplicado por 100, então não entra no if e sim no else, assim imprimindo 2, ja que o valor de i ainda seria 1
// E o Fim do laco, será impresso pois está fora do for