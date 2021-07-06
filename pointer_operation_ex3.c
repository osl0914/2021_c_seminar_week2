#include <stdio.h>
void main()
{
    char c = 'A';
    printf("%p %p %p\n", &c, (char*)&c, (int*)&c);
    printf("%p %p %p\n", &c + 1, (char*)&c + 1, (int*)&c + 1);
}