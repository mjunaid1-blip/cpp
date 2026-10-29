#include <iostream>
#include<cmath>
using namespace std;

int main()
 {
    cout<<"enter a no"<< endl;
    int x;
    cin>>x;
    if(x==1 || x==2 || x==3){
        cout<<"this is prime no";
    }
    else{
      float t = 0.5;
      float sqrt = pow(x,t);
      int p =floor(sqrt);
      
      for (int i=2;i<=p;i++){
        cout<< i <<endl;
        if(x%i==0)
        {
             cout<<"not a prime";
             break;
            
        }
        else{
            cout<<"prime";
            
            
        }
      }
    }
return 0;
 }  