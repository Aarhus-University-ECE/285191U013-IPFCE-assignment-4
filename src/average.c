#ifdef TEST
#include "average.h"
#endif

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
/// Excercise 6
/// Returns the average of an array
/// Pre: n>0, list[0...n-1] is defined
double average(int list[], int n) {
  double avg = 0;
  assert(n > 0);
  for (int i = 0; i < n; i++) {
    avg += list[i];
  }
  avg /= n;
  //...
  return avg;
}

#ifndef TEST

int main() {

  // int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, -4, 0};
  // double avg = average(list, 10);
  int list[] = {1, 7, 3, 24, 5, 5, 6};
    double avg = average(list, 7);
    
  printf("%f\n", avg);
  printf("Hellope!\n");

  return 0;
}

#endif
