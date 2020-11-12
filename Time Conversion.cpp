#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int size=s.length();
    string k;
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            k.push_back('0');
            k.push_back('0');
            for(int i=2;i<size-2;i++)
            {
                k.push_back(s[i]);
            }
        }
        else
        {
            for(int i=0;i<size-2;i++)
            {
                k.push_back(s[i]);
            }
        }
    }
    
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            for(int i=0;i<size-2;i++)
            {
                k.push_back(s[i]);
            }
        }
        else
        {
             k.push_back(s[0]+ 1);
        k.push_back(s[1]+2);
        for(int i=2;i<size-2;i++)
            {
                k.push_back(s[i]);
            }
        }
       
    }
    return k;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

