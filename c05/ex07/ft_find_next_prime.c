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

int ft_find_next_prime(int n){
    int candidato = n + 1;
    if (n < 2) return 2;
    while (!ft_is_prime(candidato)){
        candidato++;
    }
    return candidato;
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_find_next_prime(5));
}