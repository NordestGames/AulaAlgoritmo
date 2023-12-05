#include <stdio.h>
#include <stdlib.h>

int main(){
int *vetor = malloc(3 * sizeof(int));
if (vetor == NULL){
    printf("Erro na loca~cão de memoria");
    exit(1);
}
free(vetor);
    return 0;
}


#include <stdio.h> // printf, scanf
#include <stdlib.h> // Função malloc, calloc, free, exit

int main(void){
    int tamanho = 5;
    int i;

    int *vetor = (int*)malloc(3 * sizeof(int));
    if (vetor == NULL){
        printf("Erro na locacão de memoria");
        exit(1); //Aborta a execução do programa
}
    else{
        printf("Alocacao realizada com sucesso!\n ");
    }
// Ler os dados do vetor 
    printf("Digite o valor do vetor:\n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
free(vetor);
    return 0;
}