#include <iostream>
#include <string>
using namespace std;

int main(){
  int L, x;
  cin >> L >> x;
    
  string type;
  int num, denied = 0, curr = 0;
    
  for(int i =0; i < x; i++){
    cin >> type >> num; //takes in string for event type and number of people in group

    /* your logic here */

        
    cin.ignore(100, '\n'); //gets rid of newline character so that word on next line can be processed
  }
    
  cout << denied << endl;
    

}
