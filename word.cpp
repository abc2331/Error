#include<iostream>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
class len{
    public:
    char arr[100];
};
int main() {
    int n,num=0;
    cin>>n;
    len str[n];
    for(int i=0;i<n;i++) {
            cin>>str[i].arr;
    
    }
    for(int i=0;i<n;i++) {
        num=strlen(str[i].arr);
        if(num>10){
            cout<<str[i].arr[0]<<num-2<<str[i].arr[num-1]<<endl;
        }
        else{
            cout<<str[i].arr<<endl;
        }
    }
return 0;
}

