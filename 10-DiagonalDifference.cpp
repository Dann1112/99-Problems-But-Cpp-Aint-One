/*Given a square matrix of size N x N, calculate the absolute
difference between the sums of its diagonals.

Input Format

The first line contains a single integer, N. The next N lines
denote the matrix's rows, with each line containing N 
space-separated integers describing the columns.

Output Format

Print the absolute difference between the two sums of the
matrix's diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12

Sample Output

15

Explanation

The primary diagonal is: 
11
      5
            -12

Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:
            4
      5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 

Difference: |4 - 19| = 15*/

#include <vector>
#include <iostream>
using namespace std;


int main(){
    int n;
    int acum1=0;
    int acum2=0;
    cin >> n;
    
    vector< vector<int> > a(n,vector<int>(n));
    
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    for(int i=0; i<n; i++) 
        acum1+=a[i][i];
    
    int i=n-1;
    for(int j = 0;j < n; j++){
        acum2+=a[i][j];
        i--;
    }
    
    cout<<abs(acum1-acum2);
    return 0;
}
