#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "bomb.h"

/**
 * This function should take a string an append an 's' to it
 * @param  originalWord [description]
 * @return              [description]
 */
void pluralizer(char* originalWord, int wordLength) {
  // Add code here
}


/**
 * This function should take an input, x, and return x^2
 * @param  x [description]
 * @return   [description]
 */
int secondPower(int x) {
  // Add code here
  return 0;
}

/**
 * Should return a + b
 * @param  a
 * @param  b
 * @return   a + b
 */
int aPlusB(int a, int b) {
  return 0;
}

/**
 * Should return true if the value is even, false otherwise
 * @param  value
 * @return true if even, false otherwise
 */
bool isEven(int value) {
  return false;
}

int main (int argc, char *argv[])
{
  // Blue wire
  bool blueWire = (16 == secondPower(4));

  // Green wire
  char* cat = "cat";
  pluralizer(cat, 3);
  bool greenWire = strcmp(cat, "cats") == 0;

  // Yellow wire
  bool yellowWire = (8 == aPlusB(2, 6) && 16 == aPlusB(8, 8));

  // Red wire
  bool redWire = isEven(46) && !isEven(47);

  if(blueWire && greenWire && yellowWire && redWire) {
    printf("Congratulations, you have defused the bomb!");
  } else {
    printf("Your functions did not return the correct values, the bomb has exploded!!\n");
    printf("%s", bomb);
  }

  return 0;
}
