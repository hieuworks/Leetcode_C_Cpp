int strStr(char* haystack, char* needle) {
    int i, j, lenNeedle = strlen(needle), lenHaystack = strlen(haystack);
    int index, charCurrent;
    if (lenNeedle == 0) 
        return 0;
    for(i =0; i < lenHaystack; i++){ //duyet lan 1 tim index bat dau khop
        if(haystack[i] == needle[0] && i <= lenHaystack - lenNeedle){
            index = i; //reset
            charCurrent = 0; //reset
            for(j = 0; j < lenNeedle; j++){ //duyet lan 2 tinh tu index xem co khop ko
                if(haystack[index] == needle[j] ){
                    index++;
                    charCurrent++;
                }
                else
                    break;
                if(charCurrent == lenNeedle)
                    return i;
            }
        }
    }
    return -1;
}