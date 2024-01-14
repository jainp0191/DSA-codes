#include <bits/stdc++.h>
using namespace std;

//concept of default parameter
bool isPrime(int n=2){
  if(n<2) return 0;
  
  for(int i=2; i<sqrt(n); i++){
    if(n%i == 0) return 0;
  }
  return 1;
}

//pass by value
void swap(int a, int b){
  int c;
  c=a;
  a=b;
  b=c;
}

//pass by reference, where &a, &b are called direct reference
void Swap(int &a, int &b){
  int c;
  c = a;
  a = b;
  b = c;
}

//operator overloading
void Swap(float &a, float &b){
  float c;
  c = a;
  a = b;
  b = c;
}
int main() 
{
    isPrime(); //matches default parameter
    isPrime(1); //matches specified parameter
    int a=5, b=10;
    cout << "Before swap : " << a << " " << b << endl;
    swap(a,b);
    cout << "After swap(pass by value) : " << a << " " << b << endl; // will not get swapped as passed by value
    Swap(a,b);
    cout << "After swap(pass by reference) : " << a << " " << b << endl; //will modify actual variables
    
    float c = 2.244, d = 3.2;
    cout << "Before Swap(float) : " << c << " " << d << endl;
    Swap(c,d);
    cout << "After Swap(float) : " << c << " " << d << endl;
    
    return 0;
}
