
#include <iostream>

#include <stack>
#include <string.h>

using namespace std;

bool isOperator(char ch)
{
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
        return true;
    else
        return false;
}


int performOperation(int op1, int op2, char op)
{
    int ans;
    switch(op){
    case '+':
        ans = op2 + op1;
        break;
    case '-':
        ans = op2 - op1;
        break;
    case '*':
        ans = op2 * op1;
        break;
    case '/':
        ans = op2 / op1;
        break;
   #include <iostream>
#include <conio.h>
#include <stack>
#include <string>
using namespace std;

int priority(char a) 
{
     int temp;
     if( a=='^')
         temp = 1;
     else
     {
         if(a=='*' || a=='/')
              temp = 2;
         else
         {
             if(a=='+' || a=='-')
                  temp = 3;
         }
     }
     return temp;
}
         
int main()
{
    string infix;
    cout << "Enter an arithmetic expression: " << endl;
    cin >> infix;
    
    stack<char> temp;
    stack<char> postfix;
    
    int i;
   
    for (i=0; i<11; i++)
    {
       if (infix[i]!='+' || infix[i]!='-' || infix[i]!='*' || infix[i]!='/' || infix[i]!='^' || infix[i]!='(' || infix[i]!=')')
          {postfix.push(infix[i]);
          cout << postfix.top();}
       else
       {
           if (infix[i]=='(')
              temp.push(infix[i]);
           else
           {
               if (infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]!='^')
               {
                    while (priority(temp.top()) <= priority(infix[i]))
                    {
                         postfix.push(infix[i]);
                         cout << postfix.top();
                         temp.pop();
                    }
                    temp.push(infix[i]);
               }
               else if(infix[i]==')')
               {
                    while (temp.top() != '(')
                    {
                         postfix.push(infix[i]);
                         cout << postfix.top();
                         temp.pop();
                    }
                    temp.pop();
               }
                   
           }
       }
    }      
       
    getchar();
    return 0;
}