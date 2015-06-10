#include <stdio.h>

main ()
{
  char c;
  double p, q;
  double tp = (p / q);

  printf ("Hello and welcome to PriceCalculator\n");
// ******************************************* //
printf ("Please choose abbreviated measurement type:\n");
scanf ("%4s", c);
// ******************************************** //
printf ("Please Enter Price:\n");
scanf ("%g", p);
// **************************************** //
printf ("Please Enter Quantity:\n");
scanf ("%g", q);
// **************************************** //
printf ("The price per &meas is %g %c\n", tp, c);
// *******====>>>>>Reset Button Here<<<<<=======******* //
}
