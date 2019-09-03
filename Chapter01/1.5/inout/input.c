#include <stdio.h>

/*copy input to output*/
main()
{
    int c;

    int eof = EOF;
    printf("%d", eof);

    while ((c = getchar()) != EOF){
        // printf("%d", getchar() != EOF);
        putchar(c);
    }
    
}