#include <stdio.h>
#include <stdlib.h>

main(){
       float a,b,c,d,f; //�ŧi���ӯB�I�ƫ��A���ܼơAa�����ūסAb���ؤ�ū�
       //c���_�l�ūסAd�������ūסAf���ū��ܤƶq�A���T���ܼƬO�ϨϥΪ̿�J�A
       //�i�H��諸�ƭȡC 
       printf("�п�J�_�l�ū�\n");
       scanf("%f",&c); //Ū����L��J���r���A�s�Jc�ܼƤ� 
       printf("�п�J�����ū�\n");
       scanf("%f",&d);//Ū����L��J���r���A�s�Jd�ܼƤ�
       printf("�п�J�ܤƷū�\n");
       scanf("%f",&f);//Ū����L��J���r���A�s�Jf�ܼƤ�
        
       for(a=c;a<=d;a+=f){
                               b=(a-32)*5/9;
                               printf("���ū�\t�ؤ�ū�\n");
                               printf("%.0f\t\t%.2f\n",a,b); //%.0f ����X�p���I��Ʀr %.2f ��X��p���I���� 
                               }
       system("pause");
       return 0; 
       }
