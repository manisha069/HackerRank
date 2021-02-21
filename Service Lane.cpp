#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int ar[n];
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<k;i++)
    {
        int a, b;
        cin>>a>>b;
        int min=10000000;
        for(int j=a;j<=b;j++)
        {

            if(ar[j]<min)
            {
                min=ar[j];
            }

        }
        ans.push_back(min);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }


    return 0;
}

