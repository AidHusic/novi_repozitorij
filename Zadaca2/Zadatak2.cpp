#include <iostream>
using namespace std;


int main(){
int godina,mjesec;
cout<<"Unesite godinu rodjena";
cin>>godina;
cout<<"Unesite mjesec rodjena";
cin>>mjesec;


int izracunataGodina;
int izracunatiMjeseci;

if(mjesec<9){
izracunataGodina=2021-godina;
izracunatiMjeseci=9-mjesec;
cout<<"Imate "<<izracunataGodina<<"godina i "<<izracunatiMjeseci<<"mjeseci ";

}

if(mjesec>9){
izracunataGodina=2021-godina-1;
izracunatiMjeseci=9+(12-mjesec);
cout<<"Imate "<<izracunataGodina<<"godina i "<<izracunatiMjeseci<<"mjeseci ";

}

























return 0;
}
