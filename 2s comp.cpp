#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int n) {
    // C++ integers are already in 2-complements so you only have to 
    // extract the bits.
    if((n < -128) || (n >= 128)){
     cerr << "The number "<< n << " does not fit into a 8-bit 2-complement representation" << endl;
    }
    string res = "";
    for(int i = 0; i < 8; ++i){
      res = string(1, (char)(((n >> i) & 1) + '0')) + res;
    }
    return res;
}

int binaryToDecimal(string s) {
  // The most significant bit is the signal
  int result = -((int)(s[0] - '0'));

  for(int i = 1; i < s.size(); ++i){
    result = 2*result + ((int)(s[i] - '0'));
  }
  return result;
}

int main(){
  int input;
  while(cin){
    cout << "> ";
    cin >> input;
    string binary = decimalToBinary(input);
    int output = binaryToDecimal(binary);
    cout << input << " -> " << binary << " -> " << output << endl;
  }
}