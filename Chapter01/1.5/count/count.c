#include <stdio.h>

/*count characters*/
main()
{
    long nc;
    
    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}