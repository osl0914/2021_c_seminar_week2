#include <stdio.h>

int main()
{
    char c = 'a';
    printf("%p %p %p\n", &c, (char*)&c, (int*)&c;
    printf("%d %d %d\n", c, *(char*)&c, *(int*)&c);
    return 0;
}
