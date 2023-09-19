#include <stdio.h>

// Challenge 4
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
int max_2(int z, int a)
{
    int b;
    if(z < a){
        b = a;
    }
    if(z > a){
        b = z;
    }
    return b;
    
    
}
int max_4(int x, int y, int z, int a)
{
    int somme;
    printf("enter nimero x : ");
    scanf("%d", &x);
    printf("enter nimero y : ");
    scanf("%d", &y);
    printf("enter nimero z : ");
    scanf("%d", &z);
    printf("enter nimero a : ");
    scanf("%d", &a);
    int e = max_2(z, a);
    int f = max_2(x , y);
    int g = max_2(e,f);
    printf("max =  %d" , g);
    return somme;
}

int main()
{
    premierFonction();
    int x, y, z, a;
    max_4(x, y, z, a);

    return 0;
}