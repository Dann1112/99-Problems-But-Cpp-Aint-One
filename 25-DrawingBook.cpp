//https://www.hackerrank.com/challenges/drawing-book


#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int p;
    cin >> p;
    
    int pag;
    int cont=0;
    
    if(p<=(n/2)){
        pag=1;
        while(p>pag){
            pag+=2;
            cont++;
        }
    }
    
    else if(p>(n/2)){
        pag=n;
        if(n%2==0){
            pag=n+1;
        }
        while(p<(pag-1)){
            pag-=2;
            cont++;
        }
    }
    
    cout<<cont;
    return 0;
}

