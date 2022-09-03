#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    int arr[] = {100, 50, 10, 5, 2, 1};
    while (T--)
    {
        long long int N;
        cin >> N;
        int noOfNotes = 0;
        for (int i = 0; i < 6; i++)
        {
            noOfNotes += N / arr[i];
            N = N % arr[i];
        }
        cout << noOfNotes << endl;
    }
    return 0;
}
