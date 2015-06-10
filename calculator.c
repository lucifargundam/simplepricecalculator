#include <stdio.h>

main ()
{
  float p, q;
  char meas;

printf ("Hello and welcome to PriceCalculator\n\n\n");
// ******************************************* //
printf ("Please choose abbreviated measurement type:\n");
scanf ("%2c", &meas);
// ******************************************** //
printf ("\nPlease Enter Price:\n");
scanf ("%f", &p);
// **************************************** //
printf ("\nPlease Enter Quantity:\n");
scanf ("%f", &q);
// **************************************** //
  float tp = (p / q);
  printf ("\nThe price is %f per %c \n\n", tp, meas);
// *******====>>>>>Reset Button Here<<<<<=======******* //
}
