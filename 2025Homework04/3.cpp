#include <bits/stdc++.h>

using namespace std;

bool eq(double a,double b) {return fabs(a-b)<=0.000001;}

int main()
{
    double a,b,c;
    double p;
    string type="";
    double s;
    cin>>a>>b>>c;
    if(eq(a,b)&&eq(b,c)) type+="等边";
    else if(eq(a,b)||eq(b,c)||eq(c,a)) type+="等腰";
    if(eq(a*a+b*b,c*c)||eq(b*b+c*c,a*a)||eq(c*c+a*a,b*b)) type+="直角";
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(6)<<"边长为"<<a<<" "<<b<<" "<<c<<"的三角形是 "<<type<<"三角形,其面积为"<<s;

    return 0;
}