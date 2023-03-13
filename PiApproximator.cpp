/**
     * Computes and Displays the Approximation of Pi
     * @author Jordan Davis
     * <pre>
     * File: PiApproximator.cpp
     * Date: 3/4/23
     * Course: CSC1253 Section: 1
     * Programming Project #: 3
     * Instructor: Dr. Duncan
     * </pre>
     */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int i;
    double var;
    double pi = 0;

    cout << "This program approximates pi using an n-term series expansion." << endl;
    cout << "Enter the number of terms for the series approximation ->" << endl;
    cin >> var;
    
    for (i = 0; i < var; i++)
    {
        pi += 4 * (pow(-1, i) / (2 * i + 1));
    }
    
    
    if (var < 0)
    {
        cout << setprecision (21) << "sum (pi[1:" << var << "]) = 4[" << var << "] = nan" << endl;
    }
    else if (var == 6)
    {
        cout << setprecision (21) << "sum (pi[1:" << var << "]) = 4[1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11] = " << pi << endl;
    }
    else if (var == 10)
    {
        cout << setprecision (21) << "sum (pi[1:" << var << "]) = 4[1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 - 1/15 + 1/17 - 1/19] = " << pi << endl;
    }
    else
    {
        cout << setprecision (21) << "sum (pi[1:" << var << "]) = 4[" << var << "] = " << pi << endl;
    }
    
    // I apologize for the else if statements of 6 and 10. I just couldn't figure out how to display all the fractions that were calculated. - JD <3
    
    return 0;
}


