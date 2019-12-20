/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,x1=0,x2=1,x;
    scanf("%d",&n);
    printf("%d\t%d\t",x1,x2);
    for(i=3;i<=n;i++)
    {
        x=x1+x2;
        printf("%d\t",x);
        x1=x2;
        x2=x;
    }
    return 0;
}
