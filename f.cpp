#include <iostream>
#include "main.cpp"

using namespace std;


struct message

{
int numer;
char tresc[160];

} w[9];



void  y()
{

for(int i=0; i<10; i++)
cout<<w[i].tresc<<endl;

}
void  y1()
{

int k;
cin>>k;
cout<<w[k-1].tresc<<endl;

}

//2. Wyœwietlenie jednej, wybranej wiadomoœci.
void  y2()
{int k;

cout<<"numer wykasowanej"<<endl;
cin>>k;


}
//3. Wyœwietlenie nowych, nieodczytanych wiadomoœci.
void  y3()
{

}
//4. Usuniêcie dowolnej z wiadomoœci (puste miejsce nale¿y wype³niæ, tzn. przesun¹æ pozosta³e wiadomoœci tak, aby nie by³o pustych pozycji w skrzynce)
void  y4()
{

}
//5. Usuniêcie wszystkich wiadomoœci.
void  y5()
{

}
//. Wyszukanie wiadomoœci po numerze telefonu.
void  y6()
{

}
//7. Wyszukanie wiadomoœci po podaniu fragmentu poszukiwanego tekstu.
void  y7()
{

}
//8. Wys³anie wiadomoœci do innego u¿ytkownika przy u¿yciu sieci lokalnej i protoko³u UDP.
void  y8()
{

}
//*. Dodaj opcjê zapisywania wiadomoœci do pliku i odczytywania ich z pliku.
void  y9()
{

}
//*. Pojemnoœæ skrzynki nie wynosi 10, ale jest ograniczona wy³¹cznie dostêpn¹ w systemie pamiêci¹ RAM.
void  y10()
{

}
//*. Zaimplementuj ten program z obs³ug¹ alfabetów narodowych (UNICODE, UTF-8).
void  y11()
{


}
