#include <stdio.h>
main(){
       char c;
       int a,b,d;
       a=0;
       b=0; 
       d=0;
       while((c=getchar())!=EOF){
                                 putchar(c); 
                                 if(c!='\n'){
                                           a+=1;
                                           b+=1;     
                                 }
                                 else{
                                           printf("��X�r����%d\n",a);
                                           a=0;
                                           d+=1;
                                           }                              
                                 }
       printf("�`��X�r���ơG%d\n",b); 
       printf("�`��X��ơG%d\n",d);
       system("pause");
       return 0;
       }
