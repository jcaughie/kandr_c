#include <stdio.h>

/* print Celsius-fahrenheit table
    for celsius = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /*lower limit*/
    upper = 300;    /*upper limit*/
    step = 20;      /*step*/

    celsius = lower;
    printf("Celsius  Fahr\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%5.0f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
}