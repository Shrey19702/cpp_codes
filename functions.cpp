#include<bits/stdc++.h>
using namespace std;

//......Prime No Test root(n).............
bool prime(int x){ 
    if(x%2==0){
        return false;
    }
    for(int i=3; i*i <=x; i+=2){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

//......no. of primes before n  O( n*log(log(n)) .............
int countPrimes(int n) {
    if(n<3){
        return 0;
    }

    bool arr[n];
    for(int i=0; i<n; i++){
        arr[i]=true;
    }

    for(int p=2; p*p<=n; p++){
        for(int i=p*p; i<n; i+=p){
            arr[i]=false;
        }
    }
    int count=0;
    for(int i=2; i<n; i++){
        if(arr[i]){
            count++;
        }
    }

    return count;
}



int main(){
  
  return 0;
}
