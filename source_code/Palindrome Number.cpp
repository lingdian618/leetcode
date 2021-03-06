/*
Determine whether an integer is a palindrome. Do this without extra space.
*/

class Solution {
public:
    int len(int x){
        int L = 1;
        while(x>=10){
            x /= 10;
            L += 1;
        }
        return L;
    }
    int ithDigit(int x, int i){
        if(i<0) return -1;
        while(i){
            i--;
            x /= 10;
        }
        return x%10;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n = len(x);
        for(int i=0; i+i<n; i++){
            if(ithDigit(x, i)!=ithDigit(x, n-1-i))  return false;
        }
        return true;
    }
};
