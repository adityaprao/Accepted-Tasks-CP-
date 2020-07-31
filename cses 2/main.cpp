#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    int arr[n-1];

    int miss;

    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n-1);

    int flag = 0;




    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] != i + 1)
        {
            cout << i + 1 << endl;
            flag = 1;
            break;
        }
        else
            continue;
    }
    if(flag == 0)
        cout << n << endl;



}


