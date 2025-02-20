#include <stdio.h>

int ft_fibonacci(int n){
    if (n < 0){
        return -1;
    } else if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return ft_fibonacci(n - 1) + ft_fibonacci(n - 2);
    }
}

int main(int argc, int *argv[]){
    printf("%d\n", ft_fibonacci(5));
}