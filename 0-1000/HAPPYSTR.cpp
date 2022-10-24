#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        if (str.size() > 2)
        {
            for (int i = 0; i < str.size(); i++)
            {
                if (((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')) && ((str[i + 1] == 'a') || (str[i + 1] == 'e') || (str[i + 1] == 'i') || (str[i + 1] == 'o') || (str[i + 1] == 'u')) && ((str[i - 1] == 'a') || (str[i - 1] == 'e') || (str[i - 1] == 'i') || (str[i - 1] == 'o') || (str[i - 1] == 'u')))
                {
                    count++;
                }
            }

            if (count > 0)
            {
                cout << "Happy" << endl;
            }
            else
            {
                cout << "Sad" << endl;
            }
        }
        else
        {
            cout << "Sad" << endl;
        }
    }
    return 0;
}
