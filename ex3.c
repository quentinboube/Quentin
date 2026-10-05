#include <stdio.h>
#include <string.h>

int main()
{
    char MotATrouver [100]="bonjour";
    char lettre;
    int fautes = 0;
    char mot [100];
    int size = strlen(MotATrouver);
    MotATrouver[size]='\0';
    int ok=0;

    for (int i=0; i<size; i++)
    {
        mot[i]='-';
    }
    mot[size]='\0';
    printf ("%s",mot);

    while (fautes<7 && mot!=MotATrouver)
    {
        printf("\n choisir une lettre \n");
        scanf("%c",&lettre);

        for (int j=0; j<size; j++)
        {
            if (lettre == MotATrouver[j])
            {
                ok=1;
            }
        }
        if (ok==1)
        {
            for (int j=0; j<size; j++)
            {
                if (lettre == MotATrouver[j])
                    {
                        mot[j]=lettre;
                    }
            }
        }
        else
        {
            fautes+=1;
        }

        printf("%s",mot);
        switch (fautes)
            {
            case 1:
                printf("\n\n\n\n\n\n\n-------\n");
                break;
            
            case 2:
                printf("\n |\n |\n |\n |\n |\n |\n-------\n");
                break;
            
            case 3:
                printf("-------\n |  |\n |\n |\n |\n |\n-------\n");
                break;
            
            case 4:
                printf("-------\n |  |\n |  O\n |\n |\n |\n-------\n");
                break;

            case 5:
                printf("-------\n |  |\n |  O\n |  |\n |\n |\n-------\n");
                break;
            
            case 6:
                printf("-------\n |  |\n |  O\n | /|\\\n |\n |\n-------\n");
                break;

            case 7:
                printf("-------\n |  |\n |  O\n | /|\\\n | / \\\n |\n-------\n");
                break;

            default:
                break;
            }
    }

    if (fautes==7)
    {
        printf("vous avez perdu");
    }
    else
    {
        printf("bien joue tu as reussi !!!");
    }
    return 0;
}