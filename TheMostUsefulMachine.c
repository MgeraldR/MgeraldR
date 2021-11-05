#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Gerald Rosa
ID:00323645
Project 1 the most useful machine
========================================================================
This programs allows the user to perform various mathematical operations.
The user can choose which one they want to perform by choosing from a menu. */

void Avrg(int r1, int r2, int r3, int r4, int r5,int su);

void power( int j,   int w,   int c,   int s,   int k);

void close(double d1, double d2);

void max(int rm1, int rm2, int rm3);

void letter(char cx);




int main(void)
{
 double n1, n2, n3, n4,n5,sum,avg, num1, num2;//declaring doubles inside main
    char p,ch;//declaring chars inside main
   int i,choice, numb1, numb2, numb3;//declaring ints inside main
//Presents a menu that the user will be able to choose from
        printf("1,Enter an ASCII character and find its integer value:\n");
        printf("2, Find the average of 5 numbers: \n");
        printf("3,Powpow\n");
        printf("4, Close enough\n");
        printf("5, Even or odd?\n");
        printf("6, Find the Max integer\n");
        printf("7, Is not a letter\n");
        printf("8, Round it up\n");
        printf("9, Quit: \n");
        printf("choose from the menu: ");

        scanf("%d", &choice);//user is prompted to choose the operator.
    if (choice == 1)//if user chooses 1 then the first operation executes.
    {

        printf("Enter a character\n");
        scanf("%c", &p);
        scanf("%c", &p);
        printf("\nThe ASCII value of the character is :%d\n", p);
        printf("Thanks!!!");

    }
    else if (choice == 2)
    {
         int n1, n2, n3, n4,n5,sum,avg;
        printf("Enter the five numbers you want to find the average of:\n");
        scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
         Avrg(n1,n2,n3,n4,n5,sum);
         printf("Thanks!!!");

    }
    else if (choice == 3)
    {
        int j, w,c,s,k;
        printf("Enter the numbers: ");
        scanf("%d%d%d",&j,&w,&c);
        power(j,w,c,s,k);
        printf("Thanks!!!");


    }
    else if (choice == 4)
    {

        printf("Enter your  first double: ");
        scanf("%lf", &num1);
        printf("Enter your second double: ");
        scanf("%lf", &num2);
        printf(" The difference between the two: %lf\n", num1-num2);
         close(num1,num2);//close is calle with num1, num2
        printf("Thanks!!!");

    }
    else if (choice == 5)
    {

        int i;
        printf("Enter a number: ");
        scanf("\n%d", &i);
    if (i % 2 == 0)
    {//if the number is divisible by 2 then print True else false.
        printf("True\n");
        printf("Thanks!!!");
    }
    else
    {
        printf("False\n");
        printf("Thanks!!!");
    }



    }
    else if (choice == 6)
    {

        printf("Enter 3 digit\n");
//User is prompted to enter 3 different numbers
        scanf("%d%d%d", &numb1,&numb2,&numb3);
        max(numb1,numb2,numb3);//max is calle
        printf("Thanks!!!");
    }
    else if (choice == 7)
    {

        printf("Enter a character that is not inside the Alphabet: ");
        scanf("%c",&ch);
        scanf("%c",&ch);
        letter(ch);// ch calls function letter
        printf("Thanks!!!");

    }
    else if (choice == 8)
    {

        double L;
        printf("Enter the double you want to round: ");
        scanf("%lf",&L);//
        int op=(int)(L+0.5)*1;//casts L from a double to an integer
        int de;
        de=op;//assings int op to int de.
        printf("The double rounded to:%d\n",op);
        printf("Thanks!!!");
    }
    else if (choice == 9)
    {
        return 0;
    }

    else
    {
        printf("Not a valid choice \n");
        printf("Thanks!!!");
    }





    return(0);

}

void Avrg(int r1, int r2, int r3, int r4, int r5,int su)
{
    su=r1 + r2 + r3 + r4 + r5;
    double av;
     av= (double) su / 5;
    printf("\nThe Average is :%lf\n", av);

}
void power( int j,   int w,   int c,   int s,   int k)
{
    s=pow(j,w);
    k=pow(s,c);
    printf("Result %d\n", k);
}

void close(double d1, double d2)
{
    if ((abs(d1 - d2 < 0.0001)))
    {
        printf("Return True\n");
    }
   else
    {
        printf("Return False\n");
    }
}

void max(int rm1, int rm2, int rm3)
   {

     if (rm1 > rm2)
    {
    if (rm1 > rm3)
    {
        printf("\nThe Largest integer of the three is:  %d\n",rm1);
    }
    else
    {
        printf("\nThe Largest integer of the three is:  %d\n",rm3);
    }
    }
    else if (rm2 > rm3)
    {
        printf("\nThe Largest integer of the three is:  %d\n",rm2);
    }
    else
    {
        printf("\nThe Largest integer of the three is: %d\n",rm3);
    }

}

void letter(char cx)
{
//if the imput of the user is [a-z] or [A-Z] return false else return true.
    if ((cx >= 'a' && cx<='z') || (cx >= 'A' && cx <='Z'))
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }

}