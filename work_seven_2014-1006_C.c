#include <stdio.h>
main(){
       char c;
       int a,b,d;
       a=0;
       b=0; 
       d=0;
       while((c=getchar())!=EOF){ 
                                 if(c=='\n'){
                                           d+=1;     
                                 }
                                 else if(c=='\t'){
                                           d+=1;
                                           }
                                 else if(c==' '){
                                           d+=1;
                                      }                              
                                 }
       printf("�`��J���ť���δ���Ÿ��Ωw����@���G%d ��\n",d);
       system("pause");
       return 0;
       }
