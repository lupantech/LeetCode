void rotate(int* nums, int numsSize, int k) {
    int *arrTmp;  // 数组指针
    arrTmp = (int*) malloc( numsSize*sizeof(int) ); // 动态分配内存空间
    if(!arrTmp) exit(1);
    
    for (int i = 0; i < numsSize; i++) 
        arrTmp[i] = nums[i];
    
    k = k % numsSize;  // for k > numsSize
    for (int i = 0; i < numsSize; i++)
        nums[i] = arrTmp[(i+numsSize-k) % numsSize];
}