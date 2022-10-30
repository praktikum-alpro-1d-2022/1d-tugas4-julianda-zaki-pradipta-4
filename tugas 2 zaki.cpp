#include <iostream>
using namespace std;

int main () {
      string username, password;

  cout<<"Masukkan username : ";
  cin>>username;
  cout<<"Masukkan password : ";
  cin>>password;


  if(username=="admin"&&password=="admin123")
    cout<<"ANDA BERHASIL LOGIN!!!";
  else if ( username == "admin" && password != "admin123")
    cout<<"USERNAME ANDA BENAR, TETAPI PASSWORD ANDA SALAH!!, COBA LAGI...";
  else if ( username != "admin" && password =="admin123")
    cout<< "USERNAME ANDA SALAH!!";
  else
    cout<< "ANDA GAGAL LOGIN, USERNAME DAN PASSWORD ANDA SALAH!!!!";


  return 0;
}
