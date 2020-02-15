#include <stdio.h>
int main(){
    int vdu;
     
    vdu=0;
     
    while (vdu % 2 == 0)
    {
        printf("\nDigite valor: ");
        scanf("%d",&vdu);   
    }
    printf ("\nFim");       
    return 0;
 }
  //do while// 
 
/* #include <stdio.h>
 int main(){
    int vdu;
    do 
    {
        printf("\nDigite valor: ");
        scanf("%d",&vdu);   
    }
    while (vdu % 2 == 0);
     
    printf ("\nFim");       
    return 0;
 }
  */ 
