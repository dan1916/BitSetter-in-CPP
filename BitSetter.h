/* 
 * File:   BitSetter.h
 * Author: Dhavalkumar Suthar
 *
 * Created on October 4, 2015, 2:07 PM
 */

#ifndef BITSETTER_H
#define	BITSETTER_H

#include <stdio.h>

/*
 * Given two 32-bit numbers, N and M, and two bit positions, i and j,
 * this class sets all bits between i and j in N equal to M (e.g., M becomes a
 * substring of N located at i and starting at j).
 */
class BitSetter
{
    //Declare private variables...    
private:
    int numberOne; //This will hold our problem's number N
    int numberTwo; //This will hold our problem's number M
    int startingPoint; //This will hold our problem's number i
    int endingPoint; //This will hold our problem's number j

    //Declare public methods...  
public:

    //Gets the first number.
    int getNumberOne();

    //Gets the second number.
    int getNumberTwo();

    //Gets the starting point.
    int getStartingPoint();

    //Gets the ending point.
    int getEndingPoint();

    //Sets the first number.
    void setNumberOne(int value);

    //Sets the second number
    void setNumberTwo(int value);

    //Sets the starting point.
    void setStartingPoint(int value);

    //Sets the ending point.
    void setEndingPoint(int value);

    //Actually sets the bits as per our requirements.
    void setBits();

    //Helper function to print bits of a number.
    static void printBits(int number);

};

#endif	/* BITSETTER_H */

