class Solution {
public:
    bool isPalindrome(int x) {
      
        string reverse = "";
        string x_string = to_string(x);
      
        for(int i=x_string.length()-1;i>=0;i--){
            reverse += x_string[i];
        }
        
        if(reverse == x_string){
            return true;
        } else {
            return false;
        }
    }
};
