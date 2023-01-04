#include <iostream>

using namespace std;
class cliente{
private:
char nombre[64], direccion[64], telefono[8];
float saldo=1200;
int TipoDeCuenta,NumeroDeCuenta;
public:
    void imprimedatos();
    float obtenerSaldo();
    int obtenerTipoCta();
    int HacerRetiro(float);
    void HacerDeposito(float);
};
/*desplegamos los datos del cliente*/
void cliente::imprimedatos(){
cout<<"\n Nombre : "<<nombre<<'\n';
cout<<"\n Direccion : "<<direccion<<'\n';
cout<<"\n Telefono : "<<telefono<<'\n';
cout<<"\n Saldo : "<<saldo<<'\n';
cout<<"\n Tipo de cuenta : "<<TipoDeCuenta<<'\n';
cout<<"\n Numero de cuenta : "<<NumeroDeCuenta<<'\n';
}
float cliente::obtenerSaldo(){
return saldo;
}
int cliente::obtenerTipoCta(){
return TipoDeCuenta;
}

int cliente::HacerRetiro(float monto){
int respuesta=1;
if((saldo-monto)<0){
    respuesta=0;
}else{
saldo=saldo-monto;
}
return respuesta;
}
void cliente::HacerDeposito(float monto){
saldo=saldo+monto;
}


int main(){
cliente cliente1,cliente2;
float saldocliente;
float monto;
saldocliente=cliente1.obtenerSaldo();
cout<<"\n saldo de el cliente es : "<<saldocliente<<'\n';
if(cliente1.obtenerTipoCta()==1)
    if(cliente1.HacerRetiro(1000))
       cout<<"\n El retiro se realizo con exito cuneta actualizada: "<<endl;
    else
        cout<<"\n no tiene saldo suficiente para realizar el retiro \n "<<endl;
else
    cout<<"\n para realizar el retiro debe ser una cuenta de cheques \n"<<endl;

monto=1000;
cout<<"\n cliente hace deposito de monto : "<<monto<<endl;
cliente1.HacerDeposito(monto);
saldocliente=cliente1.obtenerSaldo();
cout<<"\n saldo de el cliente es : "<<saldocliente<<'\n';
cliente1.imprimedatos();
cliente2.imprimedatos();
}
