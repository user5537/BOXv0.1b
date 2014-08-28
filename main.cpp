#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
//#define sizeof(w)/sizeof(w[0]) N(w)
using namespace std;

struct message
{
int numer;
string tresc[161];
} w[10];


int tab[9];
int e;
int g;
//1.Wyświetlenie wszystkich wiadomości pozostawionych w skrzynce.




void y1()
{

for(int i=0; i<sizeof(w)/sizeof(w[0]); i++)
cout<<setw(15)<<*w[i].tresc<<endl;
int y=5;
}
void y2()
{
int k;
cin>>k;
cout<<setw(15)<<*w[k-1].tresc<<endl;
e=k-1;
}
//2. Wyświetlenie jednej, wybranej wiadomości.***
void y3()
{


/*
else
cout<<e;
cout<<"nieodczytane"<<endl;
for(int i=0; i<sizeof(w)/sizeof(w[0]); i++)
{
if(i==e)
continue;

cout<<*w[i].tresc<<endl;
}
*/
}


//3. Wyświetlenie nowych, nieodczytanych wiadomości.

//4. Usunięcie dowolnej z wiadomości (puste miejsce należy wypełnić, tzn. przesunąć pozostałe wiadomości tak, aby nie było pustych pozycji w skrzynce)
void y5()
{
}
//5. Usunięcie wszystkich wiadomości.
void y6()
{
}
//. Wyszukanie wiadomości po numerze telefonu.
bool y7(string TEXT, string FRAG)
{
    size_t FINDED_POS = TEXT.find( FRAG );
    if( FINDED_POS == string::npos )
    {
        cout << "NO TEXT LIKE THAT " << endl;
        return true;
    }
else
return false;
}
//7. Wyszukanie wiadomości po podaniu fragmentu poszukiwanego tekstu.
void y8()
{
}


int main()
{





int liczba;
int x;
/*
cout<<"numer"<<endl;
for(int i=0;i<3;i++)
cin >>w[i].numer;


cout<<"tresc"<<endl;
for(int j=0;j<3;j++)
cin >>*w[j].tresc;
*/

w[0].numer=1111;
w[1].numer=2222;
w[2].numer=3333;
w[3].numer=4444;
w[4].numer=5555;
w[5].numer=6666;
w[6].numer=7777;
w[7].numer=8888;
w[8].numer=9999;
w[9].numer=0000;

*w[0].tresc="pies kot malpa";
*w[1].tresc="renaut fiat polonez";
*w[2].tresc="tablet komputer ";
*w[3].tresc="moneta papier kartka";
*w[4].tresc="alfa beta gamma ";
*w[5].tresc="krzeslo stol stolek";
*w[6].tresc="widelec knife lyzka";
*w[7].tresc="c++ c# java";
*w[8].tresc="bit bajt MB";
*w[9].tresc="metr sekunda litr";

do{

cout<<"*********************************************"<<endl<<endl;;
cout<<setw(25)<<"MENU"<<endl<<endl;;
cout<<"CHOSE NUMBER:"<<endl;
cout <<"1. SEE ALL SMS"<<endl;
cout <<"2. SEE ONE SMS"<<endl;
cout <<"3. NEW SMS NOT SEEN"<<endl;
cout <<"4. CLEAR ONE "<<endl;
cout <<"5. CLEAR ALL"<<endl;
cout <<"6. SEARCH BY NUMBER"<<endl;
cout <<"7. SEARCH BY TEXT"<<endl;

cout <<"10. EXIT."<<endl<<endl;;

cout<<"*********************************************"<<endl;

cin >>liczba;
switch(liczba)
{
    case 1:
//wyswietla wszystkie wiadomosci

cout<<setw(15)<<"ALL SMSES LIST"<<endl;
y1();


break;

    case 2:
cout <<"podaj numer wiadomosci"<<endl;
//int h;
//cin >>h;
y2();
break;

    case 3:


y3();
break;

    case 4:
cout<< "number of sms erase"<<endl;
int k;
cin>>k;
*(w[k-1].tresc)="";


for(int j=k;j<sizeof(w)/sizeof(w[0])-1;j++)


swap(*w[j].tresc,*w[j+1].tresc);
//*w[j].tresc=*w[j+1].tresc;

break;


    case 5:

   for (int k=0;k<sizeof(w)/sizeof(w[0]);k++) *w[k].tresc="";
cout<<"all smses deleted!" << endl;

break;

    case 6:
cout << "BY NUMBER SEARCHING "<< endl;
int i;

cin >>i;
//cout << w[i-1].numer <<endl;
    for(int o=0;o<10;o++)
    if(i == w[o].numer)
cout << *w[o].tresc <<endl;
;
break;

    case 7:
/*cout << "BY TEXT SEARCHING "<< endl;
string g[30];

cin >>g[30];

    for(int o=0;sizeof(w)/sizeof(w[0]);o++)
    if(*g == *w[o].tresc)
cout << *w[o].tresc <<endl;
*/
string jk;
cout<<"TELL FRAGMENT "<<endl;
cin>>jk;

if(y7(*w[0].tresc,jk)!=1) cout<<w[0].numer<<endl;
if(y7(*w[1].tresc,jk)!=1) cout<<w[1].numer<<endl;
if(y7(*w[2].tresc,jk)!=1) cout<<w[2].numer<<endl;
if(y7(*w[3].tresc,jk)!=1) cout<<w[3].numer<<endl;
if(y7(*w[4].tresc,jk)!=1) cout<<w[4].numer<<endl;
if(y7(*w[5].tresc,jk)!=1) cout<<w[5].numer<<endl;
if(y7(*w[6].tresc,jk)!=1) cout<<w[6].numer<<endl;
if(y7(*w[7].tresc,jk)!=1) cout<<w[7].numer<<endl;
if(y7(*w[8].tresc,jk)!=1) cout<<w[8].numer<<endl;
if(y7(*w[9].tresc,jk)!=1) cout<<w[9].numer<<endl;


break;




}
}while(liczba!=10);

return 0;

}
