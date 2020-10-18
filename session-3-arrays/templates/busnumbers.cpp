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
    int n; 
    cin >> n;
    vector<bool> nums (1001, 0);

    int num;
    while(n--){
        cin >> num;
        nums[num] = 1;
    }

    //Making a template was difficult without giving away the entire solution
    //So, we have just included the output statements without context
    
    //int a, b are not part of the solution
    int a, b;
    
    
    //use this statement to print out a single number
    cout << a << " ";
        
    //use this statement to print out a range
    
    cout << a << "-"<< b << " ";    


}