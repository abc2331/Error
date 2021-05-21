#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char b[1000];
    cin>>b;
    int temp=strlen(b);
    
    for(int i=0;b[i]!='\0';i++){
        for(int j=i+1;b[j]!='\0';j++){
            if(b[i]==b[j]){
                b[j]=j;
                temp--;
                
            }
        }
     }
    if(temp%2==0){
       cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
return 0;
}


