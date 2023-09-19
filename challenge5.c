#include <stdio.h>

// Challenge 5
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
void swap()
{
    int x , y;
    printf("ecrire X : ");
    scanf("%d", &x);
    printf("ecrire X : ");
    scanf("%d", &y);

    int c;
    c = y;
    y = x;
    x = c;

    printf("la valeur de x : %d\n", x);
    printf("la valeur de y : %d\n", y);
}

int main()
{
    premierFonction();
    swap();

    return 0;
}