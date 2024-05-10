#include <stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);
    if(tk >=100){
        printf("I will eat burger");
    }else if(tk >= 50){
        printf("I will eat fuchka");
    }else if(tk >= 20){
        printf("I will eat Ice-Cream");
    }
    else{
        printf("ignore everything");
    }
    return 0;
}