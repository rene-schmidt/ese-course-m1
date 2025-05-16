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

  /* "Call by Reference" sort of given array by the name "test" 
     by given size SIZE (which is 40) 
     
     For "Best Practice", and to avoid errors, the variable SIZE is
     being analyzed. If the value is below 2, the Bubble Sort Algorithm
     being used won't work and thus, it can't be used. 

     Of course, there are other methods to make the code still working,
     but this is not the scope of this modules excercise.
     */ 
  if(SIZE < 2){
    printf("%s", "Error: Size of array too short. ");
  } else {
    print_statistics(&test, SIZE);
  }

}

/*
  Main print function that evaluates the helper classes and prints them
  nicely in the console. The function uses "call by reference", as it
  is required to directly change the array itself.
*/
void print_statistics(unsigned char (*input_array)[], int length){

  // ---- Unsorted Array --------
  printf("%s", "Array (unsorted): ");
  print_array(input_array, length);

  /*
    "Call by Reference" of the given variable "test" declared and initialized
    inside the main function.
  */
  sort_array(input_array, length);

  // ---- Sorted Array --------
  printf("%s", "Array (sorted): ");
  print_array(input_array, length);

  // Simple delimiter for easier reading
  printf("%s", "------------");
  printf("%s", "\r\n");
  
  
  // ---- Minimum --------
  printf("%s", "Minimum : ");
  printf("%u", find_minimum(input_array,length));
  printf("%s", "\r\n");

  // ---- Maximum --------
  printf("%s", "Maximum : ");
  printf("%u", find_maximum(input_array,length));
  printf("%s", "\r\n");

  // ---- Mean | Average --------
  printf("%s", "Average | Mean : ");
  printf("%u", find_mean(input_array,length));
  printf("%s", "\r\n");

  // ---- Median --------
  printf("%s", "Median : ");
  printf("%.1f", find_median(input_array,length));
  printf("%s", "\r\n");

}

/*
  Helper function to display arrays in the console conveniently
*/
void print_array(unsigned char (*input_array)[], int length){
  for (int i = 0; i < length; i++){
    printf("%u ", (*input_array)[i]);
  }
  printf("\n");
}

/*
  This class takes a pre-sorted array and determins the median
  (which by definition are the middle entries of a sorted set)

  --- Warning: --- 
  This function can only be used, when the set, given
  by input_array, is already sorted. It won't work if the array
  is not sorted before this function is being called.
*/
float find_median(unsigned char (*input_array)[], int length){

  /*
    If the given array is even, take the most inner values and take the mean from them
    (the middle entries are determined by (n/2)-1 aswell as (n/2) accordingly)
    Since the array might be odd, it is differently handled.
  */
  if(length % 2 == 0){
    return ( (*input_array)[(length/2)-1] + (*input_array)[(length/2)] ) / 2.0;
  } else {
    return (*input_array)[(int)(length/2)];
  }

}

/*
  A generic function about calculating the mean (average) of a given set
  This is being done by adding every value together and dividing by the 
  number of elements in the set.
*/
unsigned char find_mean(unsigned char (*input_array)[], int length){
  
  unsigned int mean = 0;

  for (int i = 0; i < length; i++){
    mean += (*input_array)[i];
  }

  mean /= length;

  return mean;
}

/*
  A compact function to find out the maximum of a given array, be it 
  sorted or unsorted. Alternatively when the call of the sort_array()
  function is used before this function it can be drastically reduced
  to simply: return (*input_array)[0];
*/
unsigned char find_maximum(unsigned char (*input_array)[], int length){
  
  unsigned char maximum = (*input_array)[0];

  for (int i = 1; i < length; i++){
    if((*input_array)[i] >= maximum ){
      maximum = (*input_array)[i];
    }
  }

  return maximum;
}

/*
  A compact function to find out the minimum of a given array, be it 
  sorted or unsorted. Alternatively when the call of the sort_array()
  function is used before this function it can be drastically reduced
  to simply: return (*input_array)[length-1];
*/
unsigned char find_minimum(unsigned char (*input_array)[], int length){
  
  unsigned char minimum = (*input_array)[0];

  for (int i = 1; i < length; i++){
    if((*input_array)[i] <= minimum ){
      minimum = (*input_array)[i];
    }
  }
  
  return minimum;
}

/*
  The actual core of the statistics program. This function sorts the values
  of the array using the bubble sort. Though not the efficient of the sorting
  methods with a runtime of O(n^2), it is relatively simple to implement.

  Two values are being compared by each other and in case the bigger value is
  not on the earlier position, they get swapped (since the module demands a
  descending order, with means the bigger values are first). 

  In order to swap the values, a helper variable "temp_val" is being used to
  temporarily store the value of the right value, to be then rewritten after
  the actual swap.
*/
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