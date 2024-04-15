
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter your total Anual Income in Rs : ";
    
    long double n;cin>>n;
    long double ans = 0;
    long double cmp;
    if(n>250000)
    {   
        cmp = 250000;
        float temp = min(n-250000,cmp);
        ans += temp*(0.05);
        // n -= 25
    }
    if(n>500000)
    {
        cmp = 250000;
        float temp = min(n-500000,cmp);
        ans += temp*(0.1);
    }
    
    if(n>750000)
    {
        cmp = 250000;
        float temp = min(n-750000,cmp);
        ans += temp*(0.15);
    }
    
    if(n>1000000)
    {
        cmp = 250000;
        float temp = min(n-1000000,cmp);
        ans += temp*(0.20);
    }
    
    if(n>1250000)
    {
        cmp = 250000;
        float temp = min(n-1250000,cmp);
        ans += temp*(0.25);
    }
    
    if(n>1500000)
    {
        float temp =n-1500000;
        ans += temp*(0.30);
    }
    
    if(n>5000000)
    {
        cmp = 5000000;
        float temp = min(n-5000000,cmp)*(0.3);
        ans += temp*0.1;
    }
    
    if(n>10000000)
    {
        cmp = 10000000;
         float temp = min(n-10000000,cmp)*0.3;
         ans += temp*0.15;
    }
    
    if(n>20000000)
    {
        cmp = 30000000;
        float temp = min(n-20000000,cmp)*0.3;
        ans += temp*0.25;
    }
    
    if(n>50000000)
    {
       float temp = (n-50000000.0)*0.3;
       ans += temp*0.37;
    }
    cout<<fixed;
    cout<<"Your total tax is  :  Rs "<<setprecision(5)<<ans<<endl;
    
    return 0;
}
