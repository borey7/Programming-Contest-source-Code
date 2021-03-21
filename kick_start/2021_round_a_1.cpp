#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int getMinOperation(string str, int len, int targetScore)
{
    int currentScore = 0, i = len / 2;

    for (int idx = 0; idx < i; idx++)
    {
        if (str[idx] != str[len - idx - 1])
        {
            currentScore++;
        }
    }

    return currentScore - targetScore < 0 ? targetScore - currentScore : currentScore - targetScore;
}

int main(int argc, char *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        string str;
        cin >> n >> k;
        getchar();
        getline(cin, str);

        cout << "Case #" << (i + 1) << ": " << getMinOperation(str, n, k) << endl;
    }

    return 0;
}