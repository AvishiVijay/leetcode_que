class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
    if(x<0)
    {
        return false;
    }
     int ans=0;
     
     while(y)
     {
         int digit = y%10;
         if(ans > INT_MAX/10)
           return false;
         ans = digit + ans*10;
         y=y/10;
     }
     
     if(x==ans)
       return true;
     else
        return false;
        
    }
};