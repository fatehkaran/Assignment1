/*
*  Author: Fateh Karan Singh Sandhu
*  Date: September 3, 2018
*
*  This program will prompt the user for angle1 (in degrees) and
*  refractiveIndex2 and do basic error checking, rejecting any invalid values.
*  It will then compute the angle of refraction using Snell's Law.
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (int argc, char **argv) {

double angle1, angle2;
// angle1 is incidence angle
// angle2 is refracted angle

double refractionIndex1, refractionIndex2;
// refractionIndex1 will be 1 because we assume it's air

refractionIndex1 = 1;

printf ("Please enter angle of incidence: "); // prompt user for angle1
scanf  ("%lf", &angle1);

printf ("Please enter Refraction Index: ");   // prompt user for refractionIndex2
scanf  ("%lf", &refractionIndex2);

double angle1_R = (angle1 / 180) * M_PI; // convert angle1 to radians

angle2 = ( refractionIndex1 / refractionIndex2 ) * sin (angle1_R);

// the above formula computes refracted angle using Snell's Law

double refractedAngle = ( asin (angle2) ) * 180 / M_PI; // convert refracted angle to degrees

if (angle1 >= 90) {
printf ("Incidence angle cannot be greater than or equal to 90 degrees\n");
exit(1);
}

else if (angle1 <= 0) {
printf ("Incidence angle cannot be less than or equal to 0 degrees\n");
exit(1);
}

else {
printf ("Angle of Incidence: %.2f degrees\n", angle1);
printf ("Index of Refraction: %.2f\n", refractionIndex2);
printf ("Angle of Refraction: %.2f degrees\n", refractedAngle); }

  return 0;
}
