#include "Interfaz.h"

int op;

Interfaz::Interfaz() {}

Interfaz::~Interfaz() {}


void Interfaz::mostrarMenu() {
do {
    cout << "# Menú Principal" << endl;
    cout << "1. **Submenú Administración**" << endl;
    cout << "2. **Submenú Control de Citas**" << endl;
    cout << "3. **Submenú Búsquedas y Listados**" << endl;
    cout << "4. **Salir**" << endl;
    cout << " Ingrese la opción : " << endl;
   cin >> op;

    manejarMP(op);

} while (op != 4);
   }

    void Interfaz::manejarMP(int op) {

            switch (op) {
            case 1:
                mostrarSubmAdm();
                break;
            case 2:
                mostrarSubmCC();
                break;
            case 3:
                mostrarSubmBL();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
            }
        }
    
    void Interfaz::mostrarSubmAdm() {
        int op2;
        do {
            cout << "# Submenú Administración" << endl;
            cout << "1. **Ingresar Especialidades**" << endl;
            cout << "2. **Ingresar Doctor**" << endl;
            cout << "3. **Ingresar Dueño**" << endl;
            cout << "4. **Ingresar Mascota**" << endl;
            cout << "0. **Regresar al Menú Principal**" << endl;
            cout << "Ingrese la opción: ";
            cin >> op2;

            switch (op2) {
            case 1:
                cout << "Ingresar Especialidades" << endl;
           
                break;
            case 2:
                cout << "Ingresar Doctor" << endl;
              
                break;
            case 3:
                cout << "Ingresar Dueño" << endl;
                
                break;
            case 4:
                cout << "Ingresar Mascota" << endl;
                 break;
            case 0:
                cout << "Regresando al Menú Principal.." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
            }
        } while (op2 != 0);
    }


    void Interfaz::mostrarSubmCC(){
    
        int op3;
        do {
            cout << "## Submenú Control de Citas" << endl;
            cout << "1. **Sacar Cita**" << endl;
            cout << "2. **Cancelar Cita**" << endl;
            cout << "3. **Mostrar Calendario de Citas por Doctor**" << endl;
            cout << "4. **Mostrar Citas por Dueño**" << endl;
            cout << "0. **Regresar al Menú Principal**" << endl;
            cout << "Ingrese la opción: ";
            cin >> op3;

            switch (op3) {
            case 1:
                cout << "1. **Sacar Cita**" << endl;
                //  **Sacar cita:** Se debe pedir el número de identificación del dueño y mostrar la lista de sus mascotas. El usuario debe elegir la mascota deseada de la lista mostrada.
               // Luego, se debe pedir la especialidad deseada y mostrar la lista de doctores disponibles en esa especialidad.El usuario podrá elegir el doctor y luego seleccionar una fecha y hora para la cita de acuerdo al horario semanal del doct

                break;
            case 2:
                cout << "2. **Cancelar Cita**" << endl;
                // **Cancelar cita:** Se debe pedir el número de identificación del dueño y mostrar los doctores con los cuales tiene citas asignadas. El usuario elige el doctor y luego selecciona la cita asignada que desea cancelar.
                break;
            case 3:
                cout << "3. **Mostrar Calendario de Citas por Doctor**" << endl;
                // **Mostrar Calendario - de Citas por Doctor : **El calendario se debe mostrar en formato de tabla con los 6 días y todas las horas de consulta.Las horas ocupadas por citas asignadas deben estar destacadas.
                break;
            case 4:
                cout << "4. **Mostrar Citas por Dueño**" << endl;
                // **Mostrar Citas por Dueño:** Se deben mostrar todas las mascotas del dueño. El usuario elige la mascota para visualizar las citas correspondientes.

                break;
            case 0:
                cout << "Regresando al Menú Principal.." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
            }
        } while (op3 != 0);
    }
 

    void Interfaz::mostrarSubmBL(){

            int op4;
            do {
                cout << "## Búsquedas y Listados" << endl;
                cout << "1. **Mostrar Listado de Especialidades**" << endl;
                cout << "2. **Mostrar Listado de Doctores por Especialidad**" << endl;
                cout << "3. **Mostrar Dueños con sus Mascotas**" << endl;
                cout << "4. **Mostrar Pacientes por Doctor**" << endl;
                cout << "0. **Regresar al Menú Principal**" << endl;
                cout << "Ingrese la opción: ";
                cin >> op4;

                switch (op4) {
                case 1:
                    cout << "1. **Mostrar Listado de Especialidades**" << endl;
                 
                    break;
                case 2:
                    cout << "2. **Mostrar Listado de Doctores por Especialidad**" << endl;
                    
                    break;
                case 3:
                    cout << "3. **Mostrar Dueños con sus Mascotas**" << endl;

                    break;
                case 4:
                    cout << "4. **Mostrar Pacientes por Doctor**" << endl;
                    break;
                case 0:
                    cout << "Regresando al Menú Principal.." << endl;
                    break;
                default:
                    cout << "Opción no válida. Intente de nuevo." << endl;
                    break;
                }
            } while (op4 != 0);
        }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
