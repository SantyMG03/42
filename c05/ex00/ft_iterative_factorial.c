#include <stdio.h>

int ft_iterative_factorial(int n){
    int sol = 1;
    int i = 1;
    while (i <= n){
        sol = sol * i;
        i++;
    }
    return sol;
}

int main(void){
    printf("%d\n", ft_iterative_factorial(5));
}