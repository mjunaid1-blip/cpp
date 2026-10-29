#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<<"enter a no"<< endl;
    int x;
    cin>>x;
    bool is_prime = true;
    if(x==1 || x==2 || x==3){
        cout<<"this is prime no";
    }
    else{
      float t = 0.5;
      int square_root = floor(sqrt(x));
      
      for (int i=2;i<=square_root;i++){
        cout<< i <<endl;
        if(x%i==0)
        {
            is_prime = false;
             break;
            
        }
    if(is_prime)
        {
            
            cout<<"prime";
        }

    else{
            cout<<"not a prime";
        }
    }
    }
return 0;
}  