%{
    #include <stdio.h>
    #include<string.h>
    int yywrap(void);
    int yylex(void);
    int yyerror ( char*  msg )  ;
    void initialisation(); 
    void afficher();
    int rechercheNonDeclare(char* entite);
    void insererType(char* entite, char* type);
    int CompType (char* entite , char* type);
    int CompTypeBinoBin (char* entite1 , char* entite2);
    void insereLaTable(char* entite , int taille);
    char *intToString(int number) ;
    int  hatLaTaille(char entite []);
    void misajourint(char entite [] , int val) ;
    void insereLaMat(char entite [] , int taille1 , int taille2);
int hatLaTaille1Mat(char entite []) ;
int hatLaTaille2Mat(char entite []) ;
void quadr(char opr[],char op1[],char op2[],char res[]);
void ajour_quad(int num_quad, int colon_quad, char val []);
void afficher_qdr();
void misajourreal(char entite [] , float val ) ;
void misajourchar(char entite [] , char val []);
void insereChars(char entite [] , char val []) ;
    int sauvBOOL = -1 ;
    char sauvConstChar [20] ;
    char  sauvVar [20] ;
    int sauvTaille ;
    int sauvMat1 ; 
    int sauvMat2 ;
    extern int col ; 
    char sauvidfmat [20] ;
    extern int nb_ligne ;
    char* file_name = NULL;
    int tmp = -1 ;
    int sauvConstInt=-1;
	float sauvConstReal=-1;
    char sauvType [20];
    char sauvOpr [20];


int Fin_if=0,deb_else=0;
int qc=0;


FILE* yyin;
%}

%union {
    int entier ;
    char* str ;
    float reel ;

}


%token<str> mc_prog mc_end mc_routine mc_endr mc_read mc_write mc_if mc_then mc_else mc_endif mc_dowhile mc_enddo mc_equivalence   mul mc_call <str>idf <entier> cst_int <reel>cst_real  aff pvg vig po pf  <str> cst_chaine mc_dimension<entier> mc_true 
<entier>mc_false   moin plus divsep mc_integer mc_char mc_real mc_logical mc_ge mc_gt mc_le mc_lt mc_ne mc_eq mc_and mc_or 

%left                   plus         moin       
%left                   mul           divsep 
%left                   mc_gt mc_ge  mc_ne mc_le mc_eq mc_lt
%left                   mc_and  mc_or        
%right                  po        pf
%start S 

%%

S : ROUTINE PROGRAM  { 
    printf("\n --------------------------- \n");
    printf("\n Compilation reussie !.\n");
    printf("\n --------------------------- \n");}

PROGRAM : mc_prog idf DEC LIST_INST mc_end {}




TYPE : mc_real { strcpy(sauvType,"REAL"); } |
       mc_integer { strcpy(sauvType,"INTEGER"); } |
       mc_char { strcpy(sauvType,"CHARACTER"); }  | 
       mc_logical { strcpy(sauvType,"LOGICAL"); } 



ROUTINE : TYPE mc_routine idf po ARGS pf DEC LIST_INST mc_endr ROUTINE  {
			if (rechercheNonDeclare($3)== 0) {insererType($3,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $3);}

		} |




ARGS : idf vig ARGS | 
        idf


INST : INST_COND |
            INST_AFF  |
            INST_EQUIVALENCE |
            INST_CALL |
            INST_READ |
            INST_WRITE |
            INST_WHILE 

INST_COND :  mc_if po EXP_ARTH pf mc_then LIST_INST  mc_else LIST_INST mc_endif



 

 



INST_WHILE: mc_dowhile po EXP_ARTH pf LIST_INST mc_enddo pvg





INST_EQUIVALENCE : mc_equivalence po VAR_LIST pf vig po  VAR_LIST pf pvg 


VAR_LIST : idf vig  VAR_LIST {
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
           
} |
            idf po cst_int pf vig VAR_LIST {
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
           
} |
            idf po cst_real pf vig VAR_LIST  {
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
           
}|
            idf {
            if(strcmp(sauvType,"CHARACTER") == 0) {insereChars($1,"");}
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
           
}|
            idf po cst_int pf {
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
           
} |
            idf po cst_real pf {
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
           
} |


INST_CALL : idf aff mc_call idf po IDF_LIST pf pvg  

IDF_LIST : idf vig IDF_LIST | idf 

INST_WRITE : mc_write po SMTH pf pvg 

