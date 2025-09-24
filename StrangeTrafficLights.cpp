#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    cout<<"Berapa kali operasi? : ";int n; ll x;  cin>>n;

    while(n--){

        cin>>x;

        if(x <= 24){
            cout<<"MERAH"<<endl;
        } else{
            x -= 24;
            while(x > 0){

                if(x-20 <= 0){

                    cout<<"HIJAU"<<endl;
                    break;
                }
                    x -= 20;

                if(x - 3<=0){

                    cout<<"KUNING"<<endl;
                    break;
                }
                    x -= 3;

                if(x - 80<=0){

                    cout<<"MERAH"<<endl;
                    break;
                }
                    x -= 80;
            }
        }
    }

}