#include <stdio.h>
#include <stdlib.h>

main(){
       float a,b,c,d,f; //宣告五個浮點數型態的變數，a為攝氏溫度，b為華氏溫度
       //c為起始溫度，d為結束溫度，f為溫度變化量，此三個變數是使使用者輸入，
       //可以更改的數值。 
       printf("請輸入起始溫度\n");
       scanf("%f",&c); //讀取鍵盤輸入的字元，存入c變數中 
       printf("請輸入結束溫度\n");
       scanf("%f",&d);//讀取鍵盤輸入的字元，存入d變數中
       printf("請輸入變化溫度\n");
       scanf("%f",&f);//讀取鍵盤輸入的字元，存入f變數中
        
       for(a=c;a<=d;a+=f){
                               b=(a-32)*5/9;
                               printf("攝氏溫度\t華氏溫度\n");
                               printf("%.0f\t\t%.2f\n",a,b); //%.0f 不輸出小數點後數字 %.2f 輸出到小數點後兩位 
                               }
       system("pause");
       return 0; 
       }
