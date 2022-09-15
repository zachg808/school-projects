#include <stdio.h>

void dummy(int, char, char *, float);

int main(int argc, char* argv[])
{
    int num1, num2 = 10;
    char c1 = 'A';
    char c2 = 'B';
    float score1 = 20.5;
    char ca[3] = "Hi";

    printf("c1 = %X\nc2 = %X\n", c1, c2);
    printf("ca[0] = %X\nca[1] = %X\nca[2] = %X\n", ca[0], ca[1], ca[2]);

    printf("argc& = %X\nargv& = %X\nnum1& = %X\nnum2& = %X\nc1& = %X\nc2& = %X\nscore1& = %X\nca[0]& = %X\nca[1]& = %X\nca[2]& = %X\n", &argc, &argv, &num1, &num2, &c1, &c2, &score1, &ca[0], &ca[1], &ca[2]);

    dummy(num2, c1, ca, score1);

    return 0;
}

void dummy(int x, char y, char* z, float w)
{
    x++;
    y++;
    w = w + 2.1;
    
    printf("z pointer = %c\nz pointer = %X\n", z, z);

    printf("x& = %X\ny& = %X\nz& = %X\nw& = %X\n", &x, &y, &z, &w);

    /* pause here */
}
