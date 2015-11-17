#include "BitSetter.h"

//Gets the first number.
int BitSetter::getNumberOne()
{
    return numberOne;
}

//Gets the second number.
int BitSetter::getNumberTwo()
{
    return numberTwo;
}

//Gets the starting point.
int BitSetter::getStartingPoint()
{
    return startingPoint;
}

//Gets the ending point.
int  BitSetter::getEndingPoint()
{
    return endingPoint;
}
    
//Sets the first number.
void BitSetter::setNumberOne(int value)
{
    numberOne = value;
}

//Sets the second number
void BitSetter::setNumberTwo(int value)
{
    numberTwo = value;
}
//Sets the starting point.
void BitSetter::setStartingPoint(int value)
{
    startingPoint = value;
}

//Sets the ending point.
void BitSetter::setEndingPoint(int value)
{
    endingPoint = value;
}

//Actually sets the bits as per our requirements.
void BitSetter::setBits()
{
    //The calculation is very easy. We erase appropriate bits in the first number
    //and simply apply a logic OR operation with the number two.
    int allOnes = ~0; // mask with only 1
    int onesBefore = allOnes << (endingPoint + 1);
    int onesAfter = ((1 << startingPoint) - 1);
    
    //Calculate mask. Now this has to set the bits except the starting point
    //and ending point to 1.
    int mask = onesBefore | onesAfter;
    
    //Let's erase the bits from our startingPoint using our mask.
    int bitClearedFirstNumber = numberOne & mask; 
    int bitCleardSecondNumber = numberTwo << startingPoint;
    
    //We finally replace the result of number one.
    numberOne =  bitClearedFirstNumber | bitCleardSecondNumber; 
}

//Helper function to print bits of a number.
void BitSetter::printBits(int number)
{
    int i;
    for(i=8*sizeof(number)-1; i>=0; i--) {
        (number & (1 << i)) ? putchar('1') : putchar('0');
    }    
    printf("\n");
}