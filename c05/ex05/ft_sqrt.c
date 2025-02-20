#include <stdio.h>

int ft_sqrt(int n){
    int i = 1;
    while (i < n){
        if(i * i == n){
            return i;
        }
        i *= 2;
    }
    return 0;
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_sqrt(4));
}