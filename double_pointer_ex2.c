void main()
{
    char c='a';
    char* cp;
    char** cpp;
    cp=&c;
    cpp=&cp;
    printf("%c %c %c\n",c , *cp, **cpp);
    printf("%p %p %p\n",&c , cp, *cpp);
    printf("=====\n");
    int n=10;
    int *np;
    int **npp;
    np=&n;
    npp=&np;
    printf("%d %d %d\n",n , *np, **npp);
    printf("%d %d %d\n",&n , np, *npp);
}