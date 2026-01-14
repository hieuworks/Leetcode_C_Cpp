int searchInsert(int* nums, int numsSize, int target) {
    int index = -1;
    for(int i = 0; i < numsSize; i++){
        if (nums[i] == target){
            index = i;
            return index;
        }
    }
    if (index = -1){
        for(int i = 0; i < numsSize; i++){
            if (nums[i]> target){ 
            //nums[i] > target - because the array is a list of distinct integers
                index = i;
                return index;   
            }
        }
    }
    return numsSize;
}
