int removeDuplicates(int* nums, int numsSize) {
    if(numsSize < 1) return 0;
    int count = 1;
    for (int i = 1; i < numsSize; i++){
        if (nums[i-1] != nums[i])
            nums[count++] = nums[i];
    }
    return count;
}