#include <stdio.h>
#include <math.h>


// Challenge 6
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
void equation_4()
{
    int a,b, c;
    int x1, x2 ;
    int delta , rac;
    printf("Ecrire a : ");
    scanf("%d", &a);
    printf("Ecrire b : ");
    scanf("%d", &b);
    printf("Ecrire c : ");
    scanf("%d", &c);
    printf("Equation = ");
    printf("%d^4", a);

    if (b > 0)
    {
        printf(" + %d^2", b);
    }
    else
    {
        printf("%d^2", b);
    }
    if (c > 0)
    {
        printf(" + %d\n", c);
    }
    else
    {
        printf("%d\n", c);
    }

    delta = pow(b, 2) - 4 * a * c;
    if (delta > 0)
    {
        x1 = (-b + rac) / 2 * a;
        x2 = (-b - rac) / 2 * a;
        printf("x1 =  %d\n", x1);
        printf("x2 =  %d\n", x2);
    }
    else if (delta = 0)
    {
        x1 = (-b) / 2 * a;
        printf("x1 =  %d\n", x1);
    }
    else
    {
        printf("lequation non solition");
    }
}

int main()
{
    premierFonction();



    equation_4();

    return 0;
}