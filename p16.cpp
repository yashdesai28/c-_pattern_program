#include<iostream>
using namespace std;

int main(){


cout<<endl;
cout<<endl;
cout<<endl;

    int o=3;
    int p=2;
    int u=3;
    int l=3;
    int v=3;
    int g=2;


    for(int i=0;i<o;i++){

        
        for(int k=0;k<g;k++){
            cout<<" ";

        }
        g--;

        for(int h=0;h<u*2-1;h++){
            cout<<"*";
        }
        u++;

        for(int h=0;h<l*2-1;h++){
            cout<<" ";
        }
        l--;

        for(int h=0;h<v*2-1;h++){
            cout<<"*";
        }
        v++;
        cout<<endl;

    }


    int n=10;
    int m=10;
    int t=1;
    for(int i=0;i<n;i++){

        for(int k=1;k<t;k++){
            cout<<" ";
        }
        t++;

        for(int j=0;j<m*2-1;j++){

            cout<<"*";
        }
        m--;
       
        cout<<endl;

    }

    cout<<endl;

}