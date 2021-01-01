#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float sum(float num1,float num2);
float min(float num1,float num2);
float mul(float num1,float num2);
float divi(float num1,float num2);
float powe(float num1,float num2);
float squ(float num1);
void end();
int menu();


int main()
{
   int n;
   float num1,num2;
   float total1,total2,total3,total4,total5,total6;
   float temp;
   int i=0;
   char yes,ans;

   printf("\t\t**********CALCULATOR*********\n\n");


   do
   {
     n = menu();

     if(n>6)
     {
         printf("\n***Invalid Input****\n");
         end();
         return -1;

     }
     switch(n)
    {
    case 1:
        if(i==1)
        {
           num1 = temp;
        }
        else
        {
            printf("Enter number 1 : ");
            scanf("%f",&num1);
        }
        printf("Enter number 2 : ");
        scanf("%f",&num2);
        total1 = sum(num1,num2);
        printf("Answer = %.2f",total1);
        temp = total1;
        break;

    case 2:
        if(i==1)
        {
           num1 = temp;
        }
        else
        {
            printf("Enter number 1 : ");
            scanf("%f",&num1);
        }

        printf("Enter number 2 : ");
        scanf("%f",&num2);

        total2 = min(num1,num2);
        printf("Answer = %.2f",total2);
        temp = total2;
        break;

    case 3:
        if(i==1)
        {
           num1 = temp;
        }
        else
        {
            printf("Enter number 1 : ");
            scanf("%f",&num1);
        }

        printf("Enter number 2 : ");
        scanf("%f",&num2);

        total3 = mul(num1,num2);
        printf("Answer = %.2f",total3);
        temp = total3;
        break;

    case 4:
        if(i==1)
        {
           num1 = temp;
        }
        else
        {
            printf("Enter number 1 : ");
            scanf("%f",&num1);
        }

        printf("Enter number 2 : ");
        scanf("%f",&num2);

        total4 = divi(num1,num2);
        printf("Answer = %.2f",total4);
        temp = total4;
        break;

   case 5:
       if(i==1)
        {
           num1 = temp;
        }
        else
        {
            printf("Enter number 1 : ");
            scanf("%f",&num1);
        }

        printf("Enter power : ");
        scanf("%f",&num2);

        total5 = powe(num1,num2);
        printf("Answer = %.2f",total5);
        temp = total5;
        break;

    case 6:
        if(i==1)
        {
           num1 = temp;
        }
        else
        {
            printf("Enter number 1 : ");
            scanf("%f",&num1);
        }
        total6 = squ(num1);
        printf("Answer = %.2f",total6);
        temp = total6;
        break;

   }

    printf("\n\nDo you want to do more calculation (yes = y/no = n): ");
    scanf(" %c",&yes);
    printf("Do you want to do more calculation to %.2f (yes = y/no = n) : ",temp);
    scanf(" %c",&ans);



    if(ans == 'y' || ans == 'Y')
    {
        i = 1;
    }

  }
  while(yes == 'y' || yes == 'Y');

   if(yes != 'y' || yes == 'n' || yes == 'N')
   {
       printf("\n\n\n\t\t~~~~~THANK YOU~~~~~\n");
       printf("Created by : ~SaSiYa~ 2021;\t\t");
       printf("BiT Calculator 1.0\n");
       return -1;
   }



    return 0;
}

int menu()
{
    int n;
    printf("\n~~~~~Main Menu~~~~~\n");
    printf("press 1 to addition\n");
    printf("press 2 to subtraction\n");
    printf("press 3 to multiplication\n");
    printf("press 4 to division\n");
    printf("press 5 to get power\n");
    printf("press 6 to get root\n\n");

    printf("Enter your response : ");
    scanf("%d",&n);
    return n;
}

float sum(float num1,float num2)
{
    float total;

    total = num1 + num2;

    return total;

}

float min(float num1,float num2)
{
    float total = num1 - num2;
    return total;

}

float mul(float num1,float num2)
{
    float total = num1 * num2;
    return total;

}

float divi(float num1,float num2)
{
    float total = num1 / num2;
    return total;
}

float powe(float num1,float num2)
{
    float total = pow(num1,num2);
    return total;
}

float squ(float num1)
{
    float total = sqrt(num1);
    return total;
}

void end()
{
    printf("\n\n\n\t\t++++++THANK YOU++++++\n");
    printf("Created by : ~SaSiYa~ 2021;\t\t");
    printf("BiT Calculator 1.0\n");
    return -1;
}
