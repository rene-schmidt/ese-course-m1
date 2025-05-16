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
 * @param input_array pointer reference of array to be diagnosed
 */
 void print_statistics(unsigned char (*input_array)[], int length);



 /**
 * @brief Print a given array
 *
 * A simple printing function that returns to the console a given array with given length
 *
 * @param input_array array to be printed to console
 * @param length length of given array
 */
 void print_array(unsigned char (*input_array)[], int length);



 /**
 * @brief Find median value of array
 *
 * This function gives the median of a given array.
 * Therefore it finds the middle value of every given value inside of an array
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
 * This function gives the average of a given array.
 * Therefore it adds every value of the given array and devides it by its length
 * and rounds it down to return a char value back.
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
 * This function gives the maximum of a given array.
 * Therefore it evaluates the array and finds the biggest value and returns it back.
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
 * This function gives the minimum of a given array.
 * Therefore it evaluates the array and finds the smallest value and returns it back.
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
 * Given function sorts an array in descending order.
 * That means the biggest value is the first one, the smallest value is the last value.
 *
 * @param input_array given array to be evaluated
 * @param length length of array to be evaluated
 */
 void sort_array(unsigned char (*input_array)[], int length);



#endif /* __STATS_H__ */
