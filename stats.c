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
  print_statistics(&test, SIZE);
}

void print_statistics(unsigned char (*input_array)[], int length){

  printf("%s", "Array (unsorted): ");
  print_array(input_array, length);

  sort_array(input_array, length);

  printf("%s", "Array (sorted): ");
  print_array(input_array, length);

  printf("%s", "------------");
  printf("%s", "\r\n");

  printf("%s", "Minimum (find_minimum): ");
  printf("%u", find_minimum(input_array,length));
  printf("%s", "\r\n");

  printf("%s", "Maximum (find_maximum): ");
  printf("%u", find_maximum(input_array,length));
  printf("%s", "\r\n");

  printf("%s", "Average (find_mean): ");
  printf("%u", find_mean(input_array,length));
  printf("%s", "\r\n");

  printf("%s", "Median (find_median): ");
  printf("%.1f", find_median(input_array,length));
  printf("%s", "\r\n");

}

 
void print_array(unsigned char (*input_array)[], int length){
  for (int i = 0; i < length; i++){
    printf("%u ", (*input_array)[i]);
  }
  printf("\n");
}

 
float find_median(unsigned char (*input_array)[], int length){

  if(length % 2 == 0){
    return ( (*input_array)[(length/2)-1] + (*input_array)[(length/2)] ) / 2.0;
  } else {
    return (*input_array)[(int)(length/2)];
  }

}

 
unsigned char find_mean(unsigned char (*input_array)[], int length){
  
  unsigned int mean = 0;

  for (int i = 0; i < length; i++){
    mean += (*input_array)[i];
  }

  mean /= length;

  return mean;
}


unsigned char find_maximum(unsigned char (*input_array)[], int length){
  
  unsigned char maximum = (*input_array)[0];

  for (int i = 1; i < length; i++){
    if((*input_array)[i] >= maximum ){
      maximum = (*input_array)[i];
    }
  }

  return maximum;
}

 
unsigned char find_minimum(unsigned char (*input_array)[], int length){
  
  unsigned char minimum = (*input_array)[0];

  for (int i = 1; i < length; i++){
    if((*input_array)[i] <= minimum ){
      minimum = (*input_array)[i];
    }
  }
  
  return minimum;
}

 
void sort_array(unsigned char (*input_array)[], int length){

  unsigned char temp_val;
  
  for (int i = 0; i < length-1; i++){
    for (int j = 0; j < length-1; j++){
      if((*input_array)[j]<=(*input_array)[j+1]){
        temp_val = (*input_array)[j];
        (*input_array)[j] = (*input_array)[j+1];
        (*input_array)[j+1] = temp_val;
      }
    }
  }

}