#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<pair<int, int>> v = {
        make_pair(0, 6),
        make_pair(1, 2),
        make_pair(2, 5),
        make_pair(3, 5),
        make_pair(4, 4),
        make_pair(5, 5),
        make_pair(6, 6),
        make_pair(7, 3),
        make_pair(8, 7),
        make_pair(9, 6),
    };
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans = 0;
        vector<int> w;
        cin >> a >> b;
        int x, y = 0;
        x = a + b;
        while (x * 10 / 10 != 0)
        {
            w.push_back(x % 10);
            x = x / 10;
        };

        for (int i = 0; i < w.size(); i++)
        {
            ans += v[w[i]].second;
        }
        cout << ans << endl;
    }

    return 0;
}




