#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long long n) {
    long size= s.length();
    int flag=0;
    long answer=0;
    
    for(int i=0;i<size;i++)
    {
        if(s[i]=='a')
        {
            flag=1;   //flag =0 means no 'a' flag=1 means 'a' present.
            break;
        }
    }
    
    //when there is a
    if( flag==1)
    {
        if(size==1)
        {
            cout<<"bah";
            answer = n ;
        }
        
        else
        {
            cout<<"cah";
            int c=0;
            //finding a in the og string.
            for(int i=0;i<size;i++)
            {
                if(s[i]=='a')
                {
                    c++;
                }
            }
            
            long long m=n/size;
            long long k= n%size;
            long long t=0;
            long long y= (c*m);
            
            for(int i=0;i<k;i++)
            {
                if(s[i]=='a')
                {
                    t++;
                }
            }
            
            y=y+t;
            
            answer=y;
        
        }
    }
    
    

return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

