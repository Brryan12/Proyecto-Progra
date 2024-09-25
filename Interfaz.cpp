#include "Interfaz.h"

int op;

Interfaz::Interfaz() {}

Interfaz::~Interfaz() {}


void Interfaz::mostrarMenu() {
do {
    cout << "# Men� Principal" << endl;
    cout << "1. **Submenu Administraci�n**" << endl;
    cout << "2. **Submenu Control de Citas**" << endl;
    cout << "3. **Submenu Busquedas y Listados**" << endl;
    cout << "4. **Salir**" << endl;
    cout << " Ingrese la opcion : " << endl;
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
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
            }
        }
    
    void Interfaz::mostrarSubmAdm() {
        int op2;
        do {
            cout << "# Submenu Administracion" << endl;
            cout << "1. **Ingresar Especialidades**" << endl;
            cout << "2. **Ingresar Doctor**" << endl;
            cout << "3. **Ingresar Dueno**" << endl;
            cout << "4. **Ingresar Mascota**" << endl;
            cout << "0. **Regresar al Menu Principal**" << endl;
            cout << "Ingrese la opci�n: ";
            cin >> op2;

            switch (op2) {
            case 1:
                cout << "Ingresar Especialidades" << endl;
           
                break;
            case 2:
                cout << "Ingresar Doctor" << endl;
              
                break;
            case 3:
                cout << "Ingresar Dueno" << endl;
                
                break;
            case 4:
                cout << "Ingresar Mascota" << endl;
                 break;
            case 0:
                cout << "Regresando al Menu Principal.." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
            }
        } while (op2 != 0);
    }


    void Interfaz::mostrarSubmCC(){
    
        int op3;
        do {
            cout << "## Submenu Control de Citas" << endl;
            cout << "1. **Sacar Cita**" << endl;
            cout << "2. **Cancelar Cita**" << endl;
            cout << "3. **Mostrar Calendario de Citas por Doctor**" << endl;
            cout << "4. **Mostrar Citas por Dueno**" << endl;
            cout << "0. **Regresar al Men� Principal**" << endl;
            cout << "Ingrese la opcion: ";
            cin >> op3;

            switch (op3) {
            case 1:
                cout << "1. **Sacar Cita**" << endl;
                //  **Sacar cita:** Se debe pedir el n�mero de identificaci�n del due�o y mostrar la lista de sus mascotas. El usuario debe elegir la mascota deseada de la lista mostrada.
               // Luego, se debe pedir la especialidad deseada y mostrar la lista de doctores disponibles en esa especialidad.El usuario podr� elegir el doctor y luego seleccionar una fecha y hora para la cita de acuerdo al horario semanal del doct

                break;
            case 2:
                cout << "2. **Cancelar Cita**" << endl;
                // **Cancelar cita:** Se debe pedir el n�mero de identificaci�n del due�o y mostrar los doctores con los cuales tiene citas asignadas. El usuario elige el doctor y luego selecciona la cita asignada que desea cancelar.
                break;
            case 3:
                cout << "3. **Mostrar Calendario de Citas por Doctor**" << endl;
                // **Mostrar Calendario - de Citas por Doctor : **El calendario se debe mostrar en formato de tabla con los 6 d�as y todas las horas de consulta.Las horas ocupadas por citas asignadas deben estar destacadas.
                break;
            case 4:
                cout << "4. **Mostrar Citas por Due�o**" << endl;
                // **Mostrar Citas por Due�o:** Se deben mostrar todas las mascotas del due�o. El usuario elige la mascota para visualizar las citas correspondientes.

                break;
            case 0:
                cout << "Regresando al Menu Principal.." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
            }
        } while (op3 != 0);
    }
 

    void Interfaz::mostrarSubmBL(){

            int op4;
            do {
                cout << "## Busquedas y Listados" << endl;
                cout << "1. **Mostrar Listado de Especialidades**" << endl;
                cout << "2. **Mostrar Listado de Doctores por Especialidad**" << endl;
                cout << "3. **Mostrar Duenos con sus Mascotas**" << endl;
                cout << "4. **Mostrar Pacientes por Doctor**" << endl;
                cout << "0. **Regresar al Menu Principal**" << endl;
                cout << "Ingrese la opcion: ";
                cin >> op4;

                switch (op4) {
                case 1:
                    cout << "1. **Mostrar Listado de Especialidades**" << endl;
                 
                    break;
                case 2:
                    cout << "2. **Mostrar Listado de Doctores por Especialidad**" << endl;
                    
                    break;
                case 3:
                    cout << "3. **Mostrar Duenos con sus Mascotas**" << endl;

                    break;
                case 4:
                    cout << "4. **Mostrar Pacientes por Doctor**" << endl;
                    break;
                case 0:
                    cout << "Regresando al Menu Principal.." << endl;
                    break;
                default:
                    cout << "Opcion no valida. Intente de nuevo." << endl;
                    break;
                }
            } while (op4 != 0);
        }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
