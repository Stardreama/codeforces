#include <stdio.h>

struct bs
{
    unsigned a : 4;
    unsigned : 4;   /* 空域 */
    unsigned b : 4; /* 从下一单元开始存放 */
    unsigned c : 4
};

int main()
{
    struct bs ex1;

    printf("Size of example1: %lu bytes\n", sizeof(ex1));

    return 0;
}