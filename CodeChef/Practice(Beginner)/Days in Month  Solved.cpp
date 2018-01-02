//Days in Month  Solved

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int w;
    string s;
    while(t--)
    {
        int DAY[] = {0,0,0,0,0,0,0};
        int idx = 0;
        cin>>w>>s;
        idx = (s=="mon"?0:s=="tues"?1:s=="wed"?2:s=="thurs"?3:s=="fri"?4:s=="sat"?5:6);
        while(w>0)
        {
            DAY[idx]++;
            idx = (idx + 1)%7;
            w--;
        }
        cout<<DAY[0];
        for(int i=1;i<7;i++)
        {
            cout<<" "<<DAY[i];
        }
        cout<<endl;
    }
    return 0;
}