SMTH : idf vig SMTH | cst_chaine vig SMTH | idf {
                if(rechercheNonDeclare($1) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
}| cst_chaine

INST_READ : mc_read po idf pf pvg {   
             if(rechercheNonDeclare($3) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
}

LIST_INST : INST  LIST_INST | 


DEC : TYPE idf mc_dimension po cst_int pf pvg DEC {
            if($5 <= 0) {
			 printf("Erreur semantique  a la ligne %d,la dimension ne peut pas etre negative ou zero \n", nb_ligne);
            }
			if (rechercheNonDeclare($2)== 0){insererType($2,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $2);}
            insereLaTable($2,$5) ;
            sauvTaille = $5 ;
		}|
        TYPE idf mc_dimension po cst_int vig cst_int pf pvg DEC {
            // if($5 <= 0 || $7 <=0) {

			//  printf("Erreur semantique  a la ligne %d,la dimension ne peut pas etre negative ou zero \n", nb_ligne);
             

            // }
			// if (rechercheNonDeclare($2)== 0) {insererType($2,sauvType);}
			// else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $2);}
            // insereLaMat($2,$5,$7) ;
		}|
        TYPE LIST_IDF_DEC pvg DEC |


LIST_IDF_DEC : idf vig LIST_IDF_DEC {
			if (rechercheNonDeclare($1)== 0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		} |
                idf {
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType); if(strcmp(sauvType,"CHARACTER")==0) insereChars($1,"");}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		} |
        idf aff CST vig LIST_IDF_DEC {
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType); 
            switch(tmp) {
                    case 0 :
                        misajourint($1,sauvConstInt);
                    break;
                    case 1 :
                         misajourreal($1,sauvConstReal);
                    break;
                    case 2 :
                         misajourchar($1,sauvConstChar);
                    break;
                    case 3 :
                        misajourint($1,sauvBOOL) ;
                    break ;



                }
            
            }
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		} |
        idf aff CST  {
            switch(tmp) {
                    case 0 :
                        misajourint($1,sauvConstInt);
                    break;
                    case 1 :
                         misajourreal($1,sauvConstReal);
                    break;
                    case 2 :
                         misajourchar($1,sauvConstChar);
                    break;
                    case 3 :
                        misajourint($1,sauvBOOL) ;
                    break ;



                }
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}

		} |
                idf mul cst_int vig LIST_IDF_DEC {
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		}  |
                idf mul cst_int{
            
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		}  |
                idf mul cst_int aff cst_chaine vig LIST_IDF_DEC {
            
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		} |
                idf mul cst_int aff cst_chaine {
            
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		} 


CST : cst_chaine  {}|
    cst_int  { sauvConstInt = $1 ; tmp = 0 ; } |
    cst_real  { sauvConstInt = $1; tmp = 1}|
    
INST_AFF : idf aff EXP_ARTH  pvg {
            if(rechercheNonDeclare($1) == 0) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
            else {
                if(!CompTypeBinoBin($1,sauvVar)){
				printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1); 
                
                
            }
            else {
                switch(tmp) {
                    case 0 :
                        misajourint($1,sauvConstInt);
                    break;
                    case 1 :
                         misajourreal($1,sauvConstReal);
                    break;
                    case 2 :
                        printf("OOF") ;
                         misajourchar($1,sauvConstChar);
                    break;
                    case 3 :
                        misajourint($1,sauvBOOL) ;
                    break ;



                }
            }
            }
            

            
}



EXP_ARTH: EXP_ARTH plus EXP_ARTH
         | EXP_ARTH moin EXP_ARTH
         | EXP_ARTH mul EXP_ARTH
         | EXP_ARTH divsep EXP_ARTH  {

            if(sauvConstInt == 0){printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); }

           }
         | EXP_ARTH mc_ge EXP_ARTH
         | EXP_ARTH mc_gt EXP_ARTH
         | EXP_ARTH mc_le EXP_ARTH
         | EXP_ARTH mc_lt EXP_ARTH
         | EXP_ARTH mc_ne EXP_ARTH
         | EXP_ARTH mc_eq EXP_ARTH
         | EXP_ARTH mc_and EXP_ARTH
         | EXP_ARTH mc_or EXP_ARTH
         | po EXP_ARTH pf
         | OPERANDE


OPERANDE: idf {
    strcpy(sauvVar,$1);          
   if(rechercheNonDeclare($1) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
}
         | idf po INDICE pf {
            

            if(rechercheNonDeclare($1) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
            
            

}
         | idf po idf vig idf pf {strcpy(sauvVar,$1);            
         
          if(rechercheNonDeclare($1) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}

}
         | cst_int {
            sauvConstInt = $1 ;
            tmp = 0 ; // integer
         }
         |cst_real {
            sauvConstReal = $1 ;
            tmp = 1 ; // real
         
         }
         | cst_chaine{
            printf("SUVCHAR : %s\n",$1);
            strcpy(sauvConstChar,$1) ;
            tmp = 2 ; // char
         
         }
         | mc_true {sauvBOOL = 1 ; tmp = 3 }
         | mc_false {sauvBOOL = 0 ; tmp = 3 ; }

INDICE: idf {          
    
      if(rechercheNonDeclare($1) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}
}
      | cst_int {
        if($1 > sauvTaille) {
            printf("Erreur semantique a la ligne %d : indice > La taille de tableau  \n", nb_ligne);
        }
        if ($1 < 0 ) {
            printf("Erreur semantique a la ligne %d : indice  < 0   \n", nb_ligne);
        }




      }
      | idf vig cst_int {
                    if(rechercheNonDeclare($1) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}

      }
      | cst_int vig cst_int  {
        // if ($1 > hatLaTaille1Mat(sauvidfmat) || $3 > hatLaTaille2Mat(sauvidfmat)) {
        //                 printf("Erreur semantique a la ligne %d : indice > La taille de tableau  \n", nb_ligne);

        // }

        //  if ($1 < 0 || $3 < 0) {
        //     printf("Erreur semantique a la ligne %d : indice  < 0   \n", nb_ligne);
        // }
        
      }
      | cst_int vig idf {
                    if(rechercheNonDeclare($3) == 0 ) {printf("Erreur semantique a la ligne %d : variable %s Non declaree  \n", nb_ligne, $1);}

      }





%%

int main (int argc, char *argv[])
{
   initialisation();

   yyparse(); 
   printf("\n");
   afficher();
   afficher_qdr();
 }
 int yywrap ()
 {}
int yyerror ( char*  msg )  
{
    printf ("Erreur Syntaxique a la ligne %d a la colonne %d %s \n", nb_ligne,col);
} 