#include<bits/stdc++.h>
bool isValidParenthesis(string expression)
{
    stack<char>st;
    for(int i=0; i<expression.length(); i++)
    {
        if(expression[i]=='(' || expression[i]=='{' || expression[i]=='[')
        {
            st.push(expression[i]);
        }

        else {
          if (!st.empty() && (expression[i] == ')' && st.top() == '('))
            st.pop();
          else if (!st.empty() && (expression[i] == '}' && st.top() == '{'))
            st.pop();
          else if (!st.empty() && (expression[i] == ']' && st.top() == '['))
            st.pop();
        else
        return false;
        }   
    }
    if(st.empty())
    return true;
    else
    return false;
}
