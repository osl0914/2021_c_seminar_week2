#include <stdio.h>

int main()
{
    int num1 = 12345678;
    printf("%p %p %p\n", &num1, (char*)&num1, (int*)&num1);
    printf("%d %d %d\n", num1, *(char*)&num1, *(int*)&num1);
    return 0;
}
