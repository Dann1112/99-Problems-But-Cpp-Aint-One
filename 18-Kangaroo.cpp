//https://www.hackerrank.com/challenges/kangaroo

#include <iostream>

using namespace std;

void avanza(int k1, int k2, int v1, int v2);

int main(){
    
    int saltos;
    int x1;
    int v1;
    
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    
    
    if((x1<x2 && v1<=v2) || (x2<x1 && v2<=v1) ) cout<<"NO"; //Un canguro esta por detras y va mas lento o a la misma velocidad
    else if(x1<x2 && v1>v2) avanza(x1,x2, v1, v2);
    else if(x2<x1 && v2>v1) avanza(x2,x1, v2, v1);
    return 0;
}

void avanza(int k1, int k2, int v1, int v2){
    while(k1<k2){
        k1+=v1;
        k2+=v2;
        if(k1>k2) cout<<"NO";
        else if(k1==k2) cout<<"YES";
    }
    
    
}
