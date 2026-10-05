#include <stdio.h>
#include <math.h>

int main()
{
    float M=0.0f;
    int C=0;
    float t=0.0f;
    int n=0;
    printf ("Quel est le montant du pret ? \n");
    scanf("%d", &C);
    printf ("Quel est le taux d'interet annuel ? \n");
    scanf("%f", &t);
    printf ("Quel est  la duree du pret en annees ? \n");
    scanf("%d", &n);
    
    M=(C*(t/12))/(1-pow(1+(t/12),-n*12));
    printf("les mensualites sont de : %.2f", M);
    
    
    return 0;
}