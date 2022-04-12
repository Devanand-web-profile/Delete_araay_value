#include <stdio.h> 
 #include <conio.h> 
 int main() 
 { 
     int i, n, j, num, arr [10]; 
    
     printf("\n Enter the number of element the array : " ); 
     scanf(" %d" , &n); 
   for(i=0;i<n;i++) 
   { 
     scanf("%d", &arr[i]); 
   } 
     printf("\n Enter the number to be deleted: "); 
     scanf("%d", &num); 
   for(i=0;i<n;j++) 
   { 
     if(arr[i]==num) 
     { 
       for(j=i;j<n;j++) 
       { 
          arr[j] = arr[j+1]; 
       } 
     } 
        printf("\n The array after deletion is:"); 
          for(i=0;i<n-1;i++) 
          { 
              printf("\t%d",arr[i]); 
          } 
             getch(); 
   } 
         return 0; 
 }