#include<iostream>
using namespace std;
int main()
{
    int n, i;
    float larr[50],uarr[50], armean,mid[50],farr[50], fsum=0,mfsum=0;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Lower Limit Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>larr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Upper Limit Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>uarr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements ="<<fsum<<"\n";
    cout<<"*******************************************************";
    for(i=0; i<n; i++)
    {
        mid[i]=(larr[i]+uarr[i])/2;
        cout<<"\nMid value for "<<larr[i]<<"-"<<uarr[i]<<" Class Interval = "<<mid[i]<<"\n"; 
    }
    for(i=0; i<n; i++)
    {
        mfsum=mfsum+(mid[i]*farr[i]);
        armean=mfsum/fsum;
    }
    cout<<"*******************************************************";
    cout<<"\nArithmetic Mean is Found to be = "<<armean<<"\n";
    cout<<"*******************************************************";
    return 0;
}