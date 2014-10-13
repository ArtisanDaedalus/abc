#include <stdio.h>
main(){
       int num;
       int a;
       int b;
       int c; 
       for(num = 1;num<=11;num+=2){
               c = (num-1)/2; 
               for(a = 5;a>c;a--){ 
                     printf(" ");
               }
               for(b = 1;b<=num;b++){
                     printf("*"); 
               }
               printf("\n"); 
       }
       for(num = 9; num>=1;num-=2){
               c = (num-1)/2; 
               for(a = 5;a>c;a--){ 
                     printf(" ");
               }
               for(b = 1;b<=num;b++){
                     printf("*"); 
               }
               printf("\n"); 
       }
       system("pause");
       return 0;         
} 
