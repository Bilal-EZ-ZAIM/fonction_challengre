#include <stdio.h>


// Challenge 7
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

void premier(){
    int p , foud = 0;
    printf("ecrire number : ");
    scanf("%d",&p);

    for(int i = 2 ; i < p ; i++){

        if(p % i == 0){
            foud = 1;
            break;
        }
    }

    if(foud == 0){
        printf("le nimero %d est premier \n" , p);
    }else{
        printf("le nimero %d est non premier \n" , p);
    }
}


int main(){

    premierFonction();
    premier();






    return 0 ;
}