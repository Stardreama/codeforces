#include <stdbool.h>
char *longestPalindrome(char *s)
{
    int len = strlen(s);
    if (len < 2)
    {
        return s;
    }
    int start = 0, maxLen = 1;
    bool dp[1000000][1000000];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < len; i++)
    {
        dp[i][i] = true;
    }
    for (int j = 1; j < len; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (s[i] == s[j])
            {
                if (j - i < 3)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = dp[i + 1][j - 1];
                }
            }
            if (dp[i][j] && j - i + 1 > maxLen)
            {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }
    char *result = (char *)malloc(sizeof(char) * (maxLen + 1));
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';
    return result;
}
