#include<stdio.h>
       
       int math_pow(int d,int f); 

main(){
       int a,b;
       int ans;
       a = 0;
       b = 0;
       ans = 0; 
       printf("請輸入基底\n");
       scanf("%d",&a); 
       
       printf("請輸入次方\n");
       scanf("%d",&b);
       ans = math_pow(a,b); 
       printf("%d\n",ans); 
       system("pause");
       return 0 ; 
       }
       
       math_pow(d,f){
                           int c = 0;
                           int n = 1; 
                           for(c= 0 ; c < f ; c++){
                                  n = n*d; 
                                  } 
                           
                           return n; 
                  } 

