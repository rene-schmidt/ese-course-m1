/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Main function - First programming excercise
 *
 * This file contains the problem to sort a given array with given size by its value.
 * Furthermore the program consists of several given functions aswell as a statistic
 * function that represents the given task to find the specific key features such as:
 * minimum, maximum, average and median.
 *
 * @author René-Nicky Schmidt
 * @date May 16th, 2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

void print_statistics(unsigned char *input_array){
  /*printf()*/
}

 
void print_array(unsigned char *input_array, int length){
  /*printf()*/
}

 
char find_median(unsigned char *input_array, int length){
  char median;
  return median;
}

 
char find_mean(unsigned char *input_array, int length){
  char mean;
  return mean;
}


char find_maximum(unsigned char *input_array, int length){
  char maximum;
  return maximum;
}

 
char find_minimum(unsigned char *input_array, int length){
  char minimum;
  return minimum;
}

 
void sort_array(unsigned char *input_array, int length){
  /*Placeholder*/
}