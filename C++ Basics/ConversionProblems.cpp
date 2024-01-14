#include <bits/stdc++.h>
using namespace std;

//decimal to binary
unsigned long long decimalToBinary(int dec) {
  
  //store binary
  unsigned long long bin = 0;
  
  //count for updating bin as per place
  int count = -1;
  
  while(dec != 0) {
    //update count
    count++;
    //get remainder
    int rem = dec&1; //or, dec % 2
    //update bin
    bin += (pow(10,count)*rem);
    //update num
    dec = dec >> 1; //or,dec /= 2
  }
  
  return bin;
}

//binary to decimal
int binaryToDecimal(unsigned long long bin) {
  
  //store decimal
  int dec = 0;
  
  //get length of binary
  int len = to_string(bin).length();
  
  //store current place
  int place = -1;
  
  while(place < len) {
    ++place;
    
    //get last digit
    int last = bin % 10;
    
    //update dec
    dec += pow(2,place) * last;
    
    //remove last
    bin /= 10;
  }
  
  return dec;
}

unsigned long decimalToOctal(int dec) {
  
  //store octal
  unsigned long oct = 0;
  
  //count for updating oct as per place
  int count = -1;
  
  while(dec != 0) {
    //update count
    count++;
    //get remainder
    int rem = dec % 8;
    
    //update oct
    oct += (pow(10,count)*rem);
    
    //update num
    dec /= 8;
  }
  
  return oct;
}

//octal to decimal
int octalToDecimal(unsigned long oct) {
  
  //store decimal
  int dec = 0;
  
  //get length of octal
  int len = to_string(oct).length();
  
  //store current place
  int place = -1;
  
  while(place < len) {
    ++place;
    
    //get last digit
    int last = oct % 10;
    
    //update dec
    dec += pow(8,place) * last;
    
    //remove last
    oct /= 10;
  }
  
  return dec;
}

int main() 
{
    cout << "binary of 5 is " << decimalToBinary(5) << endl;
    cout << "binary of 23344 is " << decimalToBinary(23344) << endl;
    cout << "decimal of 101 is " << binaryToDecimal(101) << endl;
    cout << "decimal of 101101100110000 is " << binaryToDecimal(101101100110000) << endl;
    cout << "octal of 23344 is " << decimalToOctal(23344) << endl;
    cout << "decimal of 55460 is " << octalToDecimal(55460) << endl;
}
