#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int N) {
        int n = N,cnt = 0;
        while(n!=0){
            int x = n % 10;
            if(x !=0 && N%x == 0)cnt++;
            n/=10;
        }
        cout << cnt << endl;

    return cnt;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

