#include <vector>
#include <iostream> 
 
using namespace std;
 
 
 
 
 
 
int main(){
long int x = 0 ;
cin>>x; 
 
if(x==1){
    cout<<1;
    return 0;
}
vector<long int> vals; 
vals.push_back(x);
while(x!=1){
    if(x%2==0){
        x=x/2; 
        vals.push_back(x);
    }else{
        x=(x*3)+1;
        vals.push_back(x);
    }
    
}
 
for (const auto& i : vals){
    cout<< i<<" "; 
}
cout<<"\n"<<endl;
 
 
 
 
 
 
    return 0;







