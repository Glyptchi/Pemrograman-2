#include <bits/stdc++.h>

using namespace std;

string balik(string x){

    string temp = x;

    for(int i = 0; i < temp.size(); i++){

        x[i] = temp[temp.size()-1-i];

    }

    return x;
}

int main(){
    
    int a;
    cout<<"Pilih Operasi"<<endl<<"1. Buat Kata Sandi"<<endl<<"2. Dapatkan Kata Asli"<<endl;
    cin>>a;

    if(a==1){

        cout<<"Masukkan Kata : ";string n; cin>>n;

        int depan = (int)n[0];
        string ascii = to_string(depan);

        for(int i = 0; i < n.size(); i++){

            if(n[i]=='a'||n[i]=='i'||n[i]=='u'||n[i]=='e'||n[i]=='o'||n[i]=='A'||n[i]=='I'||n[i]=='U'||n[i]=='E'||n[i]=='O'){

                n.erase(i, 1);
                i--;
            }

        }

        n = balik(n);

        int tengah = (n.size() + 1) / 2;
        n.insert(tengah, ascii);

        cout<<n;

    }else if(a==2){

        cout<<"Masukkan Sandi : "; string o; cin>>o;

        for(int i = 0; i < o.size(); i++){

            if(o[i]=='0'||o[i]=='1'||o[i]=='2'||o[i]=='3'||o[i]=='4'||o[i]=='5'||o[i]=='6'||o[i]=='7'||o[i]=='8'||o[i]=='9'){

                o.erase(i, 1);
                i--;
            }

        }
        
        o = balik(o);

        cout<<o<<endl;
    }else{

        cout<<"Pilih antara 1 dan 2 kids"<<endl;
    }

    
}