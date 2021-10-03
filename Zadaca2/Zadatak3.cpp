#include <iostream>
using namespace std;

int main(){


int broj;
cout<<"Unesi broj"<<endl;
cin>>broj;
if(broj%3==0 && broj%5==0){
cout<<"Broj je dijeljiv i sa 3 i sa 5";


}

else if(broj%3==0){
cout<<"Broj je dijeljiv samo sa 3";
}

else if(broj%5==0){
cout<<"Broj je dijeljiv samo sa 5";
}
else{
cout<<"Broj nije djeljiv ni sa 3 ni sa 5";
}























return 0;
}
