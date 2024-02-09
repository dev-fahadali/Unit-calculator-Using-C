#include<stdio.h>
#include<unistd.h>
void menu();
float m_to_cm(float metre);
float km_to_m(float km);
float rad_to_deg(float rd);
float cm_to_m(float cm);
float m_to_km(float mt);
int main(){

     menu();

  
}
//case 1
//Metre to cm....
float m_to_cm(float metre){
    printf("\n\t...You Have Chosen To Convert Meter To Centimetre...\n\n");
    printf("\n\tEnter The Value You Want To Convert In Centimetre :");
    scanf("%f",&metre);
    printf("\n\tCalculating........");
    sleep(2);
    float centimter = metre * 100 ;
    printf("\n\t%.2f Meters Is Equal to : %.1f Centimetres.\n\n",metre,centimter);
}
//case 2
//kilometre to metre....
float km_to_m(float km){
     printf("\n\t...You Have Chosen To Convert kilometre To Meter...\n\n");
    printf("\n\tEnter The Value Kilomtre Want To Convert In Metre :");
    scanf("%f",&km);
    printf("\n\tCalculating........\n");
    sleep(2);
    float metre = km *1000 ;
    printf("\n\t%.1f Kilometre is Equal To %.1f Metre.\n\n",km,metre);
}
//case3
//radian to deree...
float rad_to_deg(float rd){
     printf("\n\t...You have chosen to convert angle from Radian to Degree...\n\n");
    printf("\n\tEnter the value you want to convert in Degree : ");
    scanf("%f", &rd);
    printf("\n\tCalculating........\n");
    sleep(2);
   float degree= rd *57.29;
    printf("\n\t%.2f Degrees is equal to %.1f Radians.\n\n", degree ,rd);
}
//case 4
//centimetre to metre.....
float cm_to_m(float cm){
     printf("\n\t...You have chosen to convert centimetre to Metre...\n\n");
    printf("\n\t\tEnter the value of centimetre you want to convert into metre : ");
    scanf("%f", &cm);
    printf("\n\tCalculating.........\n");
    sleep(2);
    float Metre=cm/100;
    printf("\n\t%.2f Centimetre is Equal TO %.1f Metre\n\n",cm,Metre);
}
//case 5
//case metre to kilometre

float m_to_km(float mt){
printf("\n\t...You have chosen to convert  Metre To Kilometre...\n\n");
printf("\n\tEnter The Value You Want To Convert In KiloMeter :");
scanf("%f",&mt);
printf("\n\tCalculating..............\n");
    sleep(2);
float kilometer= mt /1000 ;
printf("\n\t%.2f Metres is Equal to %.1f Kilometres.\n\n",mt,kilometer);
}
void menu(){
    
    int choice;
    float metre,km,rd,cm,mt;
    int ch;
    int repeatfunc=0;

    do{
    printf("\n\t.....Welcome to Unite Converter.....\n");
printf("\n\t=)Enter Your Desired Conversion Choice\n");
printf("\n\t1-Metre To centimeter\n\t2-kilometre To Metre\n\t3-Radian To Degree\n\t4-Centimeter to Meter\n\t5-Metre To KiloMetre\n");
printf("\n\tEnter your Choice :");
scanf("%d",&choice);

switch (choice)
{
case 1 :
     m_to_cm( metre);
     ++repeatfunc;
     if(repeatfunc==1){
printf("\n\tyou want to continues press 1 for yes press 2 for No : ");
scanf("%d",&ch);}
if(ch == 1 ) {
    
    menu();
    }else if(ch == 2 ){
        printf("\n\tExisting.....\n");
        sleep(2);
        return ;
     }
     

    break;
    case 2:
     km_to_m( km);
     ++repeatfunc;
     if(repeatfunc==1){
printf("\n\tyou want to continues press 1 for yes press 2 for No : ");
scanf("%d",&ch);}
if(ch == 1 ) {
    
    menu();
    }else if(ch == 2 ){
        printf("\n\tExisting.....\n");
        sleep(2);
        return ;
     }
    
break;
    case 3:
     rad_to_deg( rd);
     ++repeatfunc;
     if(repeatfunc==1){
printf("\n\tyou want to continues press 1 for yes press 2 for No : ");
scanf("%d",&ch);}
if(ch == 1 ) {
    
    menu();
    }else if(ch == 2 ){
        printf("\n\tExisting.....\n");
        sleep(2);
        return ;
     }
   
    break;
    case 4:
     cm_to_m( cm);
     ++repeatfunc;
     if(repeatfunc==1){
printf("\n\tyou want to continues press 1 for yes press 2 for No : ");
scanf("%d",&ch);}
if(ch == 1 ) {
    
    menu();
    }else if(ch == 2 ){
        printf("\n\tExisting.....\n");
        sleep(2);
        return ;
     }
    
break;

case 5:
 m_to_km(mt);
 ++repeatfunc;
     if(repeatfunc==1){
printf("\n\tyou want to continues press 1 for yes press 2 for No : ");
scanf("%d",&ch);}
if(ch == 1 ) {
    
    menu();
    }else if(ch == 2 ){
        printf("\n\tExisting.....\n");
        sleep(2);
        return ;
     }

break;
}
}
while(choice!=6);
    }
    

   
   
