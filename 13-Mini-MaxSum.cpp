/*Given five positive integers, find the minimum and maximum values
that can be calculated by summing exactly four of the five integers.
Then print the respective minimum and maximum values as a single line
of two space-separated long integers.

Input Format

A single line of five space-separated integers.

Constraints

Each integer is in the inclusive range [1, 10^9].

Output Format

Print two space-separated long integers denoting the respective 
minimum and maximum values that can be calculated by summing exactly
four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input

1 2 3 4 5

Sample Output

10 14

Explanation

Our initial numbers are 1, 2, 3, 4, and 5. We can calculate the following
sums using four of the five integers:

If we sum everything except 1, our sum is 2+3+4+5=14.
If we sum everything except 2, our sum is 1+3+4+5=13.
If we sum everything except 3, our sum is 1+2+4+5=12.
If we sum everything except 4, our sum is 1+2+3+5=11.
If we sum everything except 5, our sum is 1+2+3+4=10.

As you can see, the minimal sum is 1+2+3+4=10 and the maximal sum is 2+3+4+5=14.
Thus, we print these minimal and maximal sums as two space-separated integers on a new line.

Hints: Beware of integer overflow! Use 64-bit Integer.*/

#include <iostream>
#include <array>

using namespace std;

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    long int temp;
    
    cin >> a >> b >> c >> d >> e;
       
    long int withoutA = b+c+d+e;
    long int withoutB = a+c+d+e;
    long int withoutC = a+b+d+e;
    long int withoutD = a+b+c+e;
    long int withoutE = a+b+c+d;
    
    long int values[5];
    
    values[0]=withoutA;
    values[1]=withoutB;
    values[2]=withoutC;
    values[3]=withoutD;
    values[4]=withoutE;
      
    
    for(int j=0; j<5;j++){
        for(int i=0;i<4;i++){
            if(values[i] > values[i+1]){
                temp=values[i+1];
                values[i+1] = values[i];
                values[i]=temp;
            }
        }
    }
    
    cout<<values[0]<<" "<<values[4];
    
    
    return 0;
}

