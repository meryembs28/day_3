#include<stdio.h>
int main ( ) {
 int n ,l , c,i ;
 printf("veuillez saisir un nbr de lignes svpp :");
 scanf("%d", &n);
 for (l=1 ; l<=n ; l++){
    
        for(i=1; i <= (n-l); i++)
        {
            printf("   ");
        }
        for(c=1; c<=(2*l - 1) ; c++){
        printf ( " * " );
        }
        printf("\n");
 }
}




















