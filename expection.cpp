#include<iostream>
using namespace std;
int main()
{
    reinput:
    try{
    int a,b,result;
    cout <<"Enter your Mother age :";
    cin  >>a;
    cout <<"Enter your age :";
    cin  >>b;
    if (a>b){
        result=a-b;
        cout <<"You are "<<result<<" years younger than your mother"<<endl;
    }
        if(b>a){
            throw 99;
        }
    }catch(int x){
        cout << "You can't be older than your Mother , ERROR INPUT NUMBER"<<endl;
        goto reinput;
    }
    return 0;
}


