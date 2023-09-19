#include <stdio.h>



// Challenge 2
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


int Sum(int x , int y)
{
    int somme ;
    printf("enter nimero x : ");
    scanf("%d",&x);
     printf("enter nimero y : ");
    scanf("%d",&y);
    somme = x + y;
    return somme;

}

int main()
{
    premierFonction();
    int x , y;
    printf("la somme  %d\n", Sum(x,y));

    return 0;
}