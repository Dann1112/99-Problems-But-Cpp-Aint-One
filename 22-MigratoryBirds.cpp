//https://www.hackerrank.com/challenges/migratory-birds

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int top=0, index=0;
    vector<int> types(n);
    vector<int> cont(n+1);
    
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
       cont[types[types_i]]++;
    }
    
    for(int i=1; i<n+1; i++){
        if(cont[i]>top){
            top=cont[i];
            index=i;
        }
    }
    cout<<index;
      
    return 0;
}

