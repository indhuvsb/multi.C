#include<stdio.h>
#include<conio.h>

{
    while ( n > 0 )
        n = n - 5;
 
    if ( n == 0 )
        return true;
 
    return false;
}
 
int main()
{
    int n = 19;
    if ( isMultipleof5(n) == true )
        printf("%d is multiple of 5\n", n);
    else
        printf("%d is not a multiple of 5\n", n);
 
    return 0;
}
