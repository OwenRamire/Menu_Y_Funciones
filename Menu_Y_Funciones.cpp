#include <iostream>
#include <math.h>

using namespace std;

//Prototipos de funcion
void form1(int maximo);
void form2(int x,int y);
void form3(int maximo);
float f1(int x);

int main ()
{
    char op;
    int x1, x2;
    cout << "        MENU        " <<endl;
    cout <<endl;
    cout << " 1.- raiz cubica de (2x^2) / (2x - 3)" <<endl;
    cout << " 2.- F(x,y)= 2xy - 3y " <<endl;
    cout << " 3.- F(x)= 2x^3 o 3x^2 " <<endl;
    cout << " 4.- Salir" <<endl;
    cout << " Opcion a escoger: ";
    cin >> op;

    switch (op)
    {
    case '1':
        {
            cout << " valor maximo a tabular: ";
            cin >> x1;
            cout <<" x " << " F(x) " <<endl;
            form1(x1);
            break;
        }
    case '2':
        {
            for (int x=1, y=1; x<=5, y<=5; x++,y++)
            {
                form2(x,y);
                cout <<endl;
            }
            break;
        }
    case '3':
        {
            cout << " valor maximo a tabular: ";
            cin >> x2;
            cout <<" x " << " F(x) " <<endl;
            form3(x2);
            break;
        }
    }
    return 0;
}

float f1(int x)
{
    return  cbrt(2 * (pow (x,2))) / ((2 * x) - 3 );
}
void form1(int maximo)
{
    float resultado;
    for (int i=0 ;i<=maximo;i++)
    {

        cout <<" " << i << " " << f1(i);
        cout <<endl;
    }
}
void form2(int x,int y)
{
    int resultX, resultY;
    resultX = 2 * x;
    resultY = -(3*y) - y;
    cout << " X= "<<resultX << " Y= " << resultY;
}
void form3(int maximo)
{
    float resultado;
    if (maximo > 0)
    {
        for (int i=0;i<=maximo; i++)
        {
            resultado = 2 * pow(i,3);
            cout <<" " << i << " " << resultado;
            cout <<endl;
        }
    }
    else if (maximo <=0)
    {
        for (int i=0; i>=maximo;i--)
        {
            resultado = 3 * (pow(i,2));
            cout <<" " << i << " " << resultado;
            cout <<endl;
        }
    }
}
