#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int quantidade, aux,j=0;
    vector <int> descartadas;
    deque <int> cartas;

    while(cin>>quantidade)
    {
        if(quantidade<=50 && quantidade >0)
        {
            for(int i=quantidade;i >0; i--)
                {
                    cartas.push_front(i);
            }

           while (cartas.size() >1)
                {
                    descartadas.push_back(cartas.front());
                    cartas.pop_front();
                    aux = cartas.front();
                    cartas.push_back(aux);
                    cartas.pop_front();
                    j++;
                }


                cout<< "Discarded cards: ";
                for(int i=0; i< descartadas.size()-1; i++)
                {
                    cout<<descartadas.at(i) <<", ";
                }
                cout<< descartadas.back();
                cout<<endl;
                cout<< "Remaining card: "<<cartas.front();
                descartadas.clear();
                cartas.clear();
                cout<<endl;
        }
    }
    return 0;
}
