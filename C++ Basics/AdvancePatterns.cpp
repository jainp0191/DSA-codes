#include <bits/stdc++.h>
using namespace std;

// n=5 -> 1,3,5,7,9 means stars <= 2*(line)-1 , lines = 5
//spaces = n - line

void printPattern1(int rows) {
  //iterate each row
  for(int line = 1; line <= rows; line++) {
    //forward space
    for(int space = 1; space <= rows - line; space++) {
      cout << " ";
    }
    //stars
    for(int star = 1; star <= 2*(line)-1; star++) {
      cout << "*";
    }
    cout << endl;
  }
}


//n = 5 -> space pattern = n-line, forward nums pattern = 1 to line
//backward nums pattern = line-1 to 1

void printPattern2(int rows) {
  //rows
  for(int line = 1; line <= rows; line++) {
    //space
    for(int space = 1; space <= rows - line; space++) {
      cout << " ";
    }
    //forward nums
    for(int num = 1; num <= line; num++) {
      cout << num;
    }
    //backward nums
    for(int num = line - 1; num >= 1; num--){
      cout<< num;
    }
    cout << endl;
  }
}

//inverted pattern 1
void printPattern3(int rows) {
  //iterate each row
  for(int line = 1; line <= rows; line++) {
    //forward space
    for(int space = 1; space <= line - 1; space++) {
      cout << " ";
    }
    //stars
    for(int star = 1; star <= 2*(rows) - (2*(line)-1); star++) {
      cout << "*";
    }
    cout << endl;
  }
}

//n = 4 --> star = (row+1)-line, space = 2*(line)-2, then same star
void printPattern4(int rows) {
  
  //forward pattern
  for(int line = 1; line <= rows; line++) {
    for(int star = 1; star <= (rows+1)-line; star++){
      cout << "*";
    }
    for(int space = 1; space <= 2*(line)-2; space++) {
      cout << " ";
    }
    for(int star = 1; star <= (rows+1)-line; star++){
      cout << "*";
    }
    cout << endl;
  }
  
  //inverted Pattern
  for(int line = 1; line <= rows; line++) {
    for(int star = 1; star <= (rows+1) - ((rows+1)-line); star++){
      cout << "*";
    }
    for(int space = 1; space <= 2*(rows) - 2*(line); space++) {
      cout << " ";
    }
    for(int star = 1; star <= (rows+1) - ((rows+1)-line); star++){
      cout << "*";
    }
    cout << endl;
  }
}

//n = 4 , space = rows - line, star = 1 to line+ " "
void printPattern5(int rows) {
  //iterate each row
  for(int line = 1; line <= rows; line++) {
    //forward space
    for(int space = 1; space <= rows - line; space++) {
      cout << " ";
    }
    //stars
    for(int star = 1; star <= line; star++) {
      cout << "* ";
    }
    cout << endl;
  }
  for(int line = 1; line <= rows; line++) {
    //forward space
    for(int space = 1; space <= (rows-1) - (rows - line); space++) {
      cout << " ";
    }
    //stars
    for(int star = 1; star <= rows-line+1; star++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main(){
  cout << "Pattern 1 : " << endl;
  printPattern1(5);
  cout << "\nPattern 2 : " << endl;
  printPattern2(5);
  cout << "\nPattern 3 (Inverted Pattern 1) : " << endl;
  printPattern3(5);
  cout << "\nPattern 4 : " << endl;
  printPattern4(5);
  cout << "\nPattern 5 : " << endl;
  printPattern5(5);
}
