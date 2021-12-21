#include <stdlib.h>
#include <stdio.h>

#include "harness.h"

void main(int argc, char** argv) {
  char add_code_tsv110[argc];
  for (int i = 0; i < argc-1; i++) {
    uint16_t intVal;
    sscanf(argv[i+1], "%x", &intVal);
    add_code_tsv110[i] = intVal; 
  }
  measure_results_t res;
  int count = 10000;
  measure(add_code_tsv110, argc-1, count, &res);
}
