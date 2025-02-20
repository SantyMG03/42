#include <unistd.h>

void ft_putstr(char *str){
    int i = 0;
    while (str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[]){
    int i = 1;
    while (i < argc){
        char *aux = argv[i];
        ft_putstr(aux);
        write(1, "\n", 1);
        i++;
    }
}