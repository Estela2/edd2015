#include <iostream>
#include <sstream>
#include <stack>
#include <limits>
#include <string>
using namespace std;

int priority(char a)
{
    int temp;

    if (a == '*' || a == '/' || a == '%')
       temp = 2;
    else  if (a == '+' || a == '-')
       temp = 1;
    return temp;
}

int main()
{

    string infix;
    stringstream output;
    stack<char> s1, s2;

    cout << "Introduce expresion aritmetica: " << endl;
    getline(cin, infix);


    for(int i = infix.length() - 1; i >= 0; i--)
    {

        if (infix[i] == '+' || infix[i] == '-' ||
            infix[i] == '*' || infix[i] == '/' || infix[i] == '%')
        {
            while(!s1.empty() && priority(s1.top()) > priority(infix[i]))
            {
                output << s1.top();
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(infix[i]);
        }
            else
        {
            output << infix[i];
            s2.push(infix[i]);
        }
    }

    while(!s1.empty())
    {
        output << s1.top();
        s2.push(s1.top());
        s1.pop();
    }

    cout << "\nAcomodo: ";

    while(!s2.empty())
    {
        cout << s2.top();
        s2.pop();
    }

}
