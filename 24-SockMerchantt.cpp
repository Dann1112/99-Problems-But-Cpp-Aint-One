//https://www.hackerrank.com/challenges/sock-merchant

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    int cont;
    cin >> n;
    vector<int> c(n);
    vector<int> oc(n);
    
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
        oc[c_i]=0;
    }
    
    for(int i=0; i<n; i++){
        if(oc[i]==0){
            for(int j=i+1; j<n; j++){
                if(c[i]==c[j]){
                    cont++;
                    oc[i]=1;
                    oc[j]=1;
                    break;
                }
            }
        }
    }
    
    cout<<cont;
    return 0;
}

