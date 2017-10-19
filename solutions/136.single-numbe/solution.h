// Solution1: Xnor
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) 
        result ^= nums[i];
    return result;
}

// Solution2: Hash


// Solution3: Sort
int cmp (const void *a , const void *b) {
    return *(int *)a - *(int *)b;  //升序排序
    //return *(int *)b - *(int *)a; //降序排序
}

int singleNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i < numsSize; i += 2) {
        if (i+1 >= numsSize || nums[i] != nums[i+1])
            return nums[i];
    }
    return 0;
}
