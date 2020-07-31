#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    int arr[n];

    int miss;

    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] != i + 1)
        {
            cout << i + 1 << endl;
            break;
        }
        else
            continue;
    }



}


