// Solution1: 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *result;  // 数组指针
    result = (int*) malloc( 2*sizeof(int) ); // 动态分配内存空间
    
    for (int i = 0; i < numsSize; i++){
        for (int j = i+1; j < numsSize; j++){
            if (nums[i] + nums[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;  // Compiler needs it! 
}

// Solution2: 
int comp (const void *a, const void *b){
    // const表示常数变量，void表示可以是任意类型的指针变量
    return *(int*)a - *(int*)b;     // (int*)指定a/b为整数型指针变量
}

int findnum (int* nums, int n, int len){
    for (int i = 0; i < len; i++)
        if (nums[i] == n) {
            nums[i] = INT_MAX; // Searching without replacement
            return i;
        }
    return;
}

int* twoSum(int* nums, int numsSize, int target) {
    int *result;  // 数组指针
    result = (int*) malloc( 2*sizeof(int) );
    
    int *newNums;  // copy of nums used for searching element
    newNums = (int*) malloc( numsSize*sizeof(int) ); 
    for (int i = 0; i < numsSize; i++)
        newNums[i] = nums[i];
    
    qsort(nums, numsSize, sizeof(int), comp);   //ascending sort
    int l = 0, r = numsSize-1;
    int numl, numr;
    while (1){
        if (nums[l] + nums[r] > target) r--;
        if (nums[l] + nums[r] < target) l++;
        if (nums[l] + nums[r] == target) {
            numl = nums[l]; //left index
            numr = nums[r]; //right index
            break;
        }
    }
    result[0] = findnum(newNums, numl, numsSize); //find orinial left index in newNums
    result[1] = findnum(newNums, numr, numsSize); //find orinial right index in newNums 
    return result;
}