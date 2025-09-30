#include<iostream>
using namespace std;
//problem: display the sum of digits of a 4 digit userinput number
int main(){
    int a,b,n,c,sum;
    
    cout<<"sumof 4-digt is";
    cin>>n;
    sum=n;
   
    a=n%10; //a=5
    n=n/10; //n=378
    b=n%10 ;//b=8
    n=n/10; //n=37
    c=n%10; //c=7
    n=n/10; //n=3
    cout<< "sum="<<a+b+c+n;
     return 0;

}