//https://www.hackerrank.com/challenges/bon-appetit

#include <vector>
#include <iostream>

using namespace std;


int main() {
    
    int n;
    cin >> n;
    vector<int> cost(n);
    
    int k;
    cin >> k;
    
    int total=0;
    
    for(int c=0; c<n; c++){
        cin >> cost[c];
        if(c!=k) total+=cost[c];
    }
    
    int charged;
    cin >> charged;
    
    total/=2;

    if(charged>total) cout<<(charged-total);
    else if(charged<=total) cout<<"Bon Appetit";
    
    return 0;
}

