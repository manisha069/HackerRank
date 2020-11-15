#include <bits/stdc++.h>
#include<string>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string x;
    if(year==1918)
    {
        x="26.09.1918";
    }
    
    else if( year >1700 && year< 1918)
    {
        if(year%4==0)
        {
            string k=to_string(year);
            x="12.09."+k;
        }
        else
        {
            string k=to_string(year);
            x="13.09."+k;
        }
    }
    
    else
    {
        if((year<1918 && year%4== 0) || (year%4==0 && year%100!=0) || year % 400== 0)
            {
                string k=to_string(year);
                x="12.09."+k;
            }
        else
        {
            string k=to_string(year);
            x="13.09."+k;
        }
   
    }
 
   //cout<<x;
 return x;
}
 
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

