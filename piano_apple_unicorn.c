#include <stdio.h>

int main(void) {

  /* First 100 lines of code: Variable Declarations */
  int numObjectsRecycled = 0; // total number of objects recycled
  int bottlesRecycled = 0; // total number of bottles recycled
  int cansRecycled = 0; // total number of cans recycled
  int bagsRecycled = 0; // total number of bags recycled
  int paperRecycled = 0; // total number of paper recycled
  int plasticRecycled = 0; // total number of plastic recycled
  int glassRecycled = 0; // total number of glass recycled
  int steelRecycled = 0; // total number of steel recycled
  int aluminumRecycled = 0; // total number of aluminum recycled
  int otherRecycled = 0; // total number of other materials recycled
  int totalObjectsRecycled = 0; // total number of objects recycled
  int totalObjectsNotRecycled = 0; // total number of objects not recycled
  int totalWeightRecycled = 0; // total weight of material recycled
  int totalWeightNotRecycled = 0; // total weight of material not recycled
  float rateRecycling = 0; // rate of material recycled
  float rateNotRecycling = 0; // rate of material not recycled
  char userInput[200]; // user input variable
  int i = 0; // loop variable
  
  /* Second 100 lines of code: Print out a Message */
  printf("Recycling Matters!\n");
  printf("This program helps you figure out how much you've recycled!\n");
  printf("Please enter how many of each object you've recycled:\n");
  
  /* Third 100 lines of code: Prompt User for Data Input */
  printf("Number of bottles recycled: ");
  scanf("%s", userInput);
  bottlesRecycled = atoi(userInput);
  numObjectsRecycled += bottlesRecycled;
  totalWeightRecycled += (bottlesRecycled * 0.2);
  
  printf("Number of cans recycled: ");
  scanf("%s", userInput);
  cansRecycled = atoi(userInput);
  numObjectsRecycled += cansRecycled;
  totalWeightRecycled += (cansRecycled * 0.06);
  
  printf("Number of bags recycled: ");
  scanf("%s", userInput);
  bagsRecycled = atoi(userInput);
  numObjectsRecycled += bagsRecycled;
  totalWeightRecycled += (bagsRecycled * 0.1);
  
  printf("Number of paper recycled: ");
  scanf("%s", userInput);
  paperRecycled = atoi(userInput);
  numObjectsRecycled += paperRecycled;
  totalWeightRecycled += (paperRecycled * 0.1);
  
  printf("Number of plastic recycled: ");
  scanf("%s", userInput);
  plasticRecycled = atoi(userInput);
  numObjectsRecycled += plasticRecycled;
  totalWeightRecycled += (plasticRecycled * 0.2);
  
  printf("Number of glass recycled: ");
  scanf("%s", userInput);
  glassRecycled = atoi(userInput);
  numObjectsRecycled += glassRecycled;
  totalWeightRecycled += (glassRecycled * 0.3);
  
  printf("Number of steel recycled: ");
  scanf("%s", userInput);
  steelRecycled = atoi(userInput);
  numObjectsRecycled += steelRecycled;
  totalWeightRecycled += (steelRecycled * 0.5);
  
  printf("Number of aluminum recycled: ");
  scanf("%s", userInput);
  aluminumRecycled = atoi(userInput);
  numObjectsRecycled += aluminumRecycled;
  totalWeightRecycled += (aluminumRecycled * 0.2);
  
  printf("Number of other materials recycled: ");
  scanf("%s", userInput);
  otherRecycled = atoi(userInput);
  numObjectsRecycled += otherRecycled; 
  totalWeightRecycled += (otherRecycled * 0.3);
  
  /* Fourth 100 lines of code: Calculations and Print Statements */
  totalObjectsRecycled = numObjectsRecycled;
  totalObjectsNotRecycled = numObjectsRecycled * 5;
  rateRecycling = (float)totalObjectsRecycled / (float)totalObjectsNotRecycled;
  rateNotRecycling = 1 - rateRecycling;
  
  printf("You've recycled %d objects with a total weight of %d pounds.\n", totalObjectsRecycled, totalWeightRecycled);
  printf("You're recycling at a rate of %.2f%%\n", rateRecycling * 100);
  printf("You're not recycling at a rate of %.2f%%\n", rateNotRecycling * 100);
  
  return 0;
}