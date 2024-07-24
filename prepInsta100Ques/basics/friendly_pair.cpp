// Two numbers num1 & num2 are friendly pairs if the following holds true -

// (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2

#include <iostream>
using namespace std;

int getDivisors(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{

    int sum1, sum2, num1, num2;
    cin >> num1;
    cin >> num2;
    sum1 = getDivisors(num1);
    sum2 = getDivisors(num2);
    if (sum1 / num1 == sum2 / num2)
    {
        cout << "This is a friendly pair" << endl;
    }
    else
    {
        cout << "This is not a friendly pair";
    }
    return 0;
}