#include <iostream>

using namespace std;

int getJ(int list[], int n, int i)
{

    // cout << endl
    //  << "-----------";
    // for (int idx = 0; idx < n; idx++)
    // cout << list[idx] << " ";
    // cout << "\n from idex i= " << i << "to index " << n - 1 << endl;

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

    for (int i = 0; i < n - 1; i++)
    {
        int j = getJ(newList, n, i);
        // cout
        // << "j: " << j << endl;

        // reverse element from i -> j index
        // cout << "\n ---> reverse i:" << i << " j: " << j << endl;
        if (i != j)
        {
            for (int idx = i; idx <= j; idx++)
            {
                newList[j - idx] = list[idx];
            }
        }
        // keep newList to lattest list
        for (int idx = 0; idx < n; idx++)
        {
            list[idx] = newList[n];
        }
        // cout << "\n =====> new list ";
        // for (int idx = 0; idx < n; idx++)
        // {
        // cout << newList[idx] << " ";
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