#include <stdio.h>

/*count blanks, tabs and spaces*/
main()
{
    int c;
    int skip = 0;

    while((c = getchar()) != EOF){
        if (c == '\t'){
            printf("\\t");
            skip = 1;
        }
        if (c == '\b'){
            printf("\\b");
            skip = 1;
        }
        if (c == '\\'){
            printf("\\\\");
            skip = 1;
        }
        if (skip == 0){
            printf("%c", c);
        }
        skip = 0;   
    }
}