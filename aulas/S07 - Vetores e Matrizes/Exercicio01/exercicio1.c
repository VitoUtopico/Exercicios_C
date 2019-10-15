//vetor a de 6 posições

#include <stdio.h>
int main(){
    int var = 0;
    int a[6] = {1, 0, 5, -2, -5, 7};
    


    var = a[0] + a[1] + a[5];
    a[4] = 100;
    for(int i = 0; i < 6; i++){
        printf("A[%d] = %d\n", i, a[i]);
    }
    
    return 0;
}