        #include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("-----------------------\n");
    printf("x >= y: %d\n", x >= y);
    printf("x <= y: %d\n", x <= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("-----------------------\n"); 
    printf("x >= c: %d\n", x >= c);
    printf(" O valor ASCII de %c e %d: \n", c, c);

    return 0;

}