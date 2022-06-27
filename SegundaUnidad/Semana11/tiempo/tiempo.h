#include <iostream>
using namespace std;

class tiempo {
	private:
		int hor;
		int min;
		int sec;
	public:
		//tiempo(){hor=0;min=0;sec=0;}
		tiempo(int hor,int min, int sec){
			this->hor=hor;
			this->min=min;
			this->sec=sec;
			
			if(this->sec>59){this->sec-=60;this->min++;}
			if(this->min>59){this->min-=60;this->hor++;}
			if(this->hor>59){this->hor=0;this->min=0;this->sec=0;}
		}
		int getH(){return hor;}
		int getM(){return min;}
		int getS(){return sec;}
		
		friend ostream &operator<<(ostream &output,tiempo &p);
		

	
};
tiempo & operator + (tiempo &a,tiempo &b){
	return *(new tiempo(a.getH()+b.getH(),a.getM()+b.getM(),a.getS()+b.getS()));
}

bool operator == (tiempo &a,tiempo &b){
	if(a.getH()==b.getH() and a.getM()==b.getM() and a.getS()==b.getS() ){
		return true;
	}
	return false;
}

bool operator != (tiempo &a,tiempo &b){
	if(a.getH()!=b.getH() or a.getM()!=b.getM() or a.getS()!=b.getS() ){
		return true;
	}
	return false;
}

bool operator > (tiempo &a,tiempo &b){
	if(a.getH()>b.getH()){return true;}
	if(a.getH()==b.getH()){
		if(a.getM()>b.getM()){return true;}
	}
	if(a.getM()==b.getM() and a.getH()==b.getH()){
		if(a.getS()>b.getS()){return true;}
	}
	return false;
}

bool operator >= (tiempo &a,tiempo &b){
	if(a.getH()==b.getH() and a.getM()==b.getM() and a.getS()==b.getS() ){
		return true;
	}
	if(a.getH()>b.getH()){return true;}
	if(a.getH()==b.getH()){
		if(a.getM()>b.getM()){return true;}
	}
	if(a.getM()==b.getM() and a.getH()==b.getH()){
		if(a.getS()>b.getS()){return true;}
	}
	return false;
}

bool operator < (tiempo &a,tiempo &b){
	if(a.getH()<b.getH()){return true;}
	if(a.getH()==b.getH()){
		if(a.getM()<b.getM()){return true;}
	} 
	if(a.getM()==b.getM() and a.getH()==b.getH()){
		if(a.getS()<b.getS()){return true;}
	}
	return false;
}
bool operator <= (tiempo &a,tiempo &b){
	if(a.getH()==b.getH() and a.getM()==b.getM() and a.getS()==b.getS() ){
		return true;
	}
	if(a.getH()<b.getH()){return true;}
	if(a.getH()==b.getH()){
		if(a.getM()<b.getM()){return true;}
	} 
	if(a.getM()==b.getM() and a.getH()==b.getH()){
		if(a.getS()<b.getS()){return true;}
	}
	return false;
}




ostream &operator << (ostream &output,tiempo &p){
	output<<"Clase tiempo: \n";
	output<<"Horas: "<<p.hor<<endl;
	output<<"Minutos: "<<p.min<<endl;
	output<<"Segundos: "<<p.sec<<endl;
	
	output<<p.hor<<":"<<p.min<<":"<<p.sec;
	if(p.hor<12){cout<<"a.m.";}else{cout<<"p.m.";}
	
	return output;
}
