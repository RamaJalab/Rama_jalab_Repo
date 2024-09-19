unsigned char find_minimum(unsigned char arr[], int size){

}
unsigned char find_maximum(unsigned char arr[], int size){

}
void sort_array_ascending(unsigned char arr[], int size){

}
unsigned char find_median(unsigned char arr[], int size){

}
float find_mean(unsigned char arr[], int size){

}
void sort_array(unsigned char arr[], int size){
#include <stdio.h>
#include<math.h>
#include"stats.h"
#define SIZE 40

int main() {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

unsigned char smallest = find_minimum(test, SIZE);
unsigned char largest = find_maximum(test, SIZE);
unsigned char median = find_median(test, SIZE);
unsigned char mean =find_mean(test, SIZE);
print_statistics(smallest,largest,median,mean);
sort_array(test, SIZE);
printf("sort_array is : \n");
       for (int i = 0; i < SIZE; i++) {
        printf("%d,", test[i]);
    }
    printf("\n");
    return 0;
}

unsigned char find_minimum(unsigned char arr[], int size)
{
    unsigned char min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
unsigned char find_maximum(unsigned char arr[], int size)
{
    unsigned char max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
void sort_array_ascending(unsigned char arr[], int size)
 {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

unsigned char find_median(unsigned char arr[], int size)
 {

    sort_array_ascending(arr, size);
    int mid = size / 2;
    if (size % 2 == 0) {
        return (arr[mid - 1] + arr[mid]) / 2;
    } else {
        return arr[mid];
    }
}
float find_mean(unsigned char arr[], int size)
 {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

  return floor((float)sum / size);

}
void sort_array(unsigned char arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {

                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void print_statistics(unsigned char min_value,unsigned char max_value,unsigned char median_value,unsigned char mean_value)
{
    printf("minimum is :%u\n",min_value);
    printf("maximum is :%u\n",max_value);
    printf("median is :%u\n",median_value);
    printf("mean is :%u\n",mean_value);
}
/* Add other Implementation File Code Here */

