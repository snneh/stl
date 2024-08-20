#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<list>

using namespace std;
 

int main()
{

    list <int> intlist;

    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        intlist.push_back(temp);
        intlist.push_back(temp);
    }

    cout << endl;
    for (auto each : intlist) cout << each << endl;

    cout << endl;
    intlist.unique();

    for (auto each : intlist) cout << each << endl;
    cout << endl;

    intlist.sort();
    for (auto each : intlist) cout << each << endl;

 return 0;
}