class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int digit , sum =0;
        int num = n;
        while(n!=0){
            digit = n % 10;
            sum+=(digit*digit*digit);
            n = n/10;
        }
        if(num == sum){
            return true;
        }else {
            return false;
        }
    }
};