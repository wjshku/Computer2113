#include "Quaternion.h"
#include <iostream>
using namespace std;

int main(){   
   Quaternion q1(1, 2, 3, 4);
   Quaternion q2(-1, 2, -3, 4);
   cout << q1 + q2;
   return 0;
}    
