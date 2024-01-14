#include <iostream>
using namespace std;

//Task-1

void bitwisePractice()
{
  //bitwise operators practice
  // {&,|,^,~,<<,>>}
  
  //bitwise AND
  cout << "Bitwise AND : 5&6 = " << (5&6) << endl; // non zero
  cout << "Bitwise AND : 0&6 = " << (0&6) << endl; //zero if one is zero
  
  //bitwise OR
  cout << "Bitwise OR : 5|6 = " << (5|6) << endl; // always non zero
  cout << "Bitwise OR : 0|6 = " << (0|6) << endl;
  
  //bitwise XOR
  cout << "Bitwise XOR : 5^6 = " << (5^6) << endl; //101^110 = 011 = 3, non zero
  cout << "Bitwise XOR : 6^6 = " << (6^6) << endl; //110^110 = 000 = 0, zero
  cout << "Bitwise XOR : 0^6 = " << (0^6) << endl; //000^110 = 110, same
  
  //bitwise Complement(NOT)
  cout << "Bitwise NOT : ~5 = " << (~5) << endl;
  cout << "Bitwise NOT : ~(-6) = " << (~(-6)) << endl;
  //formula = -(number+1)
  
  //bitwise Left shift
  cout << "Bitwise Left Shift : 1 << 1 = " << (1<<1) << endl; //shifts one bit left
  cout << "Bitwise Left Shift : 1 << 2 = " << (1<<2) << endl; //shifts two bits left
  //formula = num << k = num * 2 ki power k
  
  //bitwise Right shift
  cout << "Bitwise Right Shift : 1 >> 1 = " << (1>>1) << endl; //shifts one bit right
  cout << "Bitwise Right Shift : 4 >> 2 = " << (4>>2) << endl; //shifts two bits right
  //formula = num >> k = num / 2 ki power k
  
  //Precedence = {<<,>>} > {~,|,&,^}
  
}
int main() 
{
    bitwisePractice();
}
