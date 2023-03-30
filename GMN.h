#pragma once
#include <iostream>
#include<cstdlib>
using namespace std;
int guessfunction(string question, int a, int b)
{
    int number = 0;
    do
    {
        cout << question << "entre " << a << " y " << b << endl;
        cin >> number;
    } while (number > a || number < b);
    return number;
}
void Examen1()
{
    
    int exitv;
    int realexitv;
    int maximum;
    int minimum;
    int secretnumber;
   


        do
        {
            system("cls");
            cout << "Hola, Bienvenid@ al menu Principal, digita 1-2 para continuar." << endl << "1 Jugar" << endl << "2 Salir" << endl;
            cin >> realexitv;
            exitv = realexitv;
                while (exitv != 2)
                {
                    system("cls");
                    cout << "Introduce el rango entre los numeros para el juego" << endl << "min =";
                    cin >> minimum;
                    cout << "\nMax=";
                    cin >> maximum;

                    srand(static_cast<unsigned int>(time(0)));
                    //srand(time(NULL));

                    int secretNumber = minimum + rand() % (maximum - minimum + 1);
                    int tries = 0;
                    int guess;

                    cout << "GUESS MY NUMBER" << endl;
                    cout << "Adivina el número en el menor número de intentos posible." << endl;

                    //Depurar
                    cout << secretNumber;
                    do
                    {

                        guess = guessfunction("\nAdivina un numero", maximum, minimum);
                        tries++;
                        int VC = secretNumber - guess;
                        if (VC >= -5 && VC <= 5 && VC != 0)
                        {
                            cout << "Estas muy cerca!\n";
                        }
                        if (guess > secretNumber) {
                            cout << "Muy Alto\n\n";

                        }
                        else if (guess < secretNumber) {
                            cout << "Muy Bajo\n\n";

                        }
                        else {
                            cout << "Excelente lo hiciste en -- " << tries << "-- intentos" << endl << endl << "Quieres seguir jugando?" << endl << "1 Si" << endl << "2 No" << endl;
                            cin >> exitv;
                        }
                    } while (guess != secretNumber);

                    
                }
                if (realexitv == 2)
                {
                    {
                        cout << "Realmente quieres salir?" << endl << "1 No" << endl << "2 Si" << endl;
                        cin >> realexitv;
                    }
                }
        } while (realexitv != 2);
    
    cout << "Gracias por venir!";
}


   
