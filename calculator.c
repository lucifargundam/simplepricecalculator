#include <stdio.h>

main ()
{
  float p, q;
  char meas;

printf ("Hello and welcome to PriceCalculator\n");
// ******************************************* //
printf ("Please choose abbreviated measurement type:\n");
scanf ("%2c\n", &meas);
// ******************************************** //
printf ("Please Enter Price:\n");
scanf ("%f", &p);
// **************************************** //
printf ("Please Enter Quantity:\n");
scanf ("%f", &q);
// **************************************** //
  float tp = (p / q);
  printf ("The price per %c is %f %c \n", meas, tp, meas);
// *******====>>>>>Reset Button Here<<<<<=======******* //
}
