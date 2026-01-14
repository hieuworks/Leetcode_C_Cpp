int removeDuplicates(int* nums, int numsSize) {
    int k = 0;
    int i;
    if (numsSize == 0) return 0;
    for(i = 0; i < numsSize; i++){
        if (nums[i] != nums[k]){
            k++;
            nums[k] = nums[i];
        }
    }
    return k + 1;
	
}