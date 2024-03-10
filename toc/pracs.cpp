// program for checking if a string has 3 consecutive 1
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int q0 = 0, q1 = 1, q2 = 2, q3 = 3;
    int currentState = q0;
    string str;
    char ch;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        ch = str[i];
        if (currentState == q0 && ch == '1')
        {
            currentState = q1;
        }
        else if (currentState == q1 && ch == '1')
        {
            currentState = q2;
        }
        else if (currentState == q2 && ch == '1')
        {
            currentState = q3;
        }
        else if (currentState == q3)
        {
            currentState = q3;
        }
        else
        {
            currentState = q0;
        }
    }
    if (currentState == q3)
    {
        cout << "\n"
             << str << " is acceptable";
    }
    else
    {
        cout << "\n"
             << str << " is not acceptable";
    }
    return 0;
}


// program to add two binary numbers
#include <iostream>
#include <string>

using namespace std;

string addBinary(string a, string b)
{
    int maxLength = max(a.length(), b.length());
    string result(maxLength + 1, '0');

    char carry = '0';
    for (int i = maxLength - 1; i >= 0; --i)
    {
        char bit1 = (i < a.length()) ? a[i] : '0';
        char bit2 = (i < b.length()) ? b[i] : '0';
        char sum = (bit1 ^ bit2) ^ carry;
        carry = (bit1 & bit2) | (bit1 & carry) | (bit2 & carry);
        result[i + 1] = sum;
    }

    // Handle carry overflow
    result[0] = carry == '1' ? '1' : '0';
    return result.erase(0, result[0] == '0');
}

int main()
{
    string binary1, binary2;
    cout << "Enter first binary number: ";
    cin >> binary1;
    cout << "Enter second binary number: ";
    cin >> binary2;

    string sum = addBinary(binary1, binary2);
    cout << "Sum of binary numbers: " << sum << endl;

    return 0;
}

// program to accept strings always ending with 101
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int q0 = 0, q1 = 1, q2 = 2, q3 = 3;
    int currentState = q0;
    string str;
    char ch;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); ++i)
    {
        ch = str[i];
        if (currentState == q0 && ch == '1')
        {
            currentState = q1;
        }
        else if (currentState == q1 && ch == '0')
        {
            currentState = q2;
        }
        else if (currentState == q2 && ch == '1')
        {
            currentState = q3;
        }
        else if (currentState == q3 && ch == '1')
        {
            currentState = q1;
        }
        else
        {
            currentState = q0;
        }
    }

    if (currentState == q3 || currentState == q1)
    {
        cout << str << " is acceptable";
    }
    else
    {
        cout << str << " is not acceptable";
    }

    return 0;
}


// program to check if a number is divisible by 3
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int q0 = 0, q1 = 1, q2 = 2;
    string str;
    char ch;
    int currentState = q0;
    cout << "Enter the number: ";
    cin >> str;
    for (int i = 0; i <= str.length(); ++i)
    {
        ch = str[i];
        if (currentState == q0 && (ch == '0' || ch == '3' || ch == '6' || ch == '9'))
        {
            currentState = q0;
        }
        else if (currentState == q0 && (ch == '1' || ch == '4' || ch == '7'))
        {
            currentState = q1;
        }
        else if (currentState == q0 && (ch == '2' || ch == '5' || ch == '8'))
        {
            currentState = q2;
        }
        else if (currentState == q1 && (ch == '0' || ch == '3' || ch == '6' || ch == '9'))
        {
            currentState = q1;
        }
        else if (currentState == q1 && (ch == '1' || ch == '4' || ch == '7'))
        {
            currentState = q2;
        }
        else if (currentState == q1 && (ch == '2' || ch == '5' || ch == '8'))
        {
            currentState = q0;
        }
        else if (currentState == q2 && (ch == '0' || ch == '3' || ch == '6' || ch == '9'))
        {
            currentState = q2;
        }
        else if (currentState == q2 && (ch == '1' || ch == '4' || ch == '7'))
        {
            currentState = q0;
        }
        else if (currentState == q2 && (ch == '2' || ch == '5' || ch == '8'))
        {
            currentState = q1;
        }
    }
    if (currentState==q0){
        cout<<"\n"<<str<<" number is divisible by 3";
    }
    else{
        cout<<"\n"<<str<<" number is not divisible by 3";
    }
    return 0;
}


// program to count the number of zero's and one's present in a string 
#include <iostream>
#include <algorithm>
#include <string>
bool isOne(char ch)
{
    return ch == '1';
}
bool isZero(char ch)
{
    return ch == '0';
}
using namespace std;
int main()
{
    string str;
    int q0 = 0, q1 = 1;
    int currentState = q0;
    string output = "";
    char ch;
    cout << "Enter the string: ";
    cin >> str;
    for (int i = 0; i <= str.length(); ++i)
    {
        ch = str[i];
        if (currentState == q0 && ch == '0')
        {
            output += ch;
            currentState = q0;
        }
        else if (currentState == q0 && ch == '1')
        {
            output += ch;
            currentState = q1;
        }
        else if (currentState == q1 && ch == '0')
        {
            output += ch;
            currentState = q0;
        }
        else if (currentState == q1 && ch == '1')
        {
            output += ch;
            currentState = q1;
        }
    }
    cout << "\nNumber of zero's: " << count_if(output.begin(), output.end(), isZero);
    cout << "\nNumber of one's: " << count_if(output.begin(), output.end(), isOne);
    return 0;
}

