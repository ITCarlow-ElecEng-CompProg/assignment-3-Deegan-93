/** Luke Deegan,
 *  Exercise 3,
 *  Standard Deviation,
 *  23/9/17
 */

/** Preprocessor directives */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /** Variable declarations */
    double array[10] = {0}, product, sum=0, mean, stddev;
    int i = 0;

    /** Declare purpose of the program */
    cout << "\n" << "Program to calculate standard deviation" << "\n" << endl;

    /** For loop to calculate the arithmetic mean of the values inputed */
    for (i=0; i<10; i++)
    {
        cout << "\n" << "Enter Value: " << "\n" << endl;
        cin >> array[i];
        sum = sum+array[i];
    }

    /** Declare value for variable mean via simple formuala */
    mean = sum/10;

    /** Display mean value to user */
    cout << "\n" << "Arithmetic mean value: " << "\n" << mean << endl;

    /** For loop to calculate the product */
    for(i=0; i<10; i++)
    {
        product = product+(((array[i]-mean)*(array[i]-mean))/9);
    }

    /** Formuala to calculate the standard dev */
    stddev = pow(product, 0.5);

    /** Display result to the user */
    cout << "\n" << "Standard Deviation: " << "\n" << stddev << endl;

    return 0;
}
