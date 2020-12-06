#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    int day=1;
    int shared=5;
    int liked=2;
    int curr_liked=0;
    while(day<n)
    {
        day++;
        curr_liked=shared/2;
        shared=curr_liked*3;
        liked=liked+(shared/2);
    }
    return liked;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

