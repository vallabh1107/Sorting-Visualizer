#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "qwr123wed34wae";
    int countchar=0,countint=0;
    for(int i = 0; i< a.size();i++){

        if(isdigit(a[i])){
            countint++;
        }else{
            countchar++;
        }
    }
    cout<<countchar<<" "<<countint;
}