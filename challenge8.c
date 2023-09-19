#include <stdio.h>



// Challenge 8
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ====================== Challenge  : fonction =====================\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

void nombrParfie(int parfie, int count)
{

    int somme = 0;

    int diveiser[parfie];

    printf("size  = %d\n" , sizeof(diveiser));

    for (int i = 1; i < parfie; i++)
    {
        
        if (parfie % (i ) == 0)
        {
            diveiser[count] = i;
            count++;
        }
    }
    printf("count %d\n", count);
    for (int i = 0; i < count ; i++)
    {
        printf("divseur[%d] %d\n", i , diveiser[i]);
        somme += diveiser[i];
    }
    printf("S = %d\n", somme);

    if (somme == parfie)
    {
        printf("oui le nomber %d est naturl \n", parfie);
    }
    else
    {
        printf("le nomber %d est non naturl \n", parfie);
    }
}

int main()
{
    premierFonction();
    int parfie, count;

    printf("ecrire le nomber : ");
    scanf("%d", &parfie);
    nombrParfie(parfie , count);

    return 0;
}