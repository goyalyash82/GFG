#include <iostream>
using namespace std;
string decToBin(int n){
    if(n==0)
      return ""; 
    
    string temp;
    temp.push_back((n%2)+48);
    
    return decToBin(n/2) + temp;
   
}
int main() {
    // code here
      int deciNum;
    cin>>deciNum;
    
    cout<<decToBin(deciNum);
    

    return 0;
}
