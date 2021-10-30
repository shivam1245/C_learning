#include <stdio.h>
main() 
{ 
     int a[10],b[10],i,j,m,n,k; 
 
     printf("Enter the no. of elements in set A:\n"); 
     scanf("%d",&m); 
     printf("Enter the elements of set A:\n"); 
     for(i=0;i<m;i++) 
     { 
         scanf("%d",&a[i]); 
     } 
     printf("Enter the no. of elements in set B:\n"); 
     scanf("%d",&n); 
     printf("Enter the elements of set B:\n"); 
     for(j=0;j<n;j++) 
     { 
         scanf("%d",&b[j]); 
     } 
     printf("Symmetric deffiernce of set A and B is:\n"); 
     for(i=0;i<m;i++) 
     { 
         k=1; 
         for(j=0;j<n;j++) 
         { 
             if(a[i]==b[j]) 
             { 
                 k=0; 
             } 
         } 
         if(k!=0) 
         printf("%d ",a[i]); 
     } 
     k=0; 
     for(j=0;j<n;j++) 
     { 
         k=1; 
         for(i=0;i<n;i++) 
         { 
             if(b[j]==a[i]) 
             { 
                 k=0; 
             } 
         } 
         if(k!=0) 
         printf("%d ",b[j]); 
     } 
}
