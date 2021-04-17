/*
⦁	2: a, b, c
⦁	3: d, e, f
⦁	4: g, h, i
⦁	5: j, k, l
⦁	6: m, n, o
⦁	7: p, q, r, s
⦁	8: t, u, v
⦁	9: w, x, y, z

ex. p: #7=1
*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


int main (){

char   alvo,
       cod1[]={'a','d','g','j','m','p','t','w'},
       cod2[]={'b','e','h','k','n','q','u','x'},
       cod3[]={'c','f','i','l','o','r','v','y'},
       cod4[]={' ',' ',' ',' ',' ','s',' ','z'};
string cod5[]={"#2=","#3=","#4=","#5=","#6=","#7=","#8=","#9="};
char palavra[50];
int apertar=0,tecla=0, q1=1;



cout << "********************************************" << endl<< endl;
cout << "ATIVIDADE 2 - Problema da escrita no celular" << endl<< endl;

while (q1==1)
{
cout << "Digite uma palavra: (maximo de 50 caracteres) " << endl<< endl;

cin.getline(palavra,50);

cout << "Segue a codificacao para: " << palavra << endl<< endl;

for(int i=0; i<strlen(palavra); i++)
  {
    palavra[i]=tolower (palavra[i]);
  }
 
for(int i=0; i<strlen(palavra); i++)
  {
    alvo=palavra[i];
    for(int ind=0; ind<=7; ind++)
    {   
        if (alvo==cod1[ind])
            {apertar=1;
             tecla=ind;           
            }
        if (alvo==cod2[ind])
            {apertar=2;  
             tecla=ind;          
            }
        if (alvo==cod3[ind])
            {apertar=3;
             tecla=ind;           
            }
        if (alvo==cod4[ind])
            {apertar=4;
             tecla=ind;           
            }
    }
    
    cout << cod5[tecla]<<apertar<<endl;
   
  }
   
   cout << "*************************************"<<endl<<endl;
   cout << "Para Continuar, Pressione a tecla '1' [Enter] ou '0' [Enter] para terminar." <<endl<<endl;
   cin >> q1;
   cin.ignore();
}
}