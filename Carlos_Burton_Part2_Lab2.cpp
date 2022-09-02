#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int Meter=0; // declare meter and feed as double for decimals (can use float)
  float Feet=0.0;
  
  cout<<left;
  cout<<setprecision(5);
  cout << setw(10)<<"Meters"  <<setw(10)<< "Feet"<<setw(10)<<endl; // Display header for Meters and Feet
for(int i=0;i<15;i++){ // For loop to print all Meters and Feet in increments.
Meter++;
  
Feet += 3.280;  
  cout << Meter << setw(10) << Feet<< setw(10)<<endl;
}
  } // end of main