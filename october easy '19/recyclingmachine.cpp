#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       unsigned long long int m,n;
        cin>>n>>k;
        unsigned long long int summation=0,answer;
        while(1)
        {
            unsigned long long int empty= m%n;
            unsigned long long int inter = m-empty;
            unsigned long long int full =inter/n;
            summation=sum+full;
            answer=full+empty;
            m=anwers;
            if(answer<n)
            break;
        }
        cout<<summation<<endl;
    }
	return 0;
}
