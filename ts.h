// ts.c


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct element *list;
typedef struct element {
    int state;
    char name[20];
    char code[20];
    char type[20];
    float val;
    list svt;
} noued;

// Structure for the symbol table entry in the MC/SEP lists
typedef struct elt *listms;
typedef struct elt {
    int state;
    char name[20];
    char type[20];
    listms svt;
} nouedms;


list tab = NULL;
listms tabm = NULL;
listms tabs = NULL;

void initialisation()
{
    list tmp1 = NULL;

    // Free IDF list
    while (tab)
    {
        tmp1 = tab;
        tab = tab->svt;
        free(tmp1);
    }

    listms tmp;

    // Free MC list
    while (tabm)
    {
        tmp = tabm;
        tabm = tabm->svt;
        free(tmp);
    }

    // Free SEP list
    while (tabs)
    {
        tmp = tabs;
        tabs = tabs->svt;
        free(tmp);
    }
}

void inserer(char entite[], char code[], char type[], float val, int i, int y)
{ 
    switch (y)
    {
    case 0: /*insertion dans la table des IDF et CONST*/
    {
        list nouv = malloc(sizeof(noued));
        if (nouv == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }

        strcpy(nouv->name, entite);
        strcpy(nouv->code, code);
        strcpy(nouv->type, type);
        nouv->val = val;
        nouv->state = 1;

        nouv->svt = tab;
        tab = nouv;
    }
    break;

    case 1: /*insertion dans la table des mots clés*/
    { 
        listms nouv = malloc(sizeof(nouedms));
        if (nouv == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }

        strcpy(nouv->name, entite);
        strcpy(nouv->type, code);
        nouv->state = 1;

        nouv->svt = tabm;
        tabm = nouv;
    }
    break;

    case 2: /*insertion dans la table des séparateurs*/
    {
        listms nouv = malloc(sizeof(nouedms));
        if (nouv == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }

        strcpy(nouv->name, entite);
        strcpy(nouv->type, code);
        nouv->state = 1;

        nouv->svt = tabs;
        tabs = nouv;
    }
    break;
    }
}




void rechercher(char entite[], char code[], char type[], float val, int y)
{ 
    switch (y)
    {
    case 0: /*verifier si la case dans la table des IDF et CONST est libre*/
    {
        list tmp = tab;
        while (tmp != NULL && tmp->state == 1 && strcmp(entite, tmp->name) != 0)
        {
            tmp = tmp->svt;
        }

        if (tmp == NULL)
        {
            inserer(entite, code, type, val, 0, 0);
        }
        else
        {
            // printf("entite existe deja\n");
        }
    }
    break;

    case 1: /*verifier si la case dans la table des mots clés est libre*/
    {   
      
        
        listms tmp1 = tabm;
        while (tmp1 != NULL && tmp1->state == 1 && strcmp(entite, tmp1->name) != 0)
        {
            tmp1 = tmp1->svt;
        }

        if (tmp1 == NULL)
        {
            inserer(entite, code, type, val, 0, 1);
        }
        else
        {
           // printf("entite existe deja\n");
        }
    }
    break;

    case 2:
    {
        listms tmp2 = tabs;
        while (tmp2 != NULL && tmp2->state == 1 && strcmp(entite, tmp2->name) != 0)
        {
            tmp2 = tmp2->svt;
        }

        if (tmp2 == NULL)
        {
            inserer(entite, code, type, val, 0, 2);
        }
        else
        {
            //printf("entite existe deja\n");
        }
    }
    break;
    }
}

void afficher()
{
    printf("/***************Table des symboles IDF*************/\n");
    printf("____________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
    printf("____________________________________________________________________\n");

    list tmp = tab;
    while (tmp != NULL)
    {
        if (tmp->state == 1)
        {
            printf("\t|%10s |%15s | %12s | %12f\n", tmp->name, tmp->code, tmp->type, tmp->val);
        }
        tmp = tmp->svt;
    }

    printf("\n/***************Table des symboles mots clés*************/\n");
    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    listms tmp1 = tabm;
    while (tmp1 != NULL)
    {
        if (tmp1->state == 1)
        {
            printf("\t|%10s |%15s |\n", tmp1->name, tmp1->type);
        }
        tmp1 = tmp1->svt;
    }

    printf("\n/***************Table des symboles séparateurs*************/\n");
    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");

    listms tmp2 = tabs;
    while (tmp2 != NULL)
    {
        if (tmp2->state == 1)
        {
            printf("\t|%10s |%15s | \n", tmp2->name, tmp2->type);
        }
        tmp2 = tmp2->svt;
    }
}
list chercheDansListe(list t , int pos){

    for(int i=0 ; i<pos ; i++) {
        t = t->svt ;
    }
    return t ;

}

/***Step 1 : la fonction qui retourne la position d'un IDF  ***/

int rechercherIDF(char entite[]){

  int i=0;
  list tmp = tab ;
  while( tmp != NULL ){
    
    if (strcmp(entite,tmp->name)==0){return i;}  //retourne la position de l'IDF
    else i++;
    tmp = tmp->svt ;
  } 
  return -1;//si l'IDF n'existe pas
}

/***Step 2 : la fonction qui permet d'inserer un type à une variable (IDF) ***/
 
void insererType(char entite[], char type[])
	{
   int position;
   position =rechercherIDF(entite);
	 if(position !=-1)
	  {
	    strcpy(chercheDansListe(tab,position)->type,type); 
	  }
  }

/***Step 3 : la fonction qui modifie le code des idfs constants ***/

void CodeCst (char entite [])
{
	int position;
	position =rechercherIDF(entite);
	if (position != -1) 
	{
		strcpy(chercheDansListe(tab,position)->code,"IDF CONSTANT");
	}
}

/***Step 4 : la fonction qui returne verifie la compatibilité des types  ***/

int CompType (char entite [], char type [])
{

	int position;
	position =rechercherIDF(entite);
	if (position != -1) 
	{
        printf("CompType\n");
		if (strcmp(chercheDansListe(tab,position)->type,type)==0){return 1;}//le type est compatible
		else {return 0;}//le type n'est pas compatible
	}


}

int CompTypeBinoBin(char entite1[], char entite2[]) {

    int pos1 = rechercherIDF(entite1);
    int pos2 = rechercherIDF(entite2);

    // printf("%s and %s \n", chercheDansListe(tab, pos1)->type, chercheDansListe(tab, pos2)->type);

    // Change the comparison to check for equality (return 1 if equal)
    if (strcmp(chercheDansListe(tab, pos1)->type, chercheDansListe(tab, pos2)->type) == 0) {
        return 1;
    } else {
        return 0;
    }
}



int rechercheNonDeclare(char entite[]) {
  int position;
  position=rechercherIDF(entite);
       if (position != -1 && strcmp(chercheDansListe(tab,position)->type," ")==0){ return 0;} // la variable n'est pas declaree.
       else {return 1;} // la variable est declaree.
}



char *intToString(int number) {
    // Adjust the size based on your needs
    char *result = (char *)malloc(20);

    if (result != NULL) {
        // Check the return value of sprintf to handle errors
        if (sprintf(result, "%d", number) < 0) {
            free(result);  // Free the allocated memory in case of an error
            return NULL;   // Indicate an error
        }
    }

    return result;
}