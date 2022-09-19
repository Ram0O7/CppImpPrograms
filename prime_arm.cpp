// write a program to check whether an input number is prime and Armstrong or not using function
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

void check_prime(int n)
{
    int flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "non-Prime (divided by " << i << " )\n";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << n << " is a Prime number\n";
}

void check_armstrong(int n)
{
    int sum = 0,r;
    int temp;
    for (temp = n; n != 0;n=n/10){
        r = n % 10;
        sum += (r*r*r);
    }
    (sum) == temp ? cout <<sum << " is an Armstrong number" : cout <<sum<< " is not an Armstrong number";
}

int main()
{
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    check_prime(n);
    check_armstrong(n);

    return 0;
}