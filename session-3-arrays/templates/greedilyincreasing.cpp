#include <iostream>
#include <vector>


using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> a, gis;
    
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }

    //solution logic here
    
    
    cout << gis.size() << endl;
    for(int i =0; i < gis.size(); i++){
        cout << gis[i] << " ";
    }

}
