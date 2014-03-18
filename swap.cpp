//
//  main.cpp
//  swap
//
//  Created by John Morgan on 2/20/14.
//  Copyright (c) 2014 John Morgan. All rights reserved.
//

#include <iostream>

using namespace std;

///////////////////////////////////////////
// Swap data struct
///////////////////////////////////////////
struct Swap{
    string string_to_swap;
    string swapped_string;

    void get_string();
    void swap_string();
    void recursive_swap();
    void display();
};

///////////////////////////////////////////
// Main
///////////////////////////////////////////
int main(int argc, const char * argv[])
{
    Swap string_swap;  // new struct object
    
    string_swap.get_string();
    string_swap.swap_string();
    string_swap.display();
    
    return 0;
}

///////////////////////////////////////////
// Get the string to reverse
///////////////////////////////////////////
void Swap::get_string() {
    cout << "Please enter a string:";
    cin >> string_to_swap;
}

///////////////////////////////////////////////
// Reverse the string, with a string iterator
///////////////////////////////////////////////
void Swap::swap_string() {

    string::iterator it;
    
    for (it = string_to_swap.end() -1; it != string_to_swap.begin() -1; it--)
    {
        swapped_string += *it;
    }
}

///////////////////////////////////////////
// Display the reversed string
///////////////////////////////////////////
void Swap::display() {
    cout << swapped_string << endl;
}