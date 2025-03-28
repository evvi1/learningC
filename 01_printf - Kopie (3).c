#include <stdio.h>
#include <string.h>

int main(){
    int num = 200;
    //printf returns number of bytes printed!
    printf("%d", printf("%d", printf("%d\n", printf("%d",printf("%d\n",num))))); //???
    int a;
    a = sizeof(printf(200));
    printf("\n");
    printf("%d\n", a);
    printf("size of printf %d\n", strlen("200\n"));
    printf("size of int %d\n", sizeof(num));
    char c = 'c';
    printf("size of char c %d\n", sizeof(c));
}