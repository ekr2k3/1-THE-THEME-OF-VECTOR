
#include <bits/stdc++.h>
using namespace std;
#define frx for (int &x : a)
#define fx for (int x : a)

int main()
{
    vector<int> v;
    int N;
    cin >> N;

    while (N--)
    {
        int tt; cin>>tt;
        if(tt ==1 ){
            int x; cin>>x;
            v.push_back(x);
        }
        if(tt==2 ){
            if(!v.empty()) v.pop_back();
        }
        
    }


    if(v.empty()) cout<<"empty";
    else{
        for(auto x : v){
            cout<<x<<" ";
        }
    }
}