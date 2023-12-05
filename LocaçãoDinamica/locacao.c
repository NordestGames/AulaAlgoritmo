#include <stdio.h>
#include <stdlib.h>

int main(){
int *vetor = malloc(3 * sizeof(int));
if (vetor == NULL){
    pintf("Erro na loca~cão de memoria");
    exit(1);
}
free(vetor);
    return 0;
}