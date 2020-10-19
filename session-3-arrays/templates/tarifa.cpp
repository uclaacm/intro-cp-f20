 #include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <iomanip>
#include <limits.h>

using namespace std;

#define PI 3.1415926535897932384626433832795

int main(){
    int x, n;
    cin >> x >> n;
    vector<int> p;
    int mbs;
    while(n--){
        cin >> mbs;
        p.push_back(mbs);
    }
    
    int leftover = 0;


    cout << leftover+x << endl;


}
