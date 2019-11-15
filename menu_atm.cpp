#include <iostream.h>
using namespace std;

int main(){
 cout<<"Silahkan Pilih Menu "<<endl;
 cout<<"1. Tarik Dana "<<endl;
 cout<<"2. Transfer Dana"<<endl;
 cout<<"3. Cek Dana"<<endl;
 
 int menu;
 cout<<"Masukan Pilihan Anda : ";
 cin>>menu;

 if(menu==1){
    cout<<"Anda Memilih Tarik Dana";
}
 else if(meu==2){
    cout<<"Anda Mentransfer Dana";
}
else if(menu==3){
    cout<<"Anda Memilih Mengecek Dana";
}
else{
    cout<<"Maaf Menu Yanga Anda Masukan Tidak Tersedia";
}
 return 0;
}