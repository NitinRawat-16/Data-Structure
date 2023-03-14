#include <iostream>
#include <vector>
using namespace std;

int mFibo(int n, vector<int> dp)
{
    // Memorization
    // Time Complexity => O(n)
    // Space Complexity => O(n)(recursion stack) + O(n)(for vector)

    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = mFibo(n - 1, dp) + mFibo(n - 2, dp);
}

int tFibo(int n, vector<int> dp)
{
    // Tabulation
    // Time Complexity O(n)
    // Space Complexity O(n)(vector)

    if (n == 0)
        return n;
    if (n == 1)
        return n;
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}

int bestFibo(int n)
{
    // Tabulation
    // Time Complexity O(n)
    // Space Complexity O(1)

    int s_prev = 0, prev = 1, curr;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        curr = prev + s_prev;
        s_prev = prev;
        prev = curr;
    }
    return prev;
}
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    cout << bestFibo(n);
}