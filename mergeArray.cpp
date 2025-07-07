//MR amal is a pharmacist who has a particular type 
//of medicinal combinations that are 
//measured in milli grams that may be 
//classified into two types , 
//type 1 : {0.23,0.44,0.74,0.83,0.37} type 2 : {4.67,4.83,3.14,4.24,5.31}
#include <iostream>
using namespace std;
   int main(){
        float sum[5];
        float type1[5] = {0.23,0.44,0.74,0.83,0.37}, type2[5]=  {4.67,4.83,3.14,4.24,5.31} ;
        for(int i = 0; i<5; i++){
            sum[i] = type1[i] + type2[i];
        }
        for(auto x : sum) cout<<x<<" "<<endl;
            return 0;
    }

  

