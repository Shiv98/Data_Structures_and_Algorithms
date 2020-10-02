/**
 * This program is written for:
 * Assignment 1 : SDET Profile, AdmitKard.
 * 
 * Submitted by:
 * Shivangi Gupta, Mob: 9570612402, Email: shivangi.gupta9820@gmail.com
 * 
 * Question:
 *  If we list all the natural numbers below 10 that are multiples of 3 and 5, 
 *  we get 3, 5, 6 and 9. The sum of these multiples is 23 and reverse is 32. 
 *  Write a program in your favourite programming language to find the sum of 
 *  all the multiples of X and Y below N and also print the reverse of that sum. 
*/

#include<iostream>
using namespace std;

/**
 * Reverses the given number.
 * @param n <int>: the number to reverse.
 * @return reverse_num <int>: the reversed number.
*/
int reverse(int n)
{
    int reverse_num = 0;
    while(n != 0)
    {
        int remainder = n%10;
        reverse_num = reverse_num*10 + remainder;
        n /= 10;
    }
    return reverse_num;
}

/**
 * Prints the sum of multiples of X & Y below the number N and the reverse of the sum.
 * 
 * The sum is calculated using the mathematical function of sum of an AP.
 * Time Complexity to find the sum is O(1).
 * 
 * @param n <int>: The number n provided by user.
 * @param x <int>: The number x provided by user.
 * @param y <int>: The number y provided by user.
 * @throw "Please enter a natural number!" if number entered is less that 1.
 * @throw "X and Y should be a natural number!" if X or Y is less than or equal to 0.
 * @return 0.
*/
int printSum(int n, int x, int y)
{
    int sum_multiples = 0, sum_reverse;

    if(n<1)
    {
        throw "Please enter a natural number N!";
    }
    if(x <= 0 || y <= 0)
    {
        throw "X and Y should be a natural number!";
    }

    int sum_mul_x  = ((n-1)/x)*(((n-1)/x)+1);
    int sum_mul_y =  ((n-1)/y)*(((n-1)/y)+1);
    int sum_mul_xy =  ((n-1)/(x*y))*(((n-1)/(x*y))+1);
    sum_multiples = ((x * sum_mul_x) + (y*sum_mul_y) - (x*y * sum_mul_xy))/2;

    sum_reverse = reverse(sum_multiples);
    cout<<"Sum of multiples of "<<x<<" and "<<y<<" below "<<n<<" is : "<<sum_multiples;
    cout<<"\nReverse of the sum is : "<<sum_reverse;
    
    return 0;
}

/**
 * Takes integer input from the user.
 * @return <int> taken from the user.
 * @throw "Please enter an integer only!" : if the user enters any invalid input.
*/
int inputInt()
{
    string str;
    cin>>str;
    try
    {
        return stoi(str);
    }
    catch(invalid_argument& e)
    {
        throw "Please enter an integer only!\n";
    }
    
}

/// The main function.    
int main()
{
    cout<<"Enter the values of N, X, Y :\n";
    try
    {
        int n = inputInt() , x = inputInt(), y = inputInt();
        printSum(n,x,y);
    }
    catch(const char* msg)
    {
       cout << msg;
    }
    return 0;
}