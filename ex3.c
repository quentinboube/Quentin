#include <stdio.h>
#include <string.h>

int main()
{
    char MotATrouver [100]="bonjour";
    char lettre;
    int fautes = 0;
    char mot [100];
    int size = strlen(MotATrouver);
    for (int i=0; i<size; i++)
    {
        mot[i]='-';
    }
    printf (mot);

    while (fautes<7 && mot!=MotATrouver)
    {
        printf("\n choisir une lettre \n");
        scanf("%c",&lettre);
        for (int j=0; j<size; j++)
        {
            if (lettre == mot[j])
            {
                mot[j]=lettre;
            }
            
        }
        printf(mot);
    }
    
    
    // printf(" \n\n\n\n\n\n\n-------\n");
    // printf("\n |\n |\n |\n |\n |\n |\n-------\n");
    // printf("-------\n |  |\n |\n |\n |\n |\n-------\n");
    // printf("-------\n |  |\n |  O\n |\n |\n |\n-------\n");
    // printf("-------\n |  |\n |  O\n |  |\n |\n |\n-------\n");
    // printf("-------\n |  |\n |  O\n | /|\\\n |\n |\n-------\n");
    // printf("-------\n |  |\n |  O\n | /|\\\n | / \\\n |\n-------\n");
    return 0;
}