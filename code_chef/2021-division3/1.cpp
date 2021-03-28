#include <iostream>

using namespace std;

int main()
{
    int r, o, c;

    cin >> r >> o >> c;

    if (r < c + (20 - o) * 36)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}