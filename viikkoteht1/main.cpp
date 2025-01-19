#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum){
    int num;
    int arvaus = 0;
    int yritys = 0;

    srand(time(NULL));
    num = (rand() % maxnum) + 1;

    do{
        cout << "Aravaa numero 1-" << maxnum << endl;
        cin >> arvaus;
        yritys++;

        if(arvaus > num){
            cout << "Numerosi on liian korkea" << endl;
        }
        else if(arvaus < num){
            cout << "Numerosi on liian matala" << endl;
        }
        else{
            cout << "Oikea numero" << endl;
        }

    }while(arvaus != num);

    return yritys;
}

int main()
{
    int maxnum;
    cout << "Anna luku minkä välistä haluat koittaa arvata" << endl;
    cin >> maxnum;

    int yritykset = game(maxnum);
    cout << "Arvasit yhteensa " << yritykset << "kertaa" << endl;
    return 0;
}
