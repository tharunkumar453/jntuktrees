#include<bits/stdc++.h>
using namespace std;
int main(){
   ofstream fobj;
   fobj.open("example12.txt",ios::in|ios::trunc);

   if(!fobj.is_open()){
        cout<<"error"<<endl;
        return 1;
   }
   fobj<<"hey! tharunkuamr"<<endl;
   fobj.close();
   ifstream fobj1;
   fobj1.open("example12.txt",ios::out);

   string str;
   while(getline(fobj1,str)){
    cout<<str<<endl;
   }
    fobj1.close();

return 0;
}
