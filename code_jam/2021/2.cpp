#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void showAllPossible(int n)
{
    int idx[] = {0, 0, 0, 0, 0, 0, 0, 0};
    int arr7[1 * 2 * 3 * 4 * 5 * 6 * n + 1][n];
    int arr6[1 * 2 * 3 * 4 * 5 * n + 1][n];
    int arr5[1 * 2 * 3 * 4 * n + 1][n];
    int arr4[1 * 2 * 3 * n + 1][n];
    int arr3[1 * 2 * n + 1][n];
    int arr2[1 * n + 1][n];
    int count[] = {0, 0, 0, 0, 0, 0, 0, 0};
    for (idx[1] = 1; idx[1] <= n; idx[1]++)
    {
        for (idx[2] = 1; idx[2] <= n; idx[2]++)
        {
            if (idx[2] == idx[1])
                continue;
            if (n == 2)
            {
                count[n]++;
                for (int i = 0; i < n; i++)
                    arr2[count[n]][i] = idx[i + 1];
            }
            for (idx[3] = 1; idx[3] <= n; idx[3]++)
            {
                if (idx[3] == idx[1] || idx[3] == idx[2])
                    continue;
                if (n == 3)
                {
                    count[n]++;
                    for (int i = 0; i < n; i++)
                        arr3[count[n]][i] = idx[i + 1];
                }
                for (idx[4] = 1; idx[4] <= n; idx[4]++)
                {
                    if (idx[4] == idx[1] || idx[4] == idx[2] || idx[4] == idx[3])
                        continue;
                    if (n == 4)
                    {
                        count[n]++;
                        for (int i = 0; i < n; i++)
                            arr4[count[n]][i] = idx[i + 1];
                    }
                    for (idx[5] = 1; idx[5] <= n; idx[5]++)
                    {
                        if (idx[5] == idx[1] || idx[5] == idx[2] || idx[5] == idx[3] || idx[5] == idx[4])
                            continue;
                        if (n == 5)
                        {
                            count[n]++;
                            for (int i = 0; i < n; i++)
                                arr5[count[n]][i] = idx[i + 1];
                        }
                        for (idx[6] = 1; idx[6] <= n; idx[6]++)
                        {
                            if (idx[6] == idx[1] || idx[6] == idx[2] || idx[6] == idx[3] || idx[6] == idx[4] || idx[6] == idx[5])
                                continue;
                            if (n == 6)
                            {
                                count[n]++;
                                for (int i = 0; i < n; i++)
                                    arr6[count[n]][i] = idx[i + 1];
                            }
                            for (idx[7] = 1; idx[7] <= n; idx[7]++)
                            {

                                if (idx[7] == idx[1] || idx[7] == idx[2] || idx[7] == idx[3] || idx[7] == idx[4] || idx[7] == idx[5] || idx[7] == idx[6])
                                    continue;

                                count[n]++;
                                for (int i = 0; i < n; i++)
                                    arr7[count[n]][i] = idx[i + 1];
                                // arr7[idx7][0] = idx[1];
                                // arr7[idx7][1] = idx[2];
                                // arr7[idx7][2] = idx[3];
                                // arr7[idx7][3] = idx[4];
                                // arr7[idx7][4] = idx[5];
                                // arr7[idx7][5] = idx[6];
                                // arr7[idx7][6] = idx[7];
                            }
                        }
                    }
                }
            }
        }
    }
    cout << n << ": " << count[n] << endl;
}

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

        // int n, c;
        // cin >> n >> c;
        // int answers[n];
        // bool hasAns = false;

        // find possible list by n
        for (int i = 2; i <= 7; i++)
            showAllPossible(i);

        // int currentCost = getCost(list, n);
        // if (currentCost == c)
        // {
        //     answers = list;]
        //     hasAns = true;
        //     break;
        // }

        // answer
        // cout << "Case #" << tcase << ":";
        // if (hasAns)
        // {
        //     for (int idx = 0; idx < n; idx++)
        //         cout << " " << answers[idx];
        // }
        // else
        // {
        //     cout << " IMPOSSIBLE";
        // }
        // cout << endl;
    }

    return 0;
}