#include<stdio.h>

int main(int argc, const char * argv[]){

    for(int i = 1; i < argc; i++){
        printf("valor %d = %s\n", i, argv[i]);
    }
    

    
    return 0;
}