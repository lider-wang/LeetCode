
/* 
 * 1. Two Sum
 *   Given an array of integers, return indices of the two numbers such that 
 *   they add up to a specific target.
 *
 *   You may assume that each input would have exactly one solution, 
 *   and you may not use the same element twice.
 *
 *  - Example :
 *
 *  Given nums = [2, 7, 11, 15], target = 9,
 *
 *  Because nums[0] + nums[1] = 2 + 7 = 9,
 *  return [0, 1].
 *
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main (void)
{
    int num = 4
    int array[num] = {2, 7, 11, 15};
    int target = 9;
    int *array2;

    printf ("array[%d] = [%d,%d,%d,%d]\n", num, array[0], array[1], array[2], array[3]);
    printf ("target : %d\n", target);
    
    int* sum = twoSum(array, num, target, )
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    // solution 1 :  iteration, O(n^2)
    // solution 2 :  filter, iteration, O(n+n^2), M(n)
    // solution 3 :  Hash table
#define SOLUTION (1)

    //@ allocate solution array
    int *sol_arr = malloc(2 * sizeof(int));
    if (sol_arr == NULL)
    {
        fprintf(stderr, "malloc failed\n");
        return NULL;
    }

    //@ solution array initialize
    memset(sol_arr, 0, 2);

    //@ Solution implement :
#if (SOLUTION == 1)
    int i=0, j=0, end=0;
    
    // check every Sum by nums[0..numSize-2]
    for (; i < (numsSize - 1); ++i)
    {
        // check every Sum by nums[i+1..numSize-1]
        for (j=i+1; j < numsSize; ++j)
        {
            if (target == (nums[i] + nums[j]))
            {
                sol_arr[0] = i;
                sol_arr[1] = j;
                end = 1;
                break;
            }
        }

        // solution is found, end loop.
        if (end != 0)
        {
            break;
        }
    }
#else
#endif

    *returnSize = 2;

    return sol_arr;
}
