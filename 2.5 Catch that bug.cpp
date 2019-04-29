#include<iostream>

using namespace std;

int main(){ //En la funcion principal
    int size; //declaramos una variable de tipo int
    cout<<"size: "; //pedimos un valor
    cin>>size;  //lo guardamos en la variable "size"
    int *nums=new int[size]; //creamos un puntero de tipo int
    for(int i=0;i<size;++i){ //de tamaño de la variable "size"
        cout<<"ingrese un valor: "; //recorremos la matriz pidiendo valores
        cin>>nums[i]; // y almacenandolos en su respectiva posicion
    }
    delete nums; //eliminamos el espacio de memoria utilizada por la matriz
    cout<<"matriz eliminada";
}
