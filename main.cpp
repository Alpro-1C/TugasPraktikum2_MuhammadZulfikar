#include <iostream>

using namespace std;

int main() {

    int firstvalue = 10;
    int secondvalue = 8;
    int thirdvalue;//variabel tambahan

    //menukar nilai dengan variabel tambahan

    cout<<"nilai pertama = 10 "<<endl;
     cout<<"nilai kedua = 8 "<<endl<<endl;

    thirdvalue = firstvalue;
    firstvalue = secondvalue;
    secondvalue = thirdvalue;


    cout << "nilai pertama: " << firstvalue << endl;
    cout << "nilai kedua: " << secondvalue << endl <<endl;


     /*Tanpa menggunakan variabel tambahan*/
        int a = 10;
        int b = 8;

     cout<<"nilai a = 10 "<<endl;
     cout<<"nilai b = 8 "<<endl<<endl;

        a=a+b;
        b=a-b;
        a=a-b;

      cout << "Nilai a : " << a << endl;
      cout << "Nilai b : " << b  << endl;


        return 0;
}
