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
                                           printf("輸出字元數%d\n",a);
                                           a=0;
                                           d+=1;
                                           }                              
                                 }
       printf("總輸出字元數：%d\n",b); 
       printf("總輸出行數：%d\n",d);
       system("pause");
       return 0;
       }
