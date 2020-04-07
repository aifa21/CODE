#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, rev = 0, rem, org;
    printf("Enter an integer: ");
    scanf("%d", &n);
    org = n;


    while (n != 0) {
        rem = n % 10;

        rev = rev * 10 + rem;
        n /= 10;
    }

    // palindrome if orignalN and rev are equal
    if (org == rev)
        printf("%d is a palindrome.", org);
    else
        printf("%d is not a palindrome.", org);

    return 0;
}
