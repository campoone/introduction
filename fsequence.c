#include <stdio.h>

int main(){
    int current = 1;
    int before = 0;
    int next = 0;
    int b = 0;
    while (b<7){
        printf("%d, %d\n ", current, next);
        next = current + before;
        before = current;
        current = next;
        b++;
    }
    return 0;
}

