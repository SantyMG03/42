#include <stdio.h>

int ft_recursive_power(int n, int pow){
    if (pow == 0){
        return 1;
    } else {
        return n * ft_recursive_power(n, pow - 1);
    }
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_recursive_power(2, 10));
}