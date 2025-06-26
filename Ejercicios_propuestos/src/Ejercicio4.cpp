#include <iostream>
#include <cmath>
using namespace std;
enum ErrorTipo{primer_coeficiente_cero,no_raices_reales};
void raices(double a,double b,double c){
    if(a==0){
        throw primer_coeficiente_cero;
    }
    double discriminante=b*b-4*a*c;
    if(discriminante<0){
        throw no_raices_reales;
    }
    double raizDiscriminante=sqrt(discriminante);
    double x1=(-b+raizDiscriminante)/(2*a);
    double x2=(-b-raizDiscriminante)/(2*a);
    cout<<"Raíces x1="<<x1<<" , x2="<<x2<<endl;
}
int main(){
    double a,b,c;
    cout<<"Coeficientes a, b y c: "<<endl;
    cin>>a>>b>>c;
    try{
        raices(a,b,c);
    }catch(ErrorTipo e){
        if(e==primer_coeficiente_cero){
            cout<<"Error: El coeficiente 'a' no puede ser cero."<<endl;
        }else if(e==no_raices_reales){
            cout<<"Error: No existen raices reales."<<endl;
        }
    }
    return 0;
}