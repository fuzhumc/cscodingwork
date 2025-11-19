#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p[24]={3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,71,73,79,83,89,97};
    for(int i=6;i<=100;i+=2) for(int j=0;j<24;j++) for(int k=j;k<24;k++) if(p[j]+p[k]==i) cout<<i<<"="<<p[j]<<"+"<<p[k]<<endl;
    return 0;
}