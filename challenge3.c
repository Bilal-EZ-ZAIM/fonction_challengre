#include <stdio.h>


// Challenge 3
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
int pgcd(int x, int y)
{
    int somme;
    printf("enter nimero x : ");
    scanf("%d", &x);
    printf("enter nimero y : ");
    scanf("%d", &y);

    if (x > y)
    {
        for (int i = 1; i < y; i++)
        {
            
                if(x % i == 0 && y % i == 0){
                    somme = i;
                }
            
        }
    }

    printf("%d",somme);
}

int main()
{
    premierFonction();
    int x, y;
    pgcd(x, y);

    return 0;
}