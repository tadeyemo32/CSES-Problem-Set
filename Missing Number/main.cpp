#include <iostream> 
#include <vector> 
#include <unordered_map> 



using namespace std; 





int main(){



long int x{0};
long int y{0};
cin>>x;
vector<long int> nums(x-1); 
for (int i =0;i<x-1;i++){
    cin>> nums[i];
}
for(int i =1;i<=x;i++){
     y+=i;    
}

long int sum =0 ; 

for (const auto& n :nums){
    sum+=n; 
}

cout<< y-sum;

   return 0;
}
