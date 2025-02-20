#include <stdio.h>

int ft_is_prime(int n){
    int i = 2;

    while (i < n){
        if (n % i == 0){
            return 0;;
        }
        i++;
    }
    return 1;
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_is_prime(10));
}