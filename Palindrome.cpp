class Solution {
    public:
        bool isPalindrome(int x) {
            long int num = x;
            long int num1 = 0;
            int digit;
            if(x<0){
                return false;
            }
            while(x!=0){
                digit = x% 10;
                num1 = num1*10 + digit;
                x = x/10;
            }
            if(num == num1){
                return true;
            } else {
                return false;
            }
        }
    };