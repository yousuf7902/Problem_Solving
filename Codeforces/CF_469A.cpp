#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /* int n,p ,q;
    cin >> n;
    set<int> st;
    cin >> p;
    int arr1[p],max1=INT_MIN ;

    for (int i = 0; i < p;i++){
        cin >> arr1[i];
        st.insert(arr1[i]);
    }

    cin >> q;
    int arr2[q], max2 = INT_MIN;
    for (int i = 0; i < q;i++){
        cin >> arr2[i];
        st.insert(arr2[i]);
    }

    if(st.size()==n){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    } */

    // Another Way

    int n, p, q, count = 1;
    cin >> n;

    vector<int> vec;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        vec.emplace_back(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        vec.emplace_back(x);
    }

    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] != vec[i + 1])
        {
            count++;
        }
    }
    if (count == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}