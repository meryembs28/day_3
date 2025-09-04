#include<stdio.h>
int main ( ) {
 int n ,i ;
 printf("veuillez saisir un nbr de votre choix :");
 scanf("%d", &n);
 printf("les facteurs de ce nombre : ");
 for (i=1 ; i<=n ; i++){
    if(n % i == 0){
      printf(" %d " , i)  ;
    }
 }
}