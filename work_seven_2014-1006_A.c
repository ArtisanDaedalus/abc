#include <stdio.h>
main(){
       char c;
       int b;
       b=0; 
       while((c=getchar())!=EOF){ 
                                 if(c!='\n'){
                                           b+=1;     
                                 }                   
                                 }
       printf("總輸出字元數：%d\n",b); 
       system("pause");
       return 0;
       }
