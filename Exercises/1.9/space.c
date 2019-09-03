#include <stdio.h>

/*replace multiple spaces*/
main()
{
    int count = 0, c;

    while((c = getchar()) != EOF){
        if (c != ' '){
            printf("%c", c);
            count = 0;
        }
        if (c == ' '){
            ++count;
        }
        if (count == 1)
            printf(" ");        
    }
}