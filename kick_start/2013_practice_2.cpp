// https://blog.csdn.net/weixin_44833351/article/details/112154546

#include <iostream>
#include <math.h>

using namespace std;

#define PI acos(-1)
#define Equ(a, b) ((fabs((a) - (b))) < (eps))

const double eps = 1e-6;

double getAngle(int v, int d)
{
    double s = (9.8 * d) / pow((double)v, 2);
    if (Equ(s, 1.000000))
        s = 1.000000;
    return asin(s) * 180 / (PI * 2);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int v, d;
        cin >> v >> d;
        cout << "Case #" << i + 1 << ": ";
        printf("%.7lf\n", getAngle(v, d));
    }
    return 0;
}