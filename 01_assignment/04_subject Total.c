#include<stdio.h>
#include<conio.h>
int main()
{
    int Phy, Chem, Math;
    int total;
    float Percentage;

     printf("\n Marks in Physics :");
     scanf("%d",&Phy);

     printf("\n Marks in Chemistry :");
     scanf("%d",&Chem);

     printf("\n Marks in Mathematics :");
     scanf("%d",&Math);

     total = Phy+Chem+Math;
    float percentage=total/3.0;

     printf("\n total Marks =%d",total);
     printf("\n precentage=%.2f",percentage);

     return 0;
}
