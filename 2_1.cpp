#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  i,a,b;
    vector<long>mass,strength;
    while(cin>>a>>b)
    {
        mass.push_back(a);
        strength.push_back(b);
    }
    sort(mass.begin(), mass.end());
    sort(strength.begin(), strength.end());
    long Mass = mass[0],
         Height = 1;
    for(i=1;i<mass.size();i++)
    {
         if(strength[i] >= Mass)
         {
            Mass += mass[i];
            Height++;
         }
    }
    cout<<Height;
    return 0;
}


