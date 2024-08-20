# Proyecto_Progra_1
- [PDF con las intrucciones del proyecto](https://www.aulavirtual.una.ac.cr/pluginfile.php/269053/mod_resource/content/1/proyecto%201%20%28Hospital%20Veterinario%29%20%2815-08-24%29%20.pdf)
## Temas:
- Principios del PPOO
- Adecuada abstracción y encapsulamiento
- Memoria dinámica
- Vectores de objetos dinámicos implementados mediante clases tipo colección
---
## El sistema deberá implementar las siguientes funcionalidades específicas:
- Ingresar y listar especialidades.
- Ingresar y listar doctores. Al ingresar un doctor este debe ser asociado a una
especialidad existente.
- Registrar y listar dueños de mascotas.
- Registrar y listar mascotas. Cada nueva mascota debe asociarse con un dueño
existente (recordar que un mismo dueño puede tener n mascotas).
- Asignación de citas. Antes de brindar una cita, el paciente, el dueño y el doctor
deben haber sido ingresados al sistema. Antes de asignar una cita se debe
visualizar adecuadamente la agenda del doctor especifico. No se pueden brindar
citas en horarios ocupados. A cada cita se le asigna una hora de tiempo. Solo se
maneja la agenda de la semana actual, de lunes a sábado de las 8:00 a 19:00 hrs.
- Se debe permitir realizar cambios y/o cancelaciones de citas asignadas
- En cuanto búsquedas, el sistema deberá permitir:
  - Búsqueda de un paciente específico, mostrando su historial de citas.
  - Búsqueda de un doctor específico, mostrado el listado de todos sus pacientes.
- Genere una interfaz agradable e intuitiva para el usuario. No olvide limpiar la pantalla
cada que ves que se requiera. Utilice interfaces limpias y claras.
- Para cada vector que se requiera, usted, como programador, determina su tamaño o
capacidad máxima adecuada.
- Todos los objetos y colecciones deberán crearse con asignación de memoria dinámica.
---
# Menú Principal

1. **Submenú Administración**
2. **Submenú Control de Citas**
3. **Submenú Búsquedas y Listados**

**Ingrese la opción:** `__`

---

## Submenú Administración

1. **Ingresar Especialidades**
2. **Ingresar Doctor** (por especialidad)
3. **Ingresar Dueño**
4. **Ingresar Mascota** (por dueño)
0. **Regresar al Menú Principal**

**Ingrese la opción:** `__`

---
### Notas Importantes

- El menú principal permitirá acceder a los diferentes submenús del programa.
- Recuerde que no se puede ingresar un doctor en una especialidad no existente.
- Recuerde que no se puede ingresar una mascota para un dueño no existente.

---
## Submenú Control de Citas

1. **Sacar Cita**
2. **Cancelar Cita**
3. **Mostrar Calendario de Citas por Doctor**
4. **Mostrar Citas por Dueño**
0. **Regresar al Menú Principal**

**Ingrese la opción:** `__`

### Instrucciones:

- **Sacar cita:** Se debe pedir el número de identificación del dueño y mostrar la lista de sus mascotas. El usuario debe elegir la mascota deseada de la lista mostrada.
  
  Luego, se debe pedir la especialidad deseada y mostrar la lista de doctores disponibles en esa especialidad. El usuario podrá elegir el doctor y luego seleccionar una fecha y hora para la cita de acuerdo al horario semanal del doctor.

- **Cancelar cita:** Se debe pedir el número de identificación del dueño y mostrar los doctores con los cuales tiene citas asignadas. El usuario elige el doctor y luego selecciona la cita asignada que desea cancelar.
  
- **Mostrar Calendario de Citas por Doctor:** El calendario se debe mostrar en formato de tabla con los 6 días y todas las horas de consulta. Las horas ocupadas por citas asignadas deben estar destacadas.

- **Mostrar Citas por Dueño:** Se deben mostrar todas las mascotas del dueño. El usuario elige la mascota para visualizar las citas correspondientes.

---

## Búsquedas y Listados

1. **Mostrar Listado de Especialidades**
2. **Mostrar Listado de Doctores por Especialidad**
3. **Mostrar Dueños con sus Mascotas**
4. **Mostrar Pacientes por Doctor**
0. **Regresar al Menú Principal**

**Ingrese la opción:** `__`

---
## Condiciones Generales:
- Se evalúa diseño, funcionalidad y eficiencia del sistema implementado.
- La estructura de datos que se utilice debe ser vectores dinámicos.
- El programa debe correr y no tener errores de compilación. Si no corre o tiene
errores de compilación se calificará con cero.
- En los casos que se requiera utilizar conjuntos de datos, se deberán implementar
clases tipo colección creadas por el propio programador. No se podrán utilizar
las colecciones provistas por la STL (Standard Template Library) o cualquier por
otra biblioteca de C++. Si se incumple esta directriz, se asignará una calificación
de cero.
- En proyectos programación, el main() deberá quedar con la menor cantidad de código
posible: básicamente sin funcionalidad. Funcionará únicamente como punto de inicio
del programa.
- En la definición de las clases se deben separar correctamente su declaración y su
implementación, utilizando archivos de cabecera (archivos .h) para la declaración
y archivos de código fuente (archivos .cpp) para la implementación. Los archivos
de cabecera deberán siempre usar guardas (#ifndef, etc).
- Las clases tipo entidad no deberán contener código de entrada/salida (como, por
ejemplo, salida a consola usando cout, o lectura por medio de cin).
- Para ser evaluado, el programa debe tener implementadas, por lo menos, el 20% de
las funcionalidades específicas descritas en el apartado Requerimientos del
Proyecto.
- En caso de detectarse plagio en alguno de los métodos o en cualquier parte del
programa, se asignará cero a la calificación del proyecto.
- Queda a criterio de cada profesor solicitar la defensa oral del proyecto, dentro
o fuera del horario de clase del curso.
- El proyecto se realizará individualmente o en grupos de dos estudiantes máximo y
se entregará por medio del aula virtual, en la actividad correspondiente. No se
recibirán documentos ni materiales por otro medio, salvo indicación manifiesta del
profesor.
- No se aceptará la entrega tardía del proyecto. Evite subir el proyecto a último
momento pues corre el riesgo de presentarse cualquier imprevisto(falta de luz,
caída del internet, falla de la maquina etc).
- Recuerde incluir en los documentos de entrega un archivo bloc de notas llamado
equipo de trabajo, que incluya el nombre completo de cada integrante del equipo.
- Solo uno de los integrantes debe entregar el proyecto.
- Elabore y entregue el diseño UML de clases en formato pdf.
- Entregue el proyecto completo en el IDE formalmente solicitado por cada profesor.
