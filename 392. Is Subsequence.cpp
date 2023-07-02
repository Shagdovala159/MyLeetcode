class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int lens = s.length();
        int lent = t.length();
        int index = 0;
        for (int i = 0; i < lent; i++)
        {
            if (s[index] == t[i])
            {
                index++;
            }
        }
        if (lens == index)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};