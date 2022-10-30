#include <iostream>
using namespace std;
int main(){
int thn;
cout << "\t MENENTUKAN TAHUN KABISAT \n\n"<<endl;
cout << " masukkan tahun lahir anda :";
cin>> thn;
if(thn  % 4==0 && thn % 100!= 0 || thn % 400==0){
    cout<<"ini tahun kabisat";
}
else{
    cout <<"ini bukan tahun kabisat.";
}
return 0;
}
