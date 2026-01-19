int removeElement(int* nums, int numsSize, int val) {
    int i, k =0;
    for(i = 0; i< numsSize; i++){
        if(nums[i] != val){
        	nums[k] = nums[i]; #Just change the value of the index, judging just care about the element in range k returned 
        	k++;
    	}       
    }
    return k;
}
