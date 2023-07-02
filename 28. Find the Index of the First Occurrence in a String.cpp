class Solution
{
public:
    int strStr(string h, string s)
    {
        int m = h.size(), n = s.size(), i = 0, j = 0, k = 0;
        if (m < n)
            return -1;
        while (i < m && j < n)
        {
            if (h[i] == s[j])
            {
                i++;
                j++;
            }
            else
            {
                i = k + 1;
                j = 0;
                k = i;
            }
        }
        if (j == n)
            return k;
        else
            return -1;
    }
};