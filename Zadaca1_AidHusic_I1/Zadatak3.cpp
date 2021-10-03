#include <iostream>
using namespace std;



int main(){


double prosjek;
cout<<"Unesite prosjek ocjena"<<endl;
cin>>prosjek;
if(prosjek<2){
    cout<<"Opci uspjeh je nedovoljan"<<endl;
}

else if(prosjek>=2 && prosjek<2.5){
    cout<<"Opci uspjeh je dovoljan"<<endl;
}

else if(prosjek>=2.5 && prosjek<3.5){
    cout<<"Opci uspjeh je dobar"<<endl;
}
else if(prosjek>=3.5 && prosjek<4.5){
    cout<<"Opci uspjeh je vrlo dobar"<<endl;

}
else{
    cout<<"Opci upsjeh je odlican"<<endl;

}





return 0;
}
