#include <iostream>
#include <vector>
using namespace std;
void waveprintmatrix(vector<vector<int>>v){
  for(int i=0;i<v[0].size();i++){
    if((i & 1)==0){
      for(int j=0;j<v.size();j++){
        cout << v[j][i] << " ";
         }
    }
    else{
      for(int j=v.size()-1;j>=0;j--){
        cout << v[j][i] << " ";
        
      }
    }
      
    }
  }
int main(){
  vector<vector<int>>v {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  waveprintmatrix(v);
  return 0;
  
  
}