//https://www.hackerrank.com/challenges/counting-valleys

#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    char steps[n];
    cin >> steps;
    
    int cont=0;
    int valleys=0;
    
    for(int i=0; i<n; i++){
        if(steps[i]=='U'){
            if(cont==-1){
                valleys++;
            }
            cont++;
        }
        else if(steps[i]=='D')cont--;
        
    }
    
    cout << valleys;
    
    return 0;
}


