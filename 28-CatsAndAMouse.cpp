//https://www.hackerrank.com/challenges/cats-and-a-mouse

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        
        if( abs(z-x) > abs(z-y) ) cout<<"Cat B"<<endl;
        else if( abs(z-x) < abs(z-y) ) cout<<"Cat A"<<endl;
        else cout <<"Mouse C"<<endl;
    }
    return 0;
}
