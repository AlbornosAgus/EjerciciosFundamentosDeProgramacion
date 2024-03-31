#include <iostream>

using namespace std;
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
int main()
{
   ejercicio4();

    return 0;
}
void ejercicio1()
{
    const int cantNum = 10;
    int numeros[cantNum],contNum=0;

    for(int i=1;i<=cantNum;i++)
    {
        cout<<"Ingresar el numero "<<i<<endl;
        cin>> numeros[i-1];
    }
    for(int i=1;i<=cantNum;i++)

    {
        if(numeros[i-1]>0)
        {
          contNum++;
          cout<<numeros[i-1]<<endl;

        }


    }
    cout<<"La cantidad de numeros positivos son "<<contNum<<endl;

}
void ejercicio2()
{
    const int cantNum = 15;
    int numeros[cantNum], numPrueb;

    for(int i=1;i<=cantNum;i++)
    {
        cout<<"Ingresar el numero "<<i<<endl;
        cin>> numeros[i-1];
    }
    cout<<endl;
    cout<<"Ingresa numero a buscar"<<endl;
    cin>>numPrueb;
    for(int i=1;i<=cantNum;i++)
    {
        if(numeros[i-1]==numPrueb)
        {
          cout<<"El numero "<<numPrueb<<" esta en la lista en el puesto "<<i <<endl;
        }



    }


}
void ejercicio3()
{
    const int cantNum = 15;
    int numeros[cantNum], valorMin,repNum=0;
    bool flag=true;
    for(int i=1;i<=cantNum;i++)
    {
        cout<<"Ingresar el numero "<<i<<endl;
        cin>> numeros[i-1];
    }
    cout<<endl;
    for(int i=0;i<cantNum;i++)
    {

       if(flag ==true)
       {
           valorMin=numeros[i];
           flag = false;

       }
       else if(numeros[i] < valorMin)
       {
           valorMin = numeros[i];
       }




    }
    for(int i=0;i<cantNum;i++)
    {
        if(numeros[i]== valorMin)
        {
           repNum++;

        }
    }

    cout<<"El valor minimo es "<<valorMin<<" y se repite "<<repNum<<" veces"<<endl;


}
void ejercicio4()
{
  const int mes = 5;
  int numVenta,NumDia[mes]={},dia,indice;
  float impVenta,recTot[mes]={},recMax;
  bool flag=true;

  for(int i=1;i<=mes;i++)
  {
      NumDia[i-1]= i;

  }

  cout<<"Ingresar Numero de venta"<<endl;
  cin>>numVenta;

  while(numVenta !=0)
  {
      cout<< "Ingresa el dia: "<<endl;
      cin>>dia;
      cout<<"Ingresa el monto de la venta:"<<endl;
      cin>>impVenta;

      recTot[dia-1]+=impVenta;
      cout<<"Ingresar Numero de venta"<<endl;
      cin>>numVenta;


  }
  for(int i=1;i<=mes;i++)
  {
      if(recTot[i-1]!=0)
      {
          cout<<"Dia "<<NumDia[i-1]<<" con una recaudacion de "<<recTot[i-1]<<" $"<<endl;
      }
      if(flag == true)
      {
          recMax = recTot[i-1];
          indice=i-1;
          flag= false;
      }
      else if(recTot[i-1]> recMax)
      {
          recMax = recTot[i-1];
          indice=i-1;

      }


  }
  cout<<"El numero de dia que mas se recaudo fue el "<<indice+1<<" con un total de "<<recMax<<"$"<<endl;











}
