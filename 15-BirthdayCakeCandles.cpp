#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    int tallest=0;
    int cont=0;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
        if(height[height_i] > tallest) tallest=height[height_i];
    }
    
    for(int i=0; i<n; i++)
        if (height[i] == tallest) cont++;
        
        cout<<cont;
    
    return 0;
}
