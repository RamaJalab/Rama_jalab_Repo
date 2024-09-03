#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED
/**
 * @brief Find the minimum value in an array.
 *
 * This function iterates through the given array of unsigned char values
 * and returns the smallest value found.
 *
 * @param arr The array of unsigned char values to be searched.
 * @param size The number of elements in the array.
 * @return The minimum value found in the array.
 */
unsigned char find_minimum(unsigned char arr[], int size);
/**
 * @brief Find the maximum value in an array.
 *
 * This function iterates through the given array of unsigned char values
 * and returns the largest value found.
 *
 * @param arr The array of unsigned char values to be searched.
 * @param size The number of elements in the array.
 * @return The maximum value found in the array.
 */

unsigned char find_maximum(unsigned char arr[], int size);
/**
 * @brief Sort an array in ascending order.
 *
 * This function sorts the given array of unsigned char values
 * using the bubble sort algorithm, arranging the elements from
 * the smallest to the largest.
 *
 * @param arr The array of unsigned char values to be sorted.
 * @param size The number of elements in the array.
 */


void sort_array_ascending(unsigned char arr[], int size);
/**
 * @brief Find the median value of an array.
 *
 * This function calculates the median of the given array of unsigned char values
 * after sorting it in ascending order. The median is the middle value of a sorted
 * array, or the average of the two middle values if the array has an even number of elements.
 *
 * @param arr The array of unsigned char values to be analyzed.
 * @param size The number of elements in the array.
 * @return The median value of the array.
 */
unsigned char find_median(unsigned char arr[], int size);
/**
 * @brief Calculate the mean value of an array.
 *
 * This function computes the mean (average) of the given array of unsigned char values
 * by summing all the elements and dividing by the number of elements.
 *
 * @param arr The array of unsigned char values to be analyzed.
 * @param size The number of elements in the array.
 * @return The mean value of the array as a float.
 */
float find_mean(unsigned char arr[], int size);
/**
 * @brief Sort an array in descending order.
 *
 * This function sorts the given array of unsigned char values
 * using the bubble sort algorithm, arranging the elements from
 * the largest to the smallest.
 *
 * @param arr The array of unsigned char values to be sorted.
 * @param size The number of elements in the array.
 */

void sort_array(unsigned char arr[], int size);
/**
 * @brief Print statistical values.
 *
 * This function prints the minimum, maximum, median, and mean values
 * of a dataset to the standard output.
 *
 * @param min_value The minimum value from the dataset.
 * @param max_value The maximum value from the dataset.
 * @param median_value The median value from the dataset.
 * @param mean_value The mean value from the dataset.
 */

void print_statistics(unsigned char min_value,unsigned char max_value,unsigned char median_value,unsigned char mean_value);


#endif // STATS_H_INCLUDED
