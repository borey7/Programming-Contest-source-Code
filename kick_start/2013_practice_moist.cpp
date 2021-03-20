#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fee(vector<string> cards, string card)
{
    int f = 0, len = cards.size();

    for (int i = 0; i < len; i++)
    {
        if (card.compare(cards[i]) < 0)
        {
            f = 1;
            break;
        }
    }

    return f;
}

int main(int argc, char *argv[])
{
    int t, n = 0, c = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        getchar();

        int dollar = 0;
        vector<string> cards;
        while (n--)
        {
            string card;
            getline(cin, card);

            dollar = dollar + fee(cards, card);
            cards.push_back(card);
        }

        cout << "Case #" << c << ": " << dollar << endl;
        c++;
    }

    return 0;
}