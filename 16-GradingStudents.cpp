/*https://www.hackerrank.com/challenges/grading*/

#include <iostream>
#include <vector>

using namespace std;


int main(){
    int n;
    int cont=0;
    int temp;
    
    cin >> n;
    vector <int> grades(n);
    for(int i = 0; i < n; i++)
        cin >> grades[i];
    
    for(int j=0; j<n; j++){
        
        if(!(grades[j]<38)){
            
        temp=grades[j];
            cont=0;
        while(temp % 5 != 0){
            temp++;
            cont++;
            }
            if(cont<3) grades[j]=temp;
            
        }
        
        cout<<grades[j]<<endl;
        }
    return 0;
}

