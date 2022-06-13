#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
template<class p>
class simulador_robot{
	private:
	    vector<p>valor;
	   	string vista;
	    vector<string>plano={"norte","sur","este","oeste"};
	public:
	    simulador_robot(vector<p>valores);
	    void moverse();
	    ~simulador_robot(){}
};

template<class p>
simulador_robot<p>::simulador_robot(vector<p>valores){
    for (int i=0; i<valores.size(); i++){
    	valor.push_back(valores[i]);
    }
	vista=plano[0];
}

template<class p>
void simulador_robot<p>::moverse(){
    int x=7;
    int y=3;
    cout<<"POSICION INICIAL: ("<<x<<","<<y<<")"<<endl;
    cout<<"VISTA INICIAL AL: "<<vista;
    char aux;
    cout<<"\n////////////////////////////////\n";
    for(int i=0;i<valor.size();i++){
    	aux=valor[i];
    	///////////////////////////////////////////////////////////////////////////////
    	if(aux=='I'){
        	cout<<"\nGirar a la IZQUIERDA"<<endl;
        	if(vista=="norte" or vista=="sur"){//NORTE Y SUR	1-2
        		if(vista=="norte"){
        			vista=plano[3];//4
        		}
        		if(vista=="sur"){
        			vista=plano[2];//3
				}
				cout<<"VISTA AL: "<<vista<<endl;
			}else if(vista=="este"|| vista=="oeste"){
				if(vista=="este"){//ESTA MIRANDO AL ESTE U OESTE //3,4 RESPECTIVAMENTE
        			vista=plano[0];//
        		}
        		if(vista=="oeste"){
        			vista=plano[1];//
				}
				cout<<"VISTA AL: "<<vista<<endl;
			}
			cout<<"POSICION ACTUAL: ("<<x<<","<<y<<")"<<endl;
			cout<<"\n////////////////////////////////\n";
        }
        ///////////////////////////////////////////////////////////////////////////////
        if(aux=='D'){
            cout<<"\nGirar a la DERECHA"<<endl;
        	if(vista=="norte" or vista=="sur"){//NORTE Y SUR	1-2
        		if (vista=="norte"){
        			vista=plano[2];//3
				}
				if(vista=="sur"){
					vista=plano[3];
				}
				cout<<"VISTA AL : "<<vista<<endl;
			} else if(vista=="este" or vista=="oeste"){
				if(vista=="este"){//ESTA MIRANDO AL ESTE U OESTE //3,4 RESPECTIVAMENTE
        			vista=plano[1];
				}
				if(vista=="oeste"){
        			vista=plano[0];
				}	
				cout<<"VISTA AL : "<<vista<<endl;
			}
			cout<<"POSICION ACTUAL: ("<<x<<","<<y<<")"<<endl;
			cout<<"\n////////////////////////////////\n";
    	}
        ///////////////////////////////////////////////////////////////////////////////
		if(aux=='A'){
			cout<<"\nAVANZAR"<<endl;
        	if(vista=="norte" or vista=="sur"){//NORTE Y SUR	
        		if (vista=="norte"){
        				y++;
        		}
        		if (vista=="sur"){
        				y--;
				}
			}else if(vista=="este" or vista=="oeste"){//ESTE/ OESTE 3-4
				if (vista=="este"){
        				x++;
        		}
        		if (vista=="oeste"){
        				x--;
				}
			}
            cout<<"POSICION FINAL: ("<<x<<","<<y<<")"<<endl;
            cout<<"VISTA AL : "<<vista<<endl;
            cout<<"\n////////////////////////////////\n";
        }
        else if(aux!='A' and  aux!='I' and aux!='D'){
            cout<<" comando no valido "<<endl;
        }
    }
}