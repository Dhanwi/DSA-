#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    for (int i=1; i<=n; i++){
        ans = i*ans;
        }
    
    return ans;
}

int nCr(int n, int r){
   
    int factorial= (fact(n)/(fact(r)* fact(n-r)));
    return factorial;
}

int main(){
    int n, r;
    cout<<"n is"<<endl;
    cin>>n;
    cout<<"r is"<<endl;
    cin>>r;

    
  cout<< "factorial is : "<< nCr(n,r);
    
    
}
