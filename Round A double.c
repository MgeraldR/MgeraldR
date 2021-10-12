/*Given a non-negative double, this operation prints the closest integer
less than the number if the fractional part of the double is less than 0.5,
otherwise it prints the closest integer greater than double. Do not use any C library functions.
C programming*/

#include <stdio.h>

int main(){

 double L;
  printf("Type which double you want  to round\n");
  scanf("%lf",&L);    //asks the user to type the number they want "L" to be.
  int x=(int)(L+0.5)*1;    //casts L to an integer.
  int i;
  i=x;     //Assings the int x to int i.
  printf("%d",x);
}
/*
Example: if User input is  3.6 
Output: 4

If user input is 3.4
Output: 3
*/

/*So, if we type a double that has a fraction less than 0.5 the integer will stay the same but if the fractional part is 0.5 or greater
then the program will round it to the next integer. In this case "3.6: the fraction is greater than 0.5 so it will round it to
the next number. For the second example, the double has a fractional part of 0.4, which is less than 0.5 so the program rounds
it up to the nearest integer which is 3.*/
