/*#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>



using namespace std;
struct message
{
int numer;
char tresc[161];
} w[9];


int tab[9];
int e;
int g;
//1.Wyœwietlenie wszystkich wiadomoœci pozostawionych w skrzynce.




void y1()
{
for(int i=0; i<10; i++)
cout<<setw(15)<<w[i].tresc<<endl;
}
void y2()
{
int k;
cin>>k;
cout<<setw(15)<<w[k-1].tresc<<endl;
e=k-1;
}
//2. Wyœwietlenie jednej, wybranej wiadomoœci.***
void y3()
{
cout<<e;
cout<<"nieodczytane"<<endl;
for(int i=0; i<10,i!=e; i++)
cout<<w[i].tresc<<endl;
}
//3. Wyœwietlenie nowych, nieodczytanych wiadomoœci.
void y4()
{
}
//4. Usuniêcie dowolnej z wiadomoœci (puste miejsce nale¿y wype³niæ, tzn. przesun¹æ pozosta³e wiadomoœci tak, aby nie by³o pustych pozycji w skrzynce)
void y5()
{
}
//5. Usuniêcie wszystkich wiadomoœci.
void y6()
{
}
//. Wyszukanie wiadomoœci po numerze telefonu.
void y7()
{
}
//7. Wyszukanie wiadomoœci po podaniu fragmentu poszukiwanego tekstu.
void y8()
{
}


int main()
{

w[4].numer=544443344;



int liczba;
int x;
//cout<<"numer";
cout<<"numer"<<endl;
for(int i=0;i<3;i++)
cin >>w[i].numer;
//cin >>w2.numer;
//cin >>w3.numer;
cout<<"tresc"<<endl;
for(int j=0;j<3;j++)
cin >>w[j].tresc;
//cout<<"tresc "<<w1.tresc<<endl;
//cout<<"numer "<<w1.numer<<endl;






do{
cout<<setw(15)<<"MENU"<<endl;
cout<<"wybierz:"<<endl;
cout <<"1. SEE ALL SMS"<<endl;
cout <<"2. SEE ONE SMS"<<endl;
cout <<"3. NEW SMS NOT SEEN"<<endl;
cout <<"4. CLEAR ONE "<<endl;
cout <<"5. CLEAR ALL"<<endl;
cout <<"6. SEARCH BY NUMBER"<<endl;
cout <<"7. SEARCH BY TEXT"<<endl;
cout <<"8. SEND BY sieci lokalnej i protoko³u UDP."<<endl;
cout <<"10. EXIT."<<endl;
cout<<"podaj liczbe 1-10"<<endl;
cin >>liczba;
switch(liczba)
{
    case 1:
//wyswietla wszystkie wiadomosci
cout<<"all messages"<<endl;
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
*(w[k-1].tresc)=0;

for(int j=0;j<10;j++)
*(w[j-1].tresc)=*(w[j].tresc);

break;


    case 5:
//memset
//w[i].tresc='t';
    for (int k=0;k<10;k++) *(w[k].tresc)=0;
cout<<"all smses deleted!" << endl;

break;

    case 6:
cout << "tell number phone "<< endl;
int i;

cin >>i;
//cout << w[i-1].numer <<endl;
    for(int o=0;o<10;o++)
    if(i == w[o].numer)
cout << w[o].tresc <<endl;
;
break;

    case 7:
cout << "tell text "<< endl;
char g;

cin >>g;
//cout << w[i-1].numer <<endl;
    for(int o=0;o<10;o++)
    if(g == *w[o].tresc)
cout << w[o].tresc <<endl;
;
break;
break;

    default:
break;

}
}while(x!=10);

return 0;

}
*/
