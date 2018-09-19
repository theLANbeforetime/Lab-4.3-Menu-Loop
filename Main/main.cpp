#include <iostream>
using namespace std;

int main(){

char userInput;
bool menuOn = true;
    
while(menuOn != false){
cout << endl;
cout << "a. count by ones\n";
cout << "b. count by twos\n";
cout << "e. exit\n";

cin >> userInput;

switch (userInput){
  case 'a':
    for(int countA=1; countA <=10; ++countA)
    {
      cout << countA << " ";
    }
        break;
    case 'A':
        for(int countA=1; countA <=10; ++countA)
        {
            cout << countA << " ";
        }
        break;
  case 'b':
    for(int countB = 2; countB<= 20; countB = countB + 2)
    {
      cout << countB << " ";
    }
        break;
    case 'B':
        for(int countB = 2; countB<= 20; countB = countB + 2)
        {
            cout << countB << " ";
        }
        break;
  case 'e':
        menuOn = false;
        break;
    case 'E':
        menuOn = false;
        break;
  default:
    cout << "Please choose a, b, or e: \n";
        break;
}
}
  return 0;
}
