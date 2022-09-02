#include <iostream>
using namespace std;
// Function to get the number of digits in a number by user
int getDigit(int i){
  
  // initialize count at 0
  int count = 0;
  
  while(i != 0){ // While loop for to find digits in numbers provided.
    count++;  // Increment count
    i = i / 10;
  }
  return count; // Return count to display digits.
}
int main() { // Start of main
  int i;
  
  cout << "Enter a digit \n"; // Ask user to input data.
  cin >> i; // User input processed

  cout << "Your digits are: " << getDigit(i) << endl; // Print provided data
    return 0;
} // end of main