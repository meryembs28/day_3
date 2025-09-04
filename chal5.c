#include<stdio.h>
int main ( ) {
int a , i ;
int s = 0;
printf("veuillez saisir un nbr de votre choix :");
scanf("%d", &a);
i=0;
while(i<=a){
    s += i ;
    i++;
 } 
 printf ( "  la somme  =  %d \n" ,  s);
 
}