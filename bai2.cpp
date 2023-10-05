#include <bits/stdc++.h>
using namespace std;
#define frx for (int &x : a)
#define fx for (int x : a)
int main()
{
    vector<int> v;

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int n;
    cin >> n;

    while (n--)
    {
        int lc;
        cin >> lc;
        if (lc == 1)
        {
            int vti;
            cin >> vti;
            int va;
            cin >> va;
            if (vti >= 0 && vti <= v.size())
            {
                v.insert(v.begin() + vti, va);
            }
        }
        if (lc == 2)
        {
            int vte;
            cin >> vte;
            if (vte >= 0 && vte <= v.size())
            {
                v.erase(v.begin() + vte);
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    } 
}