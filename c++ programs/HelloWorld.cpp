#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    map<int,string> m;
    m.insert(make_pair(1,"one"));
    m.insert(make_pair(2,"two"));
    m.insert(make_pair(3,"three"));
    m.insert(make_pair(4,"four"));m.insert(make_pair(5,"five"));m.insert(make_pair(6,"six"));m.insert(make_pair(7,"seven"));
    m.insert(make_pair(8,"eight"));m.insert(make_pair(9,"nine"));
    cin >> n;
    if(n>9)
    {
        cout<<"Greater than 9";
    }
    else
    {
        cout<<m[n];   
    }
    // your code goes here
    return 0;
}
