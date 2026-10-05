#include <stdio.h>

int main()
{
    int s=0;
    int m=0;
    int h=0;
    printf ("choisissez un temps en seconde : ");
    scanf("%d", &s);
    m=s/60;
    h=m/60;
    s=s-m*60;
    m=m-h*60;
    printf("%d ,%d, %d",h,m,s);
    return 0;
}