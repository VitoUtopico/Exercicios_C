#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, const char *argv[]){
    double vet_real[10], vet_quadrado[10];

    printf("Vetor real:\n");
    for(int i = 1; i < argc; i++){
        vet_real[i-1] = atof(argv[i]);
        vet_quadrado[i-1] = pow(vet_real[i-1],2);
        printf("valor %d = %.2f\n", i, vet_real[i-1]);
    }

    printf("\n\nVetor quadrado:\n");
    for(int i = 1; i < argc; i++){
        printf("valor %d = %.2f\n", i, vet_quadrado[i-1]);
    }


    return 0;
}