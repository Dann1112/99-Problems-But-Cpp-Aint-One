//https://www.hackerrank.com/challenges/between-two-sets
#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    int m;
    int high=0;
    int cont=0;
    
    cin >> n >> m;
    
    vector<int> a(n);
    
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];      
    }
    vector<int> b(m);
    
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];

        if( b[b_i] > high){
            high=b[b_i];
            
        }
    }
    
    

    for(int x=1; x<=high; x++){ //Busca del 1 hasta el numero mas grande en B
        for(int bb=0; bb < m; bb++){ //Busca dentro de B
            if( b[bb]%x!=0) break;			 //Compara valores en B con iterador anterior para ver si son factores
		    if(bb==m-1){
                for(int aa=0; aa < n ; aa++){ //Itera en A
                    if(x%a[aa]!=0) break;
					else if(aa==n-1) cont++;//Compara si los valores de A son factores de los factores de B
                }
            }
                
        }
    }
    cout<<cont;
    return 0;
}
