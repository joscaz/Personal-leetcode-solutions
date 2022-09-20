class Solution {
public:
    //Will use recursion
    bool isPowerOfTwo(int n) {
        //if n is equal to 1 means that it is a power of two
        if(n == 1){
            return true;
        }
        
        //if n is less than 0 or if n mod 2 is not equal to zero
        // it means that it is not a power of two.
        else if(n <= 0 || n%2 != 0){
            return false;
        }
        
        //We make use of recursion
        return isPowerOfTwo(n/2);
    }
};
