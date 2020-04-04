#include<bits/stdc++.h>
using namespace std;


string addbinary(string a, string b)
{
    string result = "";
    int s = 0;


    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || s == 1)
    {
        // Comput sum of last digits and carry
        s += ((i >= 0)? a[i] - '0': 0);

        s += ((j >= 0)? b[j] - '0': 0);



        result = char(s % 2 + '0') + result;

        // Compute carry

        s /= 2;

        // Move to next digits
        i--; j--;
    }
    return result;
}

// Driver program
int main()
{
    string a = "110001", b="100000";
    cout << addbinary(a, b) << endl;
    return 0;
}
