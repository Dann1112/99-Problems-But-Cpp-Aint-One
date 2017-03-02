/* Calculator Challenge

The following program should function as a basic calculator;
it should ask the user to input what type of arithmetic operation
he would like, and then ask for the numbers on which the operation
should be performed. The calculator should then give the output of the operation.

_______ <iostream>


___ multiply(int x, int y)
{
  ______ x_y;
}


____ divide(int x, int y)
{
  _____ x_y;
}

_____ add(int x, int y) 
{
  ______x_y;
}

______ subtract(int x, int y)
{
  _____x_y;
}


using namespace std;

___ _____()
{
  ____ op='c';
  ____ x, y;
  while(op!='e')
  {
  cout__"What operation would you like to perform: add(+), subtract(-), divide(/), 
  multiply(*), [e]xit?";
  cin__op;
  switch(op)
  {
    ____ '+':
    cin__x;
    cin__y;
    cout__x__"+"__y__"="__add(x, y)__endl_
    break;
    ____ '-'_
    cin__x;
    cin__y;
    cout__x__"-"__y__"="__subtract(x, y)__endl_
    break;
    ____ '/':
    cin__x;
    cin__y;
    cout__x__"/"__y__"="__divide(x, y)__endl_
    break;
    ____ '*'_
    cin__x;
    cin__y;
    cout__x__"*"__y__"="__multiply(x, y)__endl_
    break;
    _____ 'e':
    ______;
    ______:
    cout__"Sorry, try again"__endl;
    }
  }
  return _;
_ 

*/

#include <iostream>


double multiply(int x, int y)
{
  return x*y;
}


double divide(int x, int y)
{
  return x/y;
}

int add(int x, int y) 
{
  return x+y;
}

int subtract(int x, int y)
{
  return x-y;
}


using namespace std;

int main()
{
  char op='c';
  int x, y;
  while(op!='e')
  {
  cout << "What operation would you like to perform: add(+), subtract(-), divide(/), multiply(*), [e]xit?";
  cin >> op;
  switch(op)
  {
    case '+':
    	cin >> x;
    	cin >> y;
    	cout << x << "+" << y << "=" << add(x, y) << endl;
    	break;

    case '-':
    	cin >> x;
    	cin >> y;
    	cout << x << "-" << y << "=" << subtract(x, y) << endl;
    	break;

    case '/':
    	cin >> x;
    	cin >> y;
    	cout << x << "/" << y << "=" << divide(x, y) << endl;
    	break;

    case '*':
    cin >> x;
    cin >> y;
    cout << x << "*" << y << "=" << multiply(x, y) << endl;
    break;
    
    case 'e':
    	break;

    default:
    cout << "Sorry, try again" << endl;
    }
  }
  return 0;
}
