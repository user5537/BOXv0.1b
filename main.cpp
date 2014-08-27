#include <iostream>
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct message

{
int numer;
char tresc[160];

} w[9];

int tab[9];
int e;
int g;
//1.Wyświetlenie wszystkich wiadomości pozostawionych w skrzynce.

void  y1()
{

for(int i=0; i<10; i++)
cout<<setw(15)<<w[i].tresc<<endl;


}
void  y2()
{

int k;
cin>>k;
cout<<setw(15)<<w[k-1].tresc<<endl;
e=k-1;

}

//2. Wyświetlenie jednej, wybranej wiadomości.***
void  y3()
{


cout<<e;
cout<<"nieodczytane"<<endl;
for(int i=0; i<10,i!=e; i++)
cout<<w[i].tresc<<endl;


}
//3. Wyświetlenie nowych, nieodczytanych wiadomości.
void  y4()
{

}
//4. Usunięcie dowolnej z wiadomości (puste miejsce należy wypełnić, tzn. przesunąć pozostałe wiadomości tak, aby nie było pustych pozycji w skrzynce)
void  y5()
{

}
//5. Usunięcie wszystkich wiadomości.
void  y6()
{

}
//. Wyszukanie wiadomości po numerze telefonu.
void  y7()
{

}
//7. Wyszukanie wiadomości po podaniu fragmentu poszukiwanego tekstu.
void  y8()
{

}
//8. Wysłanie wiadomości do innego użytkownika przy użyciu sieci lokalnej i protokołu UDP.
void  y9()
{

}
//*. Dodaj opcję zapisywania wiadomości do pliku i odczytywania ich z pliku.
void  y0()
{

}
//*. Pojemność skrzynki nie wynosi 10, ale jest ograniczona wyłącznie dostępną w systemie pamięcią RAM.
void  y10()
{

}
//*. Zaimplementuj ten program z obsługą alfabetów narodowych (UNICODE, UTF-8).
void  y11()
{


}






int main()

{
int liczba;
int x;




//cout<<"numer";
cout<<"numer"<<endl;
for(int i=0;i<3;i++)

cin >>w[i].numer;




//cin >>w2.numer;
//cin >>w3.numer;


cout<<"tresc";
for(int j=0;j<3;j++)
//cout <<"tresc";
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
cout <<"8. SEND BY sieci lokalnej i protokołu UDP."<<endl;
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

    break;

case 5:
//memset
//w[i].tresc='t';
for (int k=0;k<10;k++) *(w[k].tresc)=0;
cout<<"all smses deleted!" << endl;

    break;
case 6:

    break;
case 7:

    break;





default:



    break;
}



}while(x!=10);
    return 0;
}
