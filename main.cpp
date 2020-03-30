#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class zamiana
{
	string wyraz;
	string spr;
	int i;
	
	public:
	ifstream plik;
	ofstream plik1;
	
	void zmiana()
	{
	plik.open("palindromy.txt");
	plik1.open("wyjscieJSON.txt");
	
		plik1<<"[";
		
	if(!plik.eof())
	{

		plik>>wyraz;
		
	
    string odwrocony;  
    int dlugosc = wyraz.length(); 


    for(int i=0; i<dlugosc; i++)
        odwrocony+=wyraz[dlugosc-i-1];
        
        if(wyraz==odwrocony)
    {
    	spr="TAK";
	}
	else
	{
		spr="NIE";
	}
        plik1<<"{\"slowo"<<"\":\""<<wyraz<<"\",\"wynik"<<"\":\""<<spr<<"\"}";

    
    
}
plik1<<"]";
plik.close();
plik1.close();
}
    
};

int main()
{   
	string wyraz;	
			
	zamiana z;
	z.zmiana();
		
    
    

    return 0;
}
