// Solution1: Copy a array
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

// Solution3: Rotate
void reverse(int* nums, int s, int e) {
    int tmp;
    while (s < e){
        tmp = nums[s];
        nums[s++] = nums[e];
        nums[e--] = tmp;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;  // for k > numsSize
    reverse(nums, 0, numsSize-k-1);         //nums[0-3]: [1,2,3,4]
    reverse(nums, numsSize-k, numsSize-1);  //nums[4-6]: [5,6,7]
    reverse(nums, 0, numsSize-1);          //nums[0-6]: [4,3,2,1,7,6,5]
}

ttttttt
