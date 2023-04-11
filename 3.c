#include<stdio.h>
#include<string.h>
void valida(char[]);
void main()
{
    char s[5],v[5];
    int i=0;
    printf("\n Enter any operator:");
    gets(s);
    valida(s);
}
void valida(char s[])
{
    if(strcmp(s,"<=")==0)
    printf("Less than or Equal");
else if(strcmp(s,"<")==0)
    printf("Less than  Equal");
  else  if(strcmp(s,">=")==0)
    printf("Greater than or Equal");
   else if(strcmp(s,">")==0)
    printf("Greater than  Equal");
   else if(strcmp(s,"==")==0)
    printf("Comparison");
   else if(strcmp(s,"=")==0)
    printf("Assignment Operation");
   else if(strcmp(s,"!=")==0)
    printf("Not Equal To");
   else if(strcmp(s,"!")==0)
    printf("Bitwise Not");
   else if(strcmp(s,"&&")==0)
    printf("Logical And");
   else if(strcmp(s,"&")==0)
    printf("Bitwise And");
  else  if(strcmp(s,"||")==0)
    printf("Logical Or");
   else if(strcmp(s,"|")==0)
    printf("Bitwise Or");
   else if(strcmp(s,"++")==0)
    printf("Increment");
   else if(strcmp(s,"--")==0)
    printf("Decrement");
    else if(strcmp(s,"+")==0)
    printf("Addition");
    else if(strcmp(s,"-")==0)
    printf("Subtraction");
    else if(strcmp(s,"**")==0)
    printf("Exponentiation");
    else if(strcmp(s,"*")==0)
    printf("Multiplication");
    else if(strcmp(s,"//")==0)
    printf("Integer Division");
    else if(strcmp(s,"/")==0)
    printf("Division");
    else if(strcmp(s,"%")==0)
    printf("Remainder");
    else
    printf("invalid Operator");
}
