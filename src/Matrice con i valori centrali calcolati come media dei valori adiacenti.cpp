#include<iostream>
#include<cstdlib>
using namespace std;

//prototipi funzioni
void leggimatrice(float **matrice,int dim);
void stampamatrice(float **matrice,int dim);
void inzializzamatrice(float **& matrice,int dim);
void generamatrice(float **matrice1,float **matrice2,int dim);


int main()
{
    int n;
    cout<<"Inserire il rango della matrice: ";
    cin>>n;
    float **matriceA;
    inzializzamatrice(matriceA,n);
    leggimatrice(matriceA,n);
    cout<<"La matrice inserita e' :"<<endl;
    stampamatrice(matriceA,n);
    float **matriceB;
    inzializzamatrice(matriceB,n);
    generamatrice(matriceA,matriceB,n);
    cout<<"La matrice cercata e' :"<<endl;
    stampamatrice(matriceB,n);

system("PAUSE");
return 0;
}

void leggimatrice(float **matrice,int dim)
{
     for(int i=0;i<dim;i++)
     for(int j=0;j<dim;j++)
     {
             cout<<"Inserrie l'elemento "<<i<<"."<<j<<"=";
             cin>>matrice[i][j];
     }
}

void stampamatrice(float **matrice,int dim)
{
     for(int i=0;i<dim;i++)
       {
             for(int j=0;j<dim;j++)
             {cout.width(5);
              cout<<matrice[i][j];
             }cout<<endl;
       }
}

void inzializzamatrice(float **&matrice,int dim)
{
     matrice=new float*[dim];
     for(int i=0;i<dim;i++)
        matrice[i]=new float[dim];
}

void generamatrice(float **matrice1,float **matrice2,int dim)
{
     for(int i=0;i<dim;i++)
     for(int j=0;j<dim;j++)
     {
             if(i==0 || j==0 || i==dim-1 || j==dim-1)
                     matrice2[i][j]=matrice1[i][j];
             else
                     matrice2[i][j]=((matrice1[i-1][j]+matrice1[i+1][j]+matrice1[i][j-1]+matrice1[i][j+1])/4);
     }
}
