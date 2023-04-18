%{
/*This YACC specification file generates the LALR parser for the program
considered in experiment 4.*/
#include<stdio.h>
int ex(int,int);
%}
%union
{
double dval;
}
%token <dval> DIGIT
%type <dval> expr
%type <dval> term
%type <dval> factor
%type <dval> prod
%%
line: expr '\n' {
printf("%g\n",$1);
};
expr: expr '+' term {$$=$1 + $3 ;}
| expr '-' term {$$=$1 - $3;}
| term;
term: term '*' factor {$$= $1 * $3 ;}
| term '/' factor {$$=$1 / $3;}
| factor;
factor: factor '^' prod {$$=ex($1,$3);}
| prod;  
prod: '(' expr ')' {$$=$2;}
| DIGIT;
%%
int main(){
yyparse();
}
int ex(int a, int b)
{
int i,res=1;
for(i=1;i<=b;i++)
res=res*a;
return res;
}
yyerror(char *s){
printf("%s",s);
}
