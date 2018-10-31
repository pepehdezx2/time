//
//  main.cpp
//  tarea6
//
//  Created by Jose Antonio on 20/03/18.
//  Copyright © 2018 Jose Antonio. All rights reserved.
//

#include <iostream>
#include "Tiempo.h"
using namespace std;
    int main() {
        int t1h, t1m, t2h, t2m, t4h, t4m, t5h, t5m;
        char opcion;
        Tiempo t3, t6, t7(15, 59), t8(0,0), t9;
        
        // teclear los valores para tiempo 1, tiempo2, tiempo4 y tiempo5
        cin >> t1h >> t1m >> t2h >> t2m >> t4h >> t4m >> t5h >> t5m;
        Tiempo t1(t1h, t1m), t2(t2h, t2m);
        Tiempo t4(t4h, t4m), t5(t5h, t5m);
        
        cin >> opcion;
        
        switch (opcion) {
            case 'a':
                // + SUMA tiempo con tiempo miembro
                t3 = t1 + t2;
                t1.muestra();
                cout << endl;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                
                t6 = t4 + t5;
                t4.muestra();
                cout << endl;
                t5.muestra();
                cout << endl;
                t6.muestra();
                cout << endl;
                
                
                break;
                
            case 'b':
                // + SUMA tiempo con minutos miembro
                t3 = t2 + 10;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                
                t3 = t2 + 190;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                
                break;
                
            case 'c':
                // + SUMA minutos con tiempo friend
                t3 = 45 + t2;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                
                
                t3 = 90 + t2;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                break;
                
            case 'd':
                // ++ Incrementa 1 minuto   miembro
                t3 = ++t2;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                
                t3 = ++t7;
                t7.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                break;
                
            case 'e':
                // -- Decrementa 1 minuto   friend
                t3 = --t2;
                t2.muestra();
                cout << endl;
                t3.muestra();
                cout << endl;
                
                t3 = --t8;
                t3.muestra();
                cout << endl;
                t8.muestra();
                cout << endl;
                break;
                
            case 'f':
                // += SUMA tiempo con tiempo  friend
                t2 += t4;
                t2.muestra();
                cout << endl;
                t4.muestra();
                cout << endl;
                
                t7 += t5;
                t5.muestra();
                cout << endl;
                t7.muestra();
                cout << endl;
                break;
                
            case 'g':
                // > Regresa true si el primer tiempo es mayor que el segundo  miembro
                if (t1 > t2)
                    cout << "mayor" << endl;
                else
                    cout << "no mayor" << endl;
                
                if (t4 > t2)
                    cout << "mayor" << endl;
                else
                    cout << "no mayor" << endl;
                break;
        }
        return 0;
    }
