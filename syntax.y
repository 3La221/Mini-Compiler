%{
    #include <stdio.h>
    int yywrap(void);
    int yylex(void);
    int yyerror ( char*  msg )  ;
    void initialisation(); 
    void afficher();
    extern int col ; 
    extern int nb_ligne ;
    char* file_name = NULL;
FILE* yyin;
%}



%token mc_prog mc_end mc_routine mc_endr mc_read mc_write mc_if mc_then mc_else mc_endif mc_dowhile mc_enddo mc_equivalence   mul mc_call idf cst_int cst_real  aff pvg vig po pf  mc_err mc_reel cst_chaine mc_dimension mc_true 
mc_false   moin plus divsep mc_integer mc_char mc_real mc_logical mc_ge mc_gt mc_le mc_lt mc_ne mc_eq mc_and mc_or 

%left                   plus         moin       
%left                   mul           divsep 
%left                   mc_gt mc_ge  mc_ne mc_le mc_eq mc_lt
%left                   mc_and  mc_or        
%right                  po        pf
%start S 

%%

S : ROUTINE PROGRAM  { printf("CORRECT") ;}

PROGRAM : mc_prog idf DEC LIST_INST mc_end 




TYPE : mc_real |
       mc_integer |
       mc_char | 
       mc_logical



ROUTINE : TYPE mc_routine idf po ARGS pf DEC LIST_INST mc_endr ROUTINE |



ARGS : idf vig ARGS | 
        idf


INST : INST_COND |
            INST_AFF |
            INST_EQUIVALENCE |
            INST_CALL |
            INST_READ |
            INST_WRITE 

INST_COND : mc_if po EXP_ARTH pf mc_then LIST_INST ELSE mc_endif |
            mc_dowhile po EXP_ARTH pf LIST_INST mc_enddo pvg


ELSE : mc_else LIST_INST |


INST_EQUIVALENCE : mc_equivalence po VAR_LIST pf vig po  VAR_LIST pf pvg 



VAR_LIST : idf vig  VAR_LIST |
            idf po cst_int pf vig VAR_LIST |
            idf po cst_real pf vig VAR_LIST |
            idf |
            idf po cst_int pf |
            idf po cst_real pf |


INST_CALL : idf aff mc_call idf po IDF_LIST pf pvg 

IDF_LIST : idf vig IDF_LIST | idf 

INST_WRITE : mc_write po SMTH pf pvg 

SMTH : idf vig SMTH | cst_chaine vig SMTH | idf | cst_chaine

INST_READ : mc_read po idf pf pvg 

LIST_INST : INST LIST_INST | 


DEC : TYPE idf mc_dimension po cst_int pf pvg DEC |
        TYPE idf mc_dimension po cst_int vig cst_int pf pvg DEC |
        TYPE LIST_IDF_DEC pvg DEC |


LIST_IDF_DEC : idf vig LIST_IDF_DEC |
                idf |
                idf aff CST vig LIST_IDF_DEC |
                idf aff CST |
                idf mul cst_int vig LIST_IDF_DEC |
                idf mul cst_int |
                idf mul cst_int aff cst_chaine vig LIST_IDF_DEC |
                idf mul cst_int aff cst_chaine 

CST : cst_chaine |
    cst_int |
    cst_real |
    
INST_AFF : idf aff EXP_ARTH pvg |
            idf aff cst_int |
            idf aff cst_real |
            idf aff cst_chaine 



EXP_ARTH: EXP_ARTH plus EXP_ARTH
         | EXP_ARTH moin EXP_ARTH
         | EXP_ARTH mul EXP_ARTH
         | EXP_ARTH divsep EXP_ARTH
         | EXP_ARTH mc_ge EXP_ARTH
         | EXP_ARTH mc_gt EXP_ARTH
         | EXP_ARTH mc_le EXP_ARTH
         | EXP_ARTH mc_lt EXP_ARTH
         | EXP_ARTH mc_ne EXP_ARTH
         | EXP_ARTH mc_eq EXP_ARTH
         | EXP_ARTH mc_and EXP_ARTH
         | EXP_ARTH mc_or EXP_ARTH
         | po EXP_ARTH pf
         | OPERANDE;

OPERANDE: idf
         | idf po INDICE pf
         | idf po idf vig idf pf
         | cst_int
         | cst_real
         | cst_chaine
         | mc_true
         | mc_false;

INDICE: idf
      | cst_int
      | idf vig cst_int
      | cst_int vig cst_int
      | cst_int vig idf;





%%

int main (int argc, char *argv[])
{
   initialisation();

   yyparse(); 
   printf("\n");
   afficher();
 }
 int yywrap ()
 {}
int yyerror ( char*  msg )  
{
    printf ("Erreur Syntaxique a la ligne %d a la colonne %d %s \n", nb_ligne,col);
} 