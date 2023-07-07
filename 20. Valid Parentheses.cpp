class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> myStack;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                myStack.push(c);
            }
            else if (c == ')' || c == ']' || c == '}')
            {
                if (myStack.empty())
                {
                    return false;
                }

                char top = myStack.top();

                if (c == ')' && top != '(' || c == ']' && top != '[' || c == '}' && top != '{')
                {
                    return false;
                }

                myStack.pop();
            }
        }
        return myStack.empty();
    }
};