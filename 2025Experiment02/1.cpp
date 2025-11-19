#include <bits/stdc++.h>

using namespace std;

int main()
{
    double xn;
    double pi=0;
    for(int i = 1;(xn=1.0*pow(-1,i-1)/(2*i-1))>0.000001||xn<-0.000001;i++) pi+=xn;
    pi*=4;
    cout<<pi<<endl;

    return 0;
}