#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

/*
1+(2+3)+(4+5+6)+...+n
*/

int main(){

    long long n;

    cin >> n;

    cout << "nth: "<<(n*(n+1)/2) << " sum: "<<(n*(n+1)/2) * ((n*(n+1)/2)+1) /2 << endl;

    return 0;
}