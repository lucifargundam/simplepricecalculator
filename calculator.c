#include <stdio.h>

main ()
{
  float p, q;
  char meas[2] = {};
  char ans = 'n';
  
printf ("Hello and welcome to PriceCalculator\n\n\n");
// ******************************************* //
For ( ans == 'y');
// ***888 //
printf ("Please choose abbreviated measurement type:\n");
scanf ("%s", &meas);
// ******************************************** //
printf ("\nPlease Enter Price:\n");
scanf ("%f", &p);
// **************************************** //
printf ("\nPlease Enter Quantity:\n");
scanf ("%f", &q);
// **************************************** //
  float tp = (p / q);
  printf ("\nThe price is %f per %s \n\n", tp, meas);
// *******====>>>>>Reset Button Here<<<<<=======******* //
printf ("Would you like to enter anouther entry? (y\n)")
scanf ("%c", &ans);
Else (break);
}
