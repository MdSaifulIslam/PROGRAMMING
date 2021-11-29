#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

bool myFun(int a, int b){
    return (a>b);
}

int main(){

    vector <int> vec;
    vector <int>::iterator it;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        vec.push_back(i+3);
    }
    
    sort(vec.begin(), vec.begin()+3, myFun);

    /*
    iterate
    */
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << "\t";
    }
    puts("");

    return 0;
}