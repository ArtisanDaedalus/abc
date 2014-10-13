#include <stdio.h>
main(){
       char c;
       int d;
       d=0;
       while((c=getchar())!=EOF){
                                 if(c=='\n'){
                                           d+=1;     
                                 }                       
                                 }
       printf("總輸出行數：%d\n",d);
       system("pause");
       return 0;
       }
