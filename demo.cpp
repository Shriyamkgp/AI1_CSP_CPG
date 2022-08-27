#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n{0}, m{1};

    swap(n,m);
    cout<<n<<m<<endl;


    return 0;
}