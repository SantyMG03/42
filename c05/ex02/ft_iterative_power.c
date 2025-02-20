#include <stdio.h>

int ft_iterative_power(int n, int pow){
    int i = 1;
    int sol = n;
    while (i < pow){
        sol = sol * n;
        i++;
    }
    return sol;
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_iterative_power(2, 10));
}