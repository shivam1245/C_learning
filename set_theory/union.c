#include <stdio.h>
main() 
{ 
     int a[100],b[100],u[200],i,j,k=0,l,m,n; 

     printf("Enter the no. of elements on set A:\n"); 
     scanf("%d",&m); 
     printf("Enter the elements of set A:\n"); 

     for(i=0;i<m;i++) 
     scanf("%d",&a[i]); 

     printf("Enter the no of elements in set B:\n"); 
     scanf("%d",&n); 
     printf("Enter the elements of set B:\n"); 

     for(i=0;i<n;i++) 
     scanf("%d",&b[i]); 

     for(i=0;i<m;i++) 
     { 
         u[k]=a[i]; 
         k++; 
     } 
     for(i=0;i<n;i++) 
     { 
         l=1; 
         for(j=0;j<m;j++) 
         { 
             if(b[i]==a[j]) 
             {
                 l=0; 
                 break; 
             } 
          } 
         if(l) 
         { 
             u[k]=b[i]; 
             k++; 
         } 
     } 
     printf("UNION of the given set is:\n"); 
     for(i=0;i<k;i++) 
     { 
          printf("%d ",u[i]); 
     }  
 }
