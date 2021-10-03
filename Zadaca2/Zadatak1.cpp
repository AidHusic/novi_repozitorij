#include <iostream>

using namespace std;



int main(){
int brojMjeseca;
cin>>brojMjeseca;

if(brojMjeseca>12 || brojMjeseca<1){
cout<<"Broj nije validan";
}

if(brojMjeseca==1){
cout<<"Godisnje doba kojem mjesec pripada je zima";
}


else if(brojMjeseca==2){
cout<<"Godisnje doba kojem mjesec pripada je zima";
}

else if(brojMjeseca==3){
cout<<"Zima traje od 21.decembar do 19.marta"<<endl;
cout<<"Proljece traje od 20.marta do 20.juna";
}

else if(brojMjeseca==4){
cout<<"Godisnje doba kojem mjesec pripada je proljece";
}

else if(brojMjeseca==5){
cout<<"Godisnje doba kojem mjesec pripada je proljece";
}

else if(brojMjeseca==6){
cout<<"Proljece traje od 20.marta do 20.juna"<<endl;
cout<<"Ljeto traje od 21.juna do 21.septembra";
}

else if(brojMjeseca==7){
cout<<"Godisnje doba kojem mjesec pripada je ljeto";
}

else if(brojMjeseca==8){
cout<<"Godisnje doba kojem mjesec pripada je ljeto";
}

else if(brojMjeseca==9){
cout<<"Ljeto traje od 21.juna do 21.septembra"<<endl;
cout<<"Jesen traje od 22.septembra do 20.decembra";
}

else if(brojMjeseca==10){
cout<<"Godisnje doba kojem mjesec pripada je jesen";
}

else if(brojMjeseca==11){
cout<<"Godisnje doba kojem mjesec pripada je jesen";
}

else if(brojMjeseca==12){
cout<<"Jesen traje od 22.septembra do 20.decembra"<<endl;
cout<<"Zima traje od 21.decembra do 19.mart";
}






return 0;
}

