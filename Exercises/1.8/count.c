#include <stdio.h>

/*count blanks, tabs and spaces*/
main()
{
    int b, t, nl, c;

    b = 0;
    t = 0;
    nl = 0;

    while((c = getchar()) != EOF){
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }
    printf("%d blanks, %d tabs, %d new lines\n", b, t, nl);
}