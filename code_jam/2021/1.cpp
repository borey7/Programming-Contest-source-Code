#include <iostream>

using namespace std;

int getJ(int list[], int n, int i)
{
    int j = i, min = list[i];
    for (int idx = i; idx <= n - 1; idx++)
    {
        if (list[idx] < min)
        {
            min = list[idx];
            j = idx;
        }
    }

    return j;
}

int getCost(int list[], int n)
{
    int cost = 0;
    int newList[n];
    for (int idx = 0; idx < n; idx++)
    {
        newList[idx] = list[idx];
    }
    // cout << "----------- new list > ";
    // for (int idx = 0; idx < n; idx++)
    // {
    //     cout << newList[idx] << " ";
    // }
    for (int i = 0; i < n - 1; i++)
    {
        int j = getJ(newList, n, i);

        // reverse from index of i to j
        // cout << "\n=== reverse " << i << " to " << j << endl;
        for (int idx = 0; idx <= (j - i) / 2; idx++)
        {
            int temp = newList[i + idx];
            newList[i + idx] = newList[j - idx];
            newList[j - idx] = temp;
            // cout << (i + idx) << " and " << (j - idx) << " : " << newList[i + idx] << " < - > " << newList[j - idx] << endl;
            // cout << "          result: ";
            // for (int aa = 0; aa < n; aa++)
            // {
            //     cout << newList[aa] << " ";
            // }
            // cout << endl;
        }

        // cout << "\n-----------> ";
        // for (int idx = 0; idx < n; idx++)
        // {
        //     cout << newList[idx] << " ";
        // }
        // cout << endl;

        cost += (j + 1) - (i + 1) + 1;
    }

    return cost;
}

int main(int argc, char *argv[])
{

    int t;
    cin >> t;
    for (int tcase = 1; tcase <= t; tcase++)
    {

        int n;
        cin >> n;
        int list[n];
        for (int i = 0; i < n; i++)
            cin >> list[i];
        cout << "Case #" << tcase << ": " << getCost(list, n) << endl;
    }

    return 0;
}