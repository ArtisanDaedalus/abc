#include <stdio.h>
main(){
       int c;
       int num_count[10];
       int ascii_code,num;
       ascii_code = 48;
       num = 0;
       for(num = 0 ; num <=9 ; num++){
               num_count[num] = 0; 
                                      } 
       while((c=getchar())!=EOF){
                                 ascii_code = 48; 
                                 for(num = 0;num<=9;num++){ 
                                                           if(c==ascii_code){
                                                                             num_count[num]++;     
                                                                             }
                                                           ascii_code++;
                                                           }                       
                                 }
       for(num = 0 ; num <=9 ; num++){ 
       printf("�Ʀr%d�@��J%d��\n",num,num_count[num]);
       } 
       system("pause");
       return 0;
       }
