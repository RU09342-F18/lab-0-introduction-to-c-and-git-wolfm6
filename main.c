/*  Created on: September 10, 2018
 *  Last Edited: September 10, 2018
 *  Author: Matthew Wolf
 * Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/
#include <msp430.h>

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
#include <stdio.h>
int math(int num1, int num2, char Operator)
{

    switch(Operator)
    {

    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return  num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    case '%':
        return num1 % num2;
        break;
    case '<':
        return num1 << num2;
        break;
    case '>':
        return  num1 >> num2;
        break;
    case '&':
         return num1 & num2;
         break;
    case '|':
         return num1 | num2;
         break;
    case '^':
        return num1 ^ num2;
        break;
    case '~':
        return ~num1;
        break;
    default:
        break;
        return -1;
    }
}
