#include "reclamation.h"
#include <string.h>
#include <stdio.h>
int ajouter (char  reclamation1[], reclamation R )
{
    FILE * f=fopen(reclamation1, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s  %s %d %d %d %d %s %s %s %d \n ",R.nom,R.prenom,R.id,R.date_rec.h,R.date_rec.m,R.date_rec.s,R.typer,R.textr,R.contre,R.idliste);
        
        fclose(f);
        return 1;
    }
    else return 0;


}

int modifier( char reclamation1[], int id, reclamation nouv )
{
    int tr=0;
    reclamation R;
    FILE * f=fopen(reclamation1, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s  %s %d %d %d %d %s %s %s %d \n",R.nom,R.prenom,&R.id,&R.date_rec.h,&R.date_rec.m,&R.date_rec.s,R.typer,R.textr,R.contre,&R.idliste)!=EOF)
        {
            if(R.id== id)
            {
                fprintf(f,"%s  %s %d %d %d %d %s %s %s %d \n",nouv.nom,nouv.prenom,nouv.id,nouv.date_rec.h,nouv.date_rec.m,nouv.date_rec.s,nouv.typer,nouv.textr,nouv.contre,nouv.idliste);
        
                tr=1;
            }
            else
                fprintf(f2,"%s  %s %d %d %d %d %s %s %s %d \n",R.nom,R.prenom,R.id,R.date_rec.h,R.date_rec.m,R.date_rec.s,R.typer,R.textr,R.contre,R.idliste);

        }
    }
    fclose(f);
    fclose(f2);
    remove(reclamation1);
    rename("nouv.txt", reclamation1);
    return tr;

}
int supprimer(char reclamation1[] , int id)
{
    int tr=0;
    reclamation R;
    FILE * f=fopen(reclamation1, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s  %s %d %d %d %d %s %s %s %d \n",R.nom,R.prenom,&R.id,&R.date_rec.h,&R.date_rec.m,&R.date_rec.s,R.typer,R.textr,R.contre,&R.idliste)!=EOF)
        {
            if(R.id== id)
                tr=1;
            else
                fprintf(f2,"%s  %s %d %d %d %d %s %s %s %d \n",R.nom,R.prenom,R.id,R.date_rec.h,R.date_rec.m,R.date_rec.s,R.typer,R.textr,R.contre,R.idliste);

        }
    }
    fclose(f);
    fclose(f2);
    remove(reclamation1);
    rename("nouv.txt", reclamation1);
    return tr;
}
reclamation chercher(char reclamation1[], int id)
{
    reclamation R;
    int tr;
    FILE * f=fopen(reclamation1, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s  %s %d %d %d %d %s %s  %s %d",R.nom,R.prenom,&R.id,&R.date_rec.h,&R.date_rec.m,&R.date_rec.s,R.typer,R.textr,R.contre,&R.idliste)!=EOF)
        {
            if(R.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        R.id=-1;
    return R;

}

int nbreclamationtotale(char reclamation1[])
{
    reclamation R;
    
    int nbrt=0;
    FILE * f=fopen(reclamation1, "r");
    if(f!=NULL)
    {
        while( fscanf(f,"%s  %s %d %d %d %d %s %s %s %d \n ",R.nom,R.prenom,&R.id,&R.date_rec.h,&R.date_rec.m,&R.date_rec.s,R.typer,R.textr,R.contre,&R.idliste)!=EOF)
        {
  
            nbrt++;
        }
}
    fclose(f);
    return nbrt;
}
/*int nbreclamtioncl(char reclamation1[] ,int id) 
{
reclamation R ;

 
 int nbrl=0;
    FILE * f=fopen(reclamation1, "r");
    if(f!=NULL)
    { while( fscanf(f,"%s  %s %d %d %d %d %s %s %s %d \n ",R.nom,R.prenom,&R.id,&R.date_rec.h,&R.date_rec.m,&R.date_rec.s,R.typer,R.textr,R.contre,&R.idliste)!=EOF)
       if (R.idliste==id)
          
           {
        nbrl++;
            }
}
    fclose(f);
    return nbrl;
 }*/


















