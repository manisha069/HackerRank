#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
   int f=0,b=0;
   if (n==p)
   return 0;
   else if(p==1)
   return 0;
   else
   {

    if (n%2==0)
    {
        if (p==n-1)
        {
            return 1;
        }
        f=p/2;
        b=n-p;
        b=b/2;
    }
    else
    {
        f=p/2;
        b=n-p;
        b=b/2;
    }
    if (f<b)
    return f;
    else
    return b;
   }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

