/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
char ** summaryRanges(int* nums, int numsSize, int* returnSize){
    int start = 0;
    char** final_arr = (char**)malloc(20*sizeof(char*));
    int count =0;
        for (int k=0;k<numsSize;k++){
            if (k==0 || nums[k]-1 > nums[k-1]){ // did "-1" here, since the number will not be stored (too large) <- dodges overflow 
                start=nums[k];
            }
            if (k==numsSize-1 || nums[k]+1 < nums[k+1]){ // we are at the finish line
                final_arr[count]= (char*) malloc(28*sizeof(char));
                if (start<nums[k]){
                    snprintf(final_arr[count],28,"%d->%d",start,nums[k]); 
                }
                else 
                    snprintf(final_arr[count],28,"%d",start);
                printf("%s\n",final_arr[count]);
                count++;
            }
        }
    *returnSize = count;
    return final_arr;
    
}