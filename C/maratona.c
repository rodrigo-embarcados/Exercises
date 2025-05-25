#include <stdio.h>

int main (){
        float d = 100;
        int n = 1;
        float pa = 0.5;
        while (d < 42000){
                n = n + 1;
                d = d + d * pa;
    }
        printf("A quantidade de dias sera: %d", n);
        return 0;
}
