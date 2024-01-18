#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int singleNumber(int *nums, int numsSize)
{
    // sort
    // go 1 by 1 and if there isn't the second element
    // returm that element.

    if (numsSize == 1)
    {
        return nums[0];
    }

    qsort(nums, numsSize, sizeof(int), cmpfunc);
    int cur, prev;

    prev = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        cur = nums[i];

        if (cur != prev)
        {
            if (i == 1)
            {
                return prev;
            }
            else if (i == numsSize - 1)
            {
                return cur;
            }
            else
            {
                if (cur != nums[i + 1])
                    return cur;
            }
        }
        prev = cur;
    }

    return 0;
}