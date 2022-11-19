#include <stdio.h>
#include <string.h>
#include"reclamation.h"
int main()
{
reclamation R1 = {"bilel","benghalba",1001,{12,10,2000},"visuele","testtext1"," electeur",1};
reclamation R2 = {"bilel","benghalba",1001,{12,10,2000},"visuele","testtext1"," bureau",2};
reclamation R3 = {"bilel","benghalba",1001,{12,10,2000},"visuele","testtext1"," bureau",3};
int x=ajouter("reclamation.txt", R1);
int x1=ajouter("reclamation.txt", R2);
int x2=ajouter("reclamation.txt", R3);
    if(x==1)
        printf("ajout utilisateur avec succés");
    else printf("echec ajout");

   /*x=modifier("reclamation.txt",13005968,R2 );

   if(x==1)
    	printf("\n Modification de point avec succés");
   else printf("\n echec Modification");
   // x=supprimer("reclamation.txt",13005968 );
   /// if(x==1)
    	printf("\n Suppression de point avec succés");
    else printf("\n echec Suppression");*/
    /*R3=chercher("reclamation.txt",1300596 );
    if(R3.id==-1)
    	printf("introuvable");*/

   printf("\nle nombre de reclamation  totale  est %d ",nbreclamationtotale("reclamation.txt"));
   
   
   /* x=nbreclamtioncl("reclamation.txt",2);
      if(x==1)
     printf("\n le nombre de reclamtion  contre liste electeur est %d ",nbreclamtioncl("reclamation.txt"));*/
  

    return 0;
 }
