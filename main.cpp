/* 
 * File:   main.cpp
 * Author: Dhavalkumar Suthar
 *
 * Created on October 4, 2015, 2:07 PM
 */

#include <cstdlib>
#include "BitSetter.h"
#include <iostream>

using namespace std;


/*
 * This program tests the BitSetter class' functionality.
 */
int main(int argc, char** argv) {
    
    //Allocate a new object of bitsetter...
    BitSetter x;
    
    //Set our numbers...
    x.setNumberOne(150);
    x.setNumberTwo(20);
    
    //Print the bits so that we can see what's going on...
    cout<<"Number 1:";
    x.printBits(x.getNumberOne());
    cout<<"Number 2:";
    x.printBits(x.getNumberTwo());
    
    //Define our starting and ending points...
    x.setStartingPoint(3);
    x.setEndingPoint(7);
    
    //Apply the changes...
    x.setBits();
    
    //And print the result...
    cout<<"Done applying bits.\n";
    cout<<"Number 1:";
    x.printBits(x.getNumberOne());
    
    
    return 0;
}

