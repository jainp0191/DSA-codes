#include <bits/stdc++.h>
using namespace std;

//Problem-1 : Convert 'a' to 'A'
//a = 97, A = 65......

char returnUppercase(char ch){
  return (ch-'a') + 'A';
}

//Problem-2 : Armstrong number
// 153 --> 1 ka cube + 5 ka cube + 3 ka cube = 153 , armstrong

bool checkArmstrong(int num) {
  int len = to_string(num).length();
  
  int sum = 0, rem;
  int temp = num;
  //perform power sum
  while(temp != 0){
    rem = temp % 10;
    sum += pow(rem,len);
    temp /= 10;
  }
  
  return (sum == num);
}

//Problem-3: Find Trailing zeroes in factorial
// recursive approach

// number of zeroes = total number of fives in range 1 to number
int trailingZeroesR(int N)
    {
        // 25 = 5 + f(5) = 5 + 1 = 6  
        if(N/5 >= 5) return N/5 + trailingZeroesR(N/5);
        return N/5;
    }

//iterative approach
int trailingZeroesI(int N)
    {
        int count = 0;
        
        while(N >= 5){
          count += N/5;
          N/=5;
        }
        
        return count;
    }
    
    
//Problem-4 : Total moves for bishop
//four possible cases of move
// upper right - min(A-1, 8-B), which comes the min, is the min possible move bishop can take...
// upper left - min(A-1,B-1) 
// lower left - min(8-A, B-1)
// lower right - min(8-A, 8-B)

int countBishopMoves(int A, int B) { //A,B denote position of bishop
  return min(A-1,8-B) + min(A-1,B-1) + min(8-A,B-1) + min(8-A,8-B);
}

//Problem 5 : Nim Game
// if player can win in every situation, then 1
// player move in factor of 4 to win

bool canWinNimGame(int N){
  if(N%4 == 0) return 0;
  
  else return 1;
}


int main() 
{
  cout << "a to z in uppercase are : " << endl;
  for(char ch = 'a'; ch <= 'z'; ch++) {
    cout << returnUppercase(ch) << " ";
  }
  cout << endl;
  
  cout << endl << "is 153 armstrong? " << checkArmstrong(153) << endl;
  
  cout << endl << "5! = 120 = " << trailingZeroesR(5) << " zeroes (R)" << endl;
  cout << endl << "5! = 120 = " << trailingZeroesI(5) << " zeroes (I)" << endl;
  
  cout << endl << "Total moves at pos (3,4) : " << countBishopMoves(3,4) << endl;
  
  cout << endl << "Can win Nim Game if N = 4 ? " << canWinNimGame(4) << endl;
  cout << endl << "Can win Nim Game if N = 123 ? " << canWinNimGame(123) << endl;
}
