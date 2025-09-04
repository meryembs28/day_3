#include<stdio.h>
int main ( ) {
int a , i ;
int r = 1;
printf("veuillez saisir un nbr de votre choix :");
scanf("%d", &a);
i=1;
while(i<=a){
  r = 2*i - 1;  
  printf ( " %d , " ,  r);  
  i++ ;
}
}