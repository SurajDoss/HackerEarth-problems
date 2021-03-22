#include <iostream>

using namespace std;

int main(){
    int num;
    int ary[num];
    cin>> num;
    for(int i =0; i<num; i++){
        cin>>ary[i];
    }

    for(int j =num-1 ; j>=0; j--){
        cout<<ary[j]<<endl;
    }

    return 0;
}
