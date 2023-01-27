#include<iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enetr Any Number : ";
    cin>>n;

    for(i= 1; i<= n; i++)
    {
        for(j= 1; j<= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// *
// **
// ***
// ****
// *****

// to print this