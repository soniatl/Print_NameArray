//
//  main.cpp
//  class_activity7
//
//  Created by Sonia Lopchan on 9/15/24.
//I want you to write a program that asks the user for three names, score these names inside an array and then print the first name.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string names[3];
    
    cout << "Enter three names: "<< endl;
    
    //Using for loop to iterate code 3 times
    for (int i=0; i<3; i++){
        cout << "Name "<< i+1<<" ";
        getline(cin, names[i]);
    }
    cout << "The first name inside an array is " <<names[0]<<" "<<endl;
    
    return 0;
}
