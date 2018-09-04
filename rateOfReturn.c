/*  Author: Fateh Karan Singh Sandhu
*   Date: September 3, 2018
*
*   This program prompts user for initial investment and final value
*   and computes the annualized rate of return.
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (int argc, char **argv) {

double initialValue, finalValue;

double years, weeks, days;

printf("Please enter Initial Investment: ");
scanf ("%lf", &initialValue);

printf("Please enter Final Value: ");
scanf ("%lf", &finalValue);

printf("Please enter years: ");
scanf ("%lf", &years);

printf("Please enter weeks: ");
scanf ("%lf", &weeks);

printf("Please enter days: ");
scanf ("%lf", &days);

if ( initialValue < 0 || finalValue < 0 ) {
  printf ("Inital or Final Value cannot be less than zero\n");
  exit(1);
}

else if (initialValue > finalValue) {
  printf("Initial value cannot be greater than Final Value\n");
  exit(1);
}
else if (years < 0 || weeks < 0 || days < 0) {
  printf("Input for years, weeks or days cannot be negative\n");
  exit(1);
}
else if (weeks > 52 || days > 7) {
  printf("Value of weeks cannot be over 52 and value of days cannot be over 7\n");
  exit(1);
}
else if (weeks == 52 && days!= 0){
  printf("There cannot be more than zero days if weeks are 52\n");
  exit(1);
}

double t = ( (years*365)+(weeks*7)+(days) ) / 365;

double FI = finalValue / initialValue;

double reciprocalT = 1 / t ;

double annualzedRateOfReturn;

annualzedRateOfReturn = (( pow (FI, reciprocalT) ) - 1) * 100;

printf ("Initial Value: $%.2f\n", initialValue);
printf ("Final Value: $%.2f\n", finalValue);
printf ("Years: %f\n", t);
printf ("Annualized Rate of Return: %.3f %%\n", annualzedRateOfReturn);

  return 0;
}
