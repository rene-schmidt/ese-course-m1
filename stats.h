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
 * @file stats.h
 * @brief Header-File for specific helper functions
 *
 * This header file contains all helper classes needed to fulfill the requirements to 
 * be able to solve the problem presented by the course.
 *
 * @author René-Nicky Schmidt
 * @date May 16th, 2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statistics to console
 *
 * This function prints the statistics of given array and returns:
 * minimum, maximum, average and median
 * 
 * Main print function that evaluates the helper classes and prints them
 * nicely in the console. The function uses "call by reference", as it
 * is required to directly change the array itself.
 *
 * @param input_array pointer reference of array to be diagnosed
 */
 void print_statistics(unsigned char (*input_array)[], int length);



 /**
 * @brief Print a given array
 *
 * Helper function to display arrays in the console conveniently
 *
 * @param input_array array to be printed to console
 * @param length length of given array
 */
 void print_array(unsigned char (*input_array)[], int length);



 /**
 * @brief Find median value of array
 *
 *   This class takes a pre-sorted array and determins the median
 * (which by definition are the middle entries of a sorted set)
 *
 *  --- Warning: --- 
 *  This function can only be used, when the set, given
 *  by input_array, is already sorted. It won't work if the array
 *  is not sorted before this function is being called.
 *
 * @param input_array given array to be evaluated
 * @param length length of array to be evaluated
 *
 * @return Returns the calculated median of the input array
 */
 float find_median(unsigned char (*input_array)[], int length);


 /**
 * @brief Find average value of array
 *
 * A generic function about calculating the mean (average) of a given set
 * This is being done by adding every value together and dividing by the 
 * number of elements in the set.
 *
 * @param input_array given array to be evaluated
 * @param length length of array to be evaluated
 *
 * @return Returns the calculated average value of the input array
 */
 unsigned char find_mean(unsigned char (*input_array)[], int length);



 /**
 * @brief Find maximum value of array
 *
 * A compact function to find out the maximum of a given array, be it 
 * sorted or unsorted. Alternatively when the call of the sort_array()
 * function is used before this function it can be drastically reduced
 * to simply: return (*input_array)[0];
 *
 * @param input_array given array to be evaluated
 * @param length length of array to be evaluated
 *
 * @return Returns the biggest value of the input array
 */
 unsigned char find_maximum(unsigned char (*input_array)[], int length);



 /**
 * @brief Find minimum value of array
 *
 * A compact function to find out the minimum of a given array, be it 
 * sorted or unsorted. Alternatively when the call of the sort_array()
 * function is used before this function it can be drastically reduced
 * to simply: return (*input_array)[length-1];
 *
 * @param input_array given array to be evaluated
 * @param length length of array to be evaluated
 *
 * @return Returns the smallest value of the input array
 */
 unsigned char find_minimum(unsigned char (*input_array)[], int length);



 /**
 * @brief Sort array DESC
 *
 * The actual core of the statistics program. This function sorts the values
 * of the array using the bubble sort. Though not the efficient of the sorting
 * methods with a runtime of O(n^2), it is relatively simple to implement.
 *
 * Two values are being compared by each other and in case the bigger value is
 * not on the earlier position, they get swapped (since the module demands a
 * descending order, with means the bigger values are first). 
 *
 * In order to swap the values, a helper variable "temp_val" is being used to
 * temporarily store the value of the right value, to be then rewritten after
 * the actual swap.
 *
 * @param input_array given array to be evaluated
 * @param length length of array to be evaluated
 */
 void sort_array(unsigned char (*input_array)[], int length);



#endif /* __STATS_H__ */
