/* 
  File:   main.cpp
  Author: Shin Dokyoung
  Created on February 27, 2017, 5:14 PM
  Purpose: Display 8 Calculate Total Peas with a Division Sign
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number_of_pods, peas_per_pod, total_peas;
    
    //Prompt the massage
    cout << "Hello\n";
    
    //Input values
    cout << "Press return after enter;ing a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //Process by mapping inputs to outputs
    total_peas = number_of_pods / peas_per_pod;
    
    //Output values
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    //Prompt the massage
    cout << "Good-bye\n";
    
    //Exit stage right!
    
    
    return 0;
}