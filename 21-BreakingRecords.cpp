//https://www.hackerrank.com/challenges/breaking-best-and-worst-records

#include <vector>
#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int highest, contH=0;
    int lowest, contL=0;
    vector<int> score(n);
    
    for(int score_i = 0; score_i < n; score_i++){
        
       cin >> score[score_i];
        
        if(score_i==0){
            highest=score[score_i];
            lowest=score[score_i];
            continue;
        }
        
        if(score[score_i]>highest){
            highest=score[score_i];
            contH++;
        }
        
        else if(score[score_i]<lowest){
            lowest=score[score_i];
            contL++;
        }
    }
    
    cout<<contH<<" "<<contL;
    
    return 0;
}

