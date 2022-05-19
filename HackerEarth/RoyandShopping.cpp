/* #include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 7;

int arr[mx] = {0};

void seive()
{
    int i, j;

    for (i = 2; i <= mx; i++)
    {
        if (arr[i] == 0)
        {
            for (j = i; j <= mx; j += i)
            {
                if (arr[j] == 0)
                {
                    arr[j] = i;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    seive();
    while (n--)
    {
        int r;
        cin >> r;
        cout << r - arr[r] << "\n";
    }
    return 0;
} */

//Another way

    #include <bits/stdc++.h>
    using namespace std;
    const int mx = 1e6 + 7;
     
    int arr[mx];
     
    void seive()
    {
        int i, j;
     
        arr[1] = 1;
     
        for (i = 2; i < mx; i += 2)
        {
            arr[i] = 2;
        }
     
        for (i = 3; i < mx; i += 2)
        {
            if (arr[i] == 0)
            {
                arr[i] = i;
                for (j = i + i; j < mx; j += i)
                {
                    if (arr[j] == 0)
                    {
                        arr[j] = i;
                    }
                }
            }
        }
    }
     
    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        seive();
     
        int n;
        cin >> n;
     
        while (n--)
        {
            int r;
            cin >> r;
            cout << r - arr[r] << "\n";
        }
        return 0;
    }