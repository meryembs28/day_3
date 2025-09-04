#include<stdio.h>
int main ( ) {
 float n ,i , nt = 0  ;
 float m ;
 do{
  printf("veuillez saisir un nbr de votre choix  ! ");
  scanf("%f", &n);
   nt +=  n;
   i++;
   m = nt / i ; 
 }while(n>0);
        printf (" la moyenne de la somme de tous ces nombres =  %.2f " , m );
    
}