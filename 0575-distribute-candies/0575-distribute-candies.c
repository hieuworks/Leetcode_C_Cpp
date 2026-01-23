int distributeCandies(int* candyType, int candyTypeSize) {
    bool seen[200001] = {false};  
    int unique_types = 0;
    int max_candies = candyTypeSize / 2;
    for (int i = 0; i < candyTypeSize; i++) {
        int index = candyType[i] + 100000; 
        if (!seen[index]) {
            seen[index] = true; 
            unique_types++;     
        }
    }
    if (unique_types < max_candies) {
        return unique_types; 
    } else {
        return max_candies;  
    }
}