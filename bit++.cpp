#include<iostream>
#include<cstring>
using std::cout;
using std::endl;
using std::cin;
class bit{
    public:
    char str[3];
};
int main(){
    int n,count=0;
    cin>>n;
    char b[3]="X++";
    bit arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i].str;
        cout<<endl<<b;
        cout<<arr[i].str<<endl;
        if(strcmp(arr[i].str,"X++")||arr[i].str=="++X"){
            count++;
            cout<<arr[i].str<<endl;
        }
        if(arr[i].str=="X--"||arr[i].str=="--X"){
            count--;
        }
    }
    cout<<count;
return 0;
}

