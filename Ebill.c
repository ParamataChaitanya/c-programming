#include <stdio.h>
int main() {
 float units, bill;
 const float fixed_charge = 50.0; // Fixed charge
 float rate;
 // Prompt the user to enter the number of units consumed
 printf("Enter the number of units consumed: ");
 scanf("%f", &units);
 // Calculate bill based on units consumed
 if (units <= 100) {
 rate = 1.0; // ?1 per unit
 } else if (units <= 300) {
 rate = 2.0; // ?2 per unit
 } else if (units <= 500) {
 rate = 3.0; // ?3 per unit
 } else {
 rate = 5.0; // ?5 per unit
 }
 // Calculate total bill
 bill = fixed_charge + (units * rate);
 // Display the total bill
 printf("Total electricity bill: ?%.2f\n", bill);
 return 0;
}