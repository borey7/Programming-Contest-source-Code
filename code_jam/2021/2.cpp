#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void showAllPossible()
{
    int arr7[5041][7];
    int idx7 = 0;
    for (int i1 = 1; i1 <= 7; i1++)
    {
        for (int i2 = 1; i2 <= 7; i2++)
        {
            if (i2 == i1)
                continue;
            for (int i3 = 1; i3 <= 7; i3++)
            {
                if (i3 == i1 || i3 == i2)
                    continue;
                for (int i4 = 1; i4 <= 7; i4++)
                {
                    if (i4 == i1 || i4 == i2 || i4 == i3)
                        continue;
                    for (int i5 = 1; i5 <= 7; i5++)
                    {
                        if (i5 == i1 || i5 == i2 || i5 == i3 || i5 == i4)
                            continue;
                        for (int i6 = 1; i6 <= 7; i6++)
                        {
                            if (i6 == i1 || i6 == i2 || i6 == i3 || i6 == i4 || i6 == i5)
                                continue;
                            for (int i7 = 1; i7 <= 7; i7++)
                            {

                                if (i7 == i1 || i7 == i2 || i7 == i3 || i7 == i4 || i7 == i5 || i7 == i6)
                                    continue;

                                idx7++;
                                arr7[idx7][0] = i1;
                                arr7[idx7][1] = i2;
                                arr7[idx7][2] = i3;
                                arr7[idx7][3] = i4;
                                arr7[idx7][4] = i5;
                                arr7[idx7][5] = i6;
                                arr7[idx7][6] = i7;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << idx7 << endl;
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
        showAllPossible();

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