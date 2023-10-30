#include <iostream>

using namespace std;

int main()
{

//penamaan variabel
int x, y;

    //meminta user untuk memasukan jumlah bebek
    cout << "Bebek Pak Tatang:" ;
    cin >> x;

    //meminta user unutuk memasukan jumlah teman
    cout << "Dibagikan Kepada Temannya:" ;
    cin >> y;

    //menghitung jumlah bebek yang akan dibagikan
    int jumlahBebekYangAkanDibagikan = x/y;
    //menghitung sisa bebek yang tersisa
    int sisaBebek = x%y;

    //menampilkan bebek yang akan didapat teman pa tatang
    cout << "jumlah bebek yang akan diberikan kepada masing masing temannya:" << jumlahBebekYangAkanDibagikan << endl;
    //menampilkan sisa bebek
    cout << "jumlah sisa bebek:" << sisaBebek;



    return 0;
}




