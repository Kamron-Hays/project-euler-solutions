#include <iostream>
#include <vector>

using namespace std;

// Multiples of 3 and 5
// Problem 1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we
// get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.
int SumMultiples(vector<int> numbers, int max)
{
    int sum = 0;

    if ( !numbers.empty() )
    {
        for (int i = 1; i < max; i++)
        {
            for (int n : numbers)
            {
                if ( i % n == 0 )
                {
                    sum += i;
                    break;
                }
            }
        }
    }

    return sum;
}

int main()
{
    vector<int> ary0 = { };
    vector<int> ary1 = { 3 };
    vector<int> ary2 = { 5 };
    vector<int> ary3 = { 3, 5 };
    cout << (SumMultiples(ary0, 10) == 0 ? "pass" : "fail") << endl;
    cout << (SumMultiples(ary1, 10) == 18 ? "pass" : "fail") << endl;
    cout << (SumMultiples(ary2, 10) == 5 ? "pass" : "fail") << endl;
    cout << (SumMultiples(ary3, 10) == 23 ? "pass" : "fail") << endl;
    cout << (SumMultiples(ary3, 1000) == 233168 ? "pass" : "fail") << endl;
    return 0;
}
