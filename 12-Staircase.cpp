/*Consider a staircase of size 4:

   #
  ##
 ###
####
Observe that its base and height are both equal to N,
and the image is drawn using # symbols and spaces.
The last line is not preceded by any spaces.

Write a program that prints a staircase of size N.

Input Format

A single integer, N, denoting the size of the staircase.

Output Format

Print a staircase of size N using # symbols and spaces.

Note: The last line must have 0 spaces in it.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of N=6.*/

#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int blank=n-i; blank>0; blank--) cout<<" ";
        for(int symbol=1; symbol<=i; symbol++) cout<<"#";
        cout<<endl;
        
    }
    return 0;
}
