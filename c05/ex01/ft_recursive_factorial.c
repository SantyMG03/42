#include <stdio.h>

int ft_recursive_factorial(int n){
    if (n == 1){
        return 1;
    } else {
        return n * ft_recursive_factorial(n - 1);
    }
    
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_recursive_factorial(5));
}