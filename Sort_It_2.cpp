#include <bits/stdc++.h>
using namespace std;
long long* sort_it(int n)
{
    long long* a = new long long[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n, greater<long long>());
    return a;
}

int main()
{
    int n;
    cin >> n;
    long long* arr = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}



