#ifndef RECLAMATION_H_INCLUDED
#define  RECLAMATION_H_INCLUDED
#include <stdio.h>
#include<string.h>
typedef struct
{
    int h;
    int m;
    int s;
} date;
typedef struct
{
    char nom [20];
    char prenom [20];
    int id;
    date date_rec ;
    char typer[20];
    char textr[1000];
    char contre[100];
    int idliste;
} reclamation;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, reclamation R  );
int modifier( char *, int, reclamation R  );
int supprimer(char *, int );
reclamation chercher(char *, int);
int nbreclamationtotale(char*);
int nbreclamtioncl(char *);
#endif // RECLAMATION_H_INCLUDED
