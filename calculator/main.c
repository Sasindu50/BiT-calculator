#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float sum(float num1,float num2);//sum function
float min(float num1,float num2);//substraction  function
float mul(float num1,float num2);//multiplication function
float divi(float num1,float num2);//devision function
float powe(float num1,float num2);//power function
float squ(float num1);//square function
void end();//end statements
int menu();//main menu
long d2b(long num);//binary to decimal
long d2o(long num);//decimal to octal
char d2h(long num);//decimal to hexa
long b2d(long num);//binary to decimal
long b2o(long num);//binary to octal
long b2h(long num);//binary to hexa
long o2b(int num);//octal to binary
long o2d(int num);//octal to decimal
char h2b(char h[]);//hexa to binary
long h2o(char h[]);//hexa to octal
long h2d(char h[]);//hexa to decimal
int conversion();//conversion menu


int main()
{
   int n;
   float num1,num2;
   float total1,total2,total3,total4,total5,total6;
   float temp;
   int i=0;
   char yes,ans;
   long d;
   char s;
   char h[100];
   int k;
   long b;
   int result;
   long a;

   printf("\t\t**********CALCULATOR*********\n\n");


   do
   {
     n = menu();//call the menu function

     if(n>7)//check the number
     {
         printf("\n***Invalid Input****\n");
         end();
         return -1;

     }
     switch(n)//check the menu number
    {
    case 1://call the sum function
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

    case 2://call the substraction function
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

    case 3://call the multiplication function
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

    case 4://call the devision function
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

   case 5://call the power function
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

    case 6://cal the square function
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

    case 7://call the conversion menu
         result = conversion();

        switch(result)
        {
        case 2://binary to decimal
            printf("\nenter decimal number : ");
            scanf("%ld",&d);
            long a = d2b(d);

            printf("Answer = %ld",a);
            break;

        case 8://decimal to octal
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();
            /*printf("\nEnter decimal number : ");
            scanf("%ld",&d);
             a = d2o(d);

            printf("Answer = %ld",a);*/
            break;

        case 16://decimal to hexa
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();

            /*printf("\nEnter decimal number : ");
            scanf("%ld",&d);

            char s = d2h(d);

            printf("Answer = %c",s);*/
            break;

        case 21://binary to decimal
            printf("\nEnter binary number : ");
            scanf("%ld",&d);

             a = b2d(d);

            printf("Answer = %ld",a);
            break;

        case 28 ://binary to octal
            printf("\nEnter binary number : ");
            scanf("%ld",&d);

             a = b2o(d);

            printf("Answer = %ld",a);
            break;

        case 216://binary to hexa
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();
            /*printf("\nEnter binary number : ");
            scanf("%ld",&d);

             a = b2h(d);

            printf("Answer = %ld",a);*/
            break;

        case 82://octal to decimal
            printf("\nEnter octal umber : ");
            scanf("%d",&k);

             a = o2b(k);
            printf("Answer = %ld",a);
            break;

        case 810://octal to decimal
            printf("\nEnter octal number : ");
            scanf("%d",&k);

             a = o2d(k);

            printf("Asnwer = %ld",a);
            break;

        case 816://octal to hexa
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();
            /*printf("\nEnter octal number : ");
            scanf("%d",&k);

             a = o2b(k);
             b = b2h(a);


            printf("Answer = %ld",b);*/
            break;
//hexa to binary
        case 162:
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();
            /*printf("\nEnter Hexa-decimal number : ");
            scanf("%s",h);

             h2b(h);*/
             break;

        case 168://hexa to octal
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();
            /*printf("\nEnter Hexa-decimal number : ");
            scanf("%s",h);
             a = h2o(h);
            printf("Answer = %ld",a);*/
            break;
        case 1610://hexa to decimal
            printf("\n\n~~~~Sorry!!! this function is under construction~~~~\n\n");
            end();
            /*printf("\nEnter Hexa-decimal number : ");
            scanf("%s",h);
             a= h2d(h);
            printf("Answer = %ld",a);*/
            break;




    }

   }

    printf("\n\nDo you want to do more calculation (yes = y/no = n): ");
    scanf(" %c",&yes);
    printf("Do you want to do more calculation to %.2f (yes = y/no = n) : ",temp);
    scanf(" %c",&ans);



    if(ans == 'y' || ans == 'Y')//repetition checking
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

int menu()//menu function
{
    int n;
    printf("\n~~~~~Main Menu~~~~~\n");
    printf("press 1 to addition\n");
    printf("press 2 to subtraction\n");
    printf("press 3 to multiplication\n");
    printf("press 4 to division\n");
    printf("press 5 to get power\n");
    printf("press 6 to get root\n");
   printf("press 7 to number system conversion\n");

    printf("Enter your response : ");
    scanf("%d",&n);
    return n;
}

float sum(float num1,float num2)//sum function
{
    float total;

    total = num1 + num2;

    return total;

}

float min(float num1,float num2)//substraction function
{
    float total = num1 - num2;
    return total;

}

float mul(float num1,float num2)//multiplication function
{
    float total = num1 * num2;
    return total;

}

float divi(float num1,float num2)//devision function
{
    float total = num1 / num2;
    return total;
}

float powe(float num1,float num2)//power function
{
    float total = pow(num1,num2);
    return total;
}

float squ(float num1)//square function
{
    float total = sqrt(num1);
    return total;
}

int conversion()//conversion menu
{
    int n;

    printf("\n~~~~CONVERSION~~~~\n");
    printf("press 2 to decimal to binary conversion\n");
    printf("press 8 to decimal to octal conversion\n");
    printf("press 16 to decimal to hexa-decimal conversion\n");
    printf("press 21 to binary to decimal conversion\n");
    printf("press 28 to binary to octal conversion\n");
    printf("press 216 to binary to hexa-decimal conversion\n");
    printf("press 82 to octal to binary conversion\n");
    printf("press 810 to octal to decimal conversion\n");
    printf("press 816 to octal hexa-decimal conversion\n");
    printf("press 162 to hexa-decimal to binary conversion\n");
    printf("press 168 to hexa-decimal to octal conversion\n");
    printf("press 1610 to hexa-decimal to decimal conversion\n");

    printf("\nEnter your response : ");
    scanf("%ld",&n);

    return n;

}

long d2b(long num)//decimal to binary
{
    long bin=0,rem=0,place=1;

    while(num)
    {
        num = num/2;
        rem = num%2;
        bin = bin + (rem * place);
        place = place * 10;
    }

    return bin;
}

char d2h(long num)//decimal to hexa
{

    int i=0;
    char digit[100];


   while(num >0)
   {
       int rem = num %16;
       if(rem <10)
       {
           digit[i] = '0' +rem;
       }
       else
       {
           digit[i] = 'A' + (rem -10);

        }

        num = num /16;
        i++;

   }
   while(i--)
   {
       return digit[i];
   }

}

long b2d(long num)//binary to decimal
{
    long dec=0,place=1;


    while(num!=0)
    {
      int rem = num % 10;
      dec = dec + (rem*place);
      num = num /10;
      place = place *2;
    }

  return dec;
}

long b2o(long num)//binary to octal
{
    long dec=0,i=0;

    while(num != 0)
    {
      long rem = num %10;
      num = num / 10;
      dec = dec + rem * pow(2,i);
      i++;
    }

  return dec;
}
long o2d(int num)//octal to decimal
{

    long dec=0,k=0,rem;



    while(num)
    {
        rem=num%10;
        dec=dec+rem*pow(8,k);
        num = num/10;
        k++;

    }

    return dec;
}

long o2b(int num)//octal to binary
{
    //printf("Sorry!!! this function is underconstruction\n\n");
    int rem=0,place=0,dec=0;
    long bin=0;



    while(num)
    {
        rem = num%10;
        dec = dec + rem*pow(8,place);
        num = num/10;
        place++;
    }

    place=1;
    rem=0;
    while(dec)
    {
        rem=dec%2;
        bin=bin+(rem*place);
        dec=dec/2;
        place=place*10;

    }


    return bin;

}



void end()//end function
{
    printf("\n\n\n\t\t++++++THANK YOU++++++\n");
    printf("Created by : ~SaSiYa~ 2021;\t\t");
    printf("BiT Calculator 1.5\n");

}
