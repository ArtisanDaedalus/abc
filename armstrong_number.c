#include<stdio.h>
#include <math.h>
main(){
       int a;
       int b[2];
       int c[3];
       int d;
       for(a=1;a<=999;a++){
                           if(a<=9){
                                    if(a==pow(a,1)){
                                              printf("%d\n",a);
                                              }
                                    }
                           else if(a>=10 && a<=99){
                                                 b[0] = a%10;
                                                 b[1] = (a- b[0])/10;
                                                 if(a==pow(b[0],2)+pow(b[1],2)){
                                                                                printf("%d\n",a);
                                                                                } 
                                                 }
                           else if(a>=100 && a<=999){
                                c[0] = (a-a%100)/100;
                                c[1] = (a-100*c[0]-(a-100*c[0])%10)/10;
                                c[2] = a-100*c[0]-10*c[1];
                                d = pow(c[2],3)+pow(c[1],3)+pow(c[0],3);
                                if(a==d){
                                                     printf("%d\n",a);
                                                                           } 
                                                     }                           
                           }
       system("pause");
       return 0;
       
       }
