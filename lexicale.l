%{
	#include "syntax.tab.h"  
	#include "ts.h" 
  #include "quad.h"
  
   int nb_ligne = 1;
   int col = 1;
   char sauvType [20];

	extern YYSTYPE yylval;
  #define YY_DECL int yylex()

%}


letter [a-zA-Z]
chiffre [0-9]
IDF {letter}({letter}|{chiffre}|_)*
int [-]?{chiffre}+
real {int}.{chiffre}+
chaine \"[^"]*\"
comment "%".*  
tabl {letter}({letter}|{chiffre}){0,9}\({chiffre}+(,{chiffre}+)?\)



%%

"PROGRAM"    { rechercher(yytext,"Mot cle",0,0, 1); printf("MC PROGRAM\n"); col += yyleng ; return mc_prog ;} 
"END"        {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC END\n"); col += yyleng ; return mc_end ;} 
"ROUTINE"    {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC ROUTINE\n"); col += yyleng ; return mc_routine ;} 
"ENDR"       { rechercher(yytext,"Mot cle",0,0, 1); printf("MC ENDR\n"); col += yyleng ; return mc_endr ;} 

"READ"       {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC READ\n"); col += yyleng ; return mc_read ;} 
"WRITE"      {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC WRITE\n"); col += yyleng ; return mc_write ;} 

"IF"       {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC IF\n"); col += yyleng ; return mc_if ;} 
"THEN"       {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC THEN\n"); col += yyleng ; return mc_then ;} 
"ELSE"       { rechercher(yytext,"Mot cle",0,0, 1); printf("MC ELSE\n"); col += yyleng ; return mc_else ;} 
"ENDIF"      {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC ENDIF\n"); col += yyleng ; return mc_endif ;} 

"DOWHILE"    {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC DOWHILE\n");col += yyleng ; return mc_dowhile ; } 
"ENDDO"      {  rechercher(yytext,"Mot cle",0,0, 1);printf("MC ENDDO\n"); col += yyleng ; return mc_enddo ;} 

"EQUIVALENCE" { rechercher(yytext,"Mot cle",0,0, 1); printf("MC EQUIVALENCE\n"); col += yyleng ; return mc_equivalence ;} 

"INTEGER"    { rechercher(yytext,"Mot cle",0,0, 1);  printf("MC INTEGER\n"); col += yyleng ; return mc_integer ;} 
"REAL"       { rechercher(yytext,"Mot cle",0,0, 1); printf("MC REAL\n"); col += yyleng ; return mc_real ;} 
"LOGICAL"    { rechercher(yytext,"Mot cle",0,0, 1); printf("MC LOGICAL\n"); col += yyleng ; return mc_logical ;} 
"CHARACTER"  { rechercher(yytext,"Mot cle",0,0, 1); printf("MC CHARACTER\n"); col += yyleng ; return mc_char ;} 
"DIMENSION"  { rechercher(yytext,"Mot cle",0,0, 1); printf("MC DIMENSION\n"); col += yyleng ; return mc_dimension ;} 

".OR."         {rechercher(yytext,"Mot cle",0,0, 1);  printf("op OR\n"); col += yyleng ; return mc_or ;} 
".AND."        { rechercher(yytext,"Mot cle",0,0, 1); printf("op AND\n"); col += yyleng ; return mc_and ;} 
".GT."          { rechercher(yytext,"Mot cle",0,0, 1); printf("op GT\n"); col += yyleng ; return mc_gt ;} 
".GE."         { rechercher(yytext,"Mot cle",0,0, 1); printf("op GE\n"); col += yyleng ; return mc_ge ;} 
".EQ."         { rechercher(yytext,"Mot cle",0,0, 1); printf("op EQ\n"); col += 2 ; return mc_eq ;} 
".NE."         { rechercher(yytext,"Mot cle",0,0, 1); printf("op NE\n"); col += yyleng ; return mc_ne ;} 
".LE."         { rechercher(yytext,"Mot cle",0,0, 1); printf("op LE\n"); col += yyleng ; return mc_le ;} 
".LT."          { rechercher(yytext,"Mot cle",0,0, 1); printf("op LT\n"); col += yyleng ; return mc_lt ;}
"+"          { rechercher(yytext,"SEP",0,0, 2);  printf("op +\n"); col += yyleng ; return plus;} 
"-"          { rechercher(yytext,"SEP",0,0, 2); printf("op -\n"); col += yyleng ; return moin ;} 
"*"          { rechercher(yytext,"SEP",0,0, 2); printf("op *\n"); col += yyleng ; return mul ;} 
"/"          { rechercher(yytext,"SEP",0,0, 2); printf("op /\n"); col += yyleng ; return divsep ;} 

"CALL"       {  rechercher(yytext,"Mot cle",0,0, 1);  printf("MC CALL\n"); col += yyleng ; return mc_call; } 
"TRUE"      {rechercher(yytext,"Mot cle",0,0, 1); rechercher(yytext,"CONSTANT","LOGICAL",1,0); printf("MC TRUE\n"); col += yyleng ; return mc_true ;}
"FALSE"      {rechercher(yytext,"Mot cle",0,0, 1);  rechercher(yytext,"CONSTANT","LOGICAL",0,0);  printf("MC FALSE\n"); col += yyleng ; return mc_false ;}

{IDF}        { 
            if(strcmp(sauvType,"CHARACTER")==0)
            insereChars(yytext,"");
            rechercher(yytext,"IDF"," ",0, 0);
            if (yyleng > 10){
              printf("Erreur Lexical: IDF trop long a la ligne %d \n", nb_ligne);
              
            }else {
            printf("IDF  %s\n", yytext); 
            }

             yylval.str = strdup(yytext);
             col += yyleng ; 
             return idf ;
  
  } 

{int}     {
  rechercher(yytext,"CONSTANT","INTEGER",atof(yytext),0);
  
   if(atof(yytext) < -32768 || atof(yytext) > 32767 ) {
    printf("Warning ! %s n'est pas inclus dans l'Intervalle des valeurs possibles\n",yytext) ;
   }
   else{
       printf("Integer - %s\n", yytext);

   }
   yylval.entier = atof(yytext);
   col += yyleng ; 
   return cst_int ;
    } 

{real}    {
  rechercher(yytext,"CONSTANT","REAL",atof(yytext),0);
 if(atof(yytext) < -32768.32767 || atof(yytext) > 32767.32767 ) {
    printf("Warning ! %s n'est pas inclus dans l'Intervalle des valeurs possibles\n",yytext) ;
   }
   else{
 printf("Real - %s\n", yytext); 
   }
 
 col += yyleng ; 
yylval.reel = atof(yytext);
 return cst_real ;
  
  
  } 

{chaine} {
     
    rechercher(yytext,"CONSTANT","CHARACTER",atof(yytext),0);
    printf("Character - %s\n", yytext);
    col += yyleng ; 
             yylval.str = strdup(yytext);
    return cst_chaine ;
}





"="          { rechercher(yytext,"SEP",0,0, 2); printf("SEP =\n"); col += yyleng ; return aff ; } 
";"          { rechercher(yytext,"SEP",0,0, 2);  printf("SEP ;\n"); col += yyleng ; return pvg ;} 
","          {  rechercher(yytext,"SEP",0,0, 2);printf("SEP ,\n"); col += yyleng ; return vig ; } 
"("          {  rechercher(yytext,"SEP",0,0, 2);printf("SEP PE\n");col += yyleng ; return po ; } 
")"          {  rechercher(yytext,"SEP",0,0, 2);printf("SEP PF\n"); col += yyleng ; return pf ; } 
{comment}   {
  // printf("Comment : %s \n",yytext);
                

 }

[ \t]        { 


} 

\n          { nb_ligne++;  col=0; }

.           { 
 printf("Erreur Lexical a la line %d col %d : Unrecognized character: %s\n" ,nb_ligne, col, yytext);            }

%%
