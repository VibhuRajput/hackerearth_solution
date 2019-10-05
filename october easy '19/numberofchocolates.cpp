#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,d1,d2;
    cin>>a>>b>>d1>>d2;
    int daysA=a/d1;
    int daysB=b+daysA*d2;
    cout<<daysB<<endl;
	return 0;
}
