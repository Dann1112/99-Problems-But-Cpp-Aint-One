// https://www.hackerrank.com/challenges/apple-and-orange?h_r=next-challenge&h_v=zen

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int s; //Inicio de la casa
    int t; //Fin de la casa
    cin >> s >> t;
    
    int a; //Manzano
    int b; //Naranjo
    cin >> a >> b;
    
    int m; //Distancia manzana
    int n; //Distancia naranja
    cin >> m >> n;
    
    int aps=0;
    int ors=0;
    
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
        
        if( ( apple[apple_i] + a ) >=s && ( apple[apple_i] + a ) <=t ) aps++;
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
        
        if( ( orange[orange_i] + b )>= (s) && ( orange[orange_i] + b ) <= (t)) ors++;
    }
    
    cout << aps << endl;
    cout << ors << endl;
    
    return 0;
}

