#include <bits/stdc++.h>
using namespace std;

//Task 2 - Solving 7 leetcode problems

//Problem 1 : Add Digits
int addDigits(int num) {

        while(num > 9){
            int ans = 0, rem = 0;

            while(num != 0) {
                rem = num % 10;
                ans += rem;
                num /= 10;
            }
            num = ans;
        }

        return num;
    }
    
//Problem 2 : Leap Year
int isLeap(int year) {
  if(year % 400 == 0) return 1;
  else if(year % 4 == 0 && year % 100 != 0) return 1;
  else return 0;
}

//Problem 3 : Reverse Integer
int reverse(int x) {
        // highest --> 2147483648 --> 8463847412-> overflow
        // 246384741 > 214748364
        
        int ans = 0, rem;

        while(abs(x) > 0 && abs(ans) <= INT_MAX/10){
            rem = x % 10;
            ans = (ans*10) + rem;
            x /= 10;
        }

        return x != 0 ? 0 : ans;

    }
    
//Problem 4 : Power of 2
bool isPowerOfTwo(int n) {

        if(n<1) return false;
        
        while(n != 1){
            if(n % 2 != 0) return false;
            n/=2;
        }

        return true;
    }
    
//Problem 5 : Sqrt of x
int mySqrt(int x) {

        if(x == 0) return 0;
        if(x == 1) return 1;
        long num = 1;

        while((num*num) < x){
            num++;
            if(num*num == x) return num;
        }

        return num-1;
    }
    
//Problem 6 : Palindrome Number
 bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x<10) return true;

        int ans = 0, temp = x, rem;

        while(x != 0 && ans < INT_MAX/10) {
            rem = x % 10;
            ans = ans*10 + rem;
            x /= 10;
        }

        return (temp == ans);
    }

int main() 
{
    cout << addDigits(37) << endl;
    cout << isLeap(1800) << endl;
    cout << reverse(2334) << endl;
    cout << isPowerOfTwo(128) << endl;
    cout << mySqrt(15) << endl;
    cout << isPalindrome(101) << endl;
}
