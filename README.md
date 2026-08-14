# 🧠 Fundamentos y dominio del lenguaje C

Repositorio dedicado al estudio y aprendizaje del **lenguaje de programación C**, desde los conceptos fundamentales hasta temas avanzados y especializados.

El objetivo de este repositorio es reunir, de forma **estructurada, progresiva y práctica**, los conocimientos necesarios para aprender C desde cero y continuar avanzando hasta alcanzar un dominio profundo del lenguaje.

Aquí encontrarás explicaciones, ejemplos, ejercicios y proyectos relacionados con C, organizados de manera que cada tema sirva como base para comprender conceptos posteriores.

> 🚧 **Este repositorio está en desarrollo constante.**
>
> El contenido se ampliará progresivamente para cubrir el lenguaje C desde el nivel principiante hasta temas avanzados y especializados.

---

## 📖 ¿Qué encontrarás aquí?

Este repositorio busca convertirse en un recurso completo para quienes quieran aprender C y comprender no solamente **cómo escribir código**, sino también **cómo funciona el lenguaje y qué ocurre detrás de él**.

Los contenidos abarcan:

* Fundamentos de programación en C.
* Sintaxis y semántica del lenguaje.
* Tipos de datos.
* Control de flujo.
* Funciones.
* Arrays y cadenas.
* Punteros.
* Memoria.
* Estructuras y tipos definidos por el usuario.
* Archivos.
* Preprocesador.
* Compilación y enlazado.
* Bibliotecas estándar.
* Gestión de memoria dinámica.
* Estructuras de datos.
* Algoritmos.
* Programación modular.
* Manejo de errores.
* Depuración.
* Optimización.
* Programación de sistemas.
* Interacción con el sistema operativo.
* Concurrencia y multihilo.
* Desarrollo de software de bajo nivel.
* Y otros temas relacionados con el ecosistema de C.

---

# 🗺️ Ruta de aprendizaje

El contenido está organizado de manera progresiva. La ruta no representa un límite del repositorio, sino una estructura que permite avanzar desde los conceptos más sencillos hasta temas de mayor complejidad.

## 🟢 Nivel 1 — Fundamentos

Conceptos necesarios para comenzar a programar en C.

* Introducción al lenguaje C
* Estructura de un programa
* `main()`
* Comentarios
* Variables
* Constantes
* Tipos de datos
* Literales
* Declaraciones
* Operadores
* Expresiones
* Conversión de tipos
* Entrada y salida
* `printf()`
* `scanf()`
* Formatos de impresión
* Compilación básica

---

## 🟢 Nivel 2 — Control de flujo

Herramientas para controlar la ejecución de un programa.

* `if`
* `else`
* `else if`
* `switch`
* Operador ternario
* `while`
* `do while`
* `for`
* `break`
* `continue`
* `goto`
* Bucles anidados
* Condiciones complejas

---

## 🟢 Nivel 3 — Funciones

Organización y reutilización del código.

* Declaración de funciones
* Definición de funciones
* Prototipos
* Parámetros
* Argumentos
* Valores de retorno
* Paso por valor
* Ámbito de las variables
* Variables locales y globales
* `static`
* Recursividad
* Organización modular del código

---

## 🟢 Nivel 4 — Arrays y cadenas

Manejo de conjuntos de datos y texto.

* Arrays unidimensionales
* Arrays multidimensionales
* Inicialización
* Recorrido
* Arrays como parámetros
* Arrays de caracteres
* Cadenas terminadas en `'\0'`
* Manipulación de cadenas
* Biblioteca `<string.h>`
* Arrays de cadenas
* Matrices

---

## 🟡 Nivel 5 — Punteros

Uno de los conceptos fundamentales para comprender C a profundidad.

* Concepto de dirección de memoria
* Punteros
* Operador `&`
* Operador `*`
* Desreferenciación
* Punteros y variables
* Punteros y arrays
* Aritmética de punteros
* Punteros como parámetros
* Punteros a punteros
* Punteros constantes
* Constantes mediante punteros
* Punteros a arrays
* Arrays de punteros
* Punteros a funciones
* `NULL`
* Punteros `void`

---

## 🟡 Nivel 6 — Estructuras y tipos definidos por el usuario

Creación de estructuras de datos propias.

* `struct`
* `typedef`
* `enum`
* `union`
* Estructuras anidadas
* Arrays de estructuras
* Punteros a estructuras
* Acceso mediante `->`
* Estructuras como parámetros
* Estructuras como valores de retorno
* `struct` dinámicas

---

## 🟡 Nivel 7 — Memoria

Comprensión y administración de la memoria utilizada por los programas.

* Stack
* Heap
* Memoria estática
* Memoria automática
* Memoria dinámica
* `malloc()`
* `calloc()`
* `realloc()`
* `free()`
* Fugas de memoria
* Double free
* Dangling pointers
* Use-after-free
* Buffer overflow
* Gestión segura de memoria
* Ciclo de vida de los objetos

---

## 🟡 Nivel 8 — Preprocesador

Herramientas utilizadas antes de la compilación.

* `#include`
* `#define`
* Macros
* Macros con parámetros
* `#ifdef`
* `#ifndef`
* `#if`
* `#elif`
* `#else`
* `#endif`
* Compilación condicional
* Include guards
* Macros predefinidas

---

## 🟡 Nivel 9 — Archivos y entrada/salida

Persistencia y manipulación de información.

* `FILE`
* `fopen()`
* `fclose()`
* `fread()`
* `fwrite()`
* `fgets()`
* `fputs()`
* `fprintf()`
* `fscanf()`
* Archivos de texto
* Archivos binarios
* Modos de apertura
* Posicionamiento dentro de archivos
* `fseek()`
* `ftell()`
* `rewind()`
* Manejo de errores de archivos

---

## 🟠 Nivel 10 — Biblioteca estándar de C

Uso de las herramientas proporcionadas por el estándar.

### `<stdio.h>`

Entrada y salida.

### `<stdlib.h>`

Memoria dinámica, conversiones, números aleatorios y control del programa.

### `<string.h>`

Manipulación de cadenas y memoria.

### `<math.h>`

Operaciones matemáticas.

### `<ctype.h>`

Clasificación y conversión de caracteres.

### `<time.h>`

Fecha y hora.

### `<stdbool.h>`

Valores booleanos.

### `<stdint.h>`

Tipos enteros de tamaño definido.

### `<stddef.h>`

Tipos y constantes comunes.

### `<assert.h>`

Comprobaciones durante la ejecución.

### `<errno.h>`

Manejo de códigos de error.

### `<limits.h>` y `<float.h>`

Límites de tipos numéricos.

---

## 🟠 Nivel 11 — Programación modular

Organización de proyectos reales.

* Archivos `.c`
* Archivos `.h`
* Declaraciones
* Definiciones
* Include guards
* Separación de responsabilidades
* Interfaces
* Implementaciones
* Compilación de múltiples archivos
* Bibliotecas estáticas
* Bibliotecas dinámicas

---

## 🟠 Nivel 12 — Compilación y enlazado

Comprender qué ocurre desde el código fuente hasta el ejecutable.

```text
Código fuente
     ↓
Preprocesador
     ↓
Código preprocesado
     ↓
Compilador
     ↓
Código ensamblador
     ↓
Ensamblador
     ↓
Archivo objeto
     ↓
Linker
     ↓
Ejecutable
```

Temas:

* Preprocesamiento
* Compilación
* Ensamblado
* Linking
* Archivos objeto
* Símbolos
* Dependencias
* GCC
* Flags de compilación
* `-Wall`
* `-Wextra`
* `-Wpedantic`
* Debug builds
* Release builds

---

## 🟠 Nivel 13 — Estructuras de datos

Implementación de estructuras de datos utilizando C.

* Listas enlazadas
* Listas doblemente enlazadas
* Listas circulares
* Pilas
* Colas
* Colas circulares
* Árboles
* Árboles binarios
* Árboles de búsqueda
* Heaps
* Tablas hash
* Grafos

---

## 🔴 Nivel 14 — Algoritmos

Implementación y análisis de algoritmos.

* Búsqueda lineal
* Búsqueda binaria
* Ordenamiento burbuja
* Selection sort
* Insertion sort
* Merge sort
* Quick sort
* Heap sort
* Recursividad
* Backtracking
* Complejidad temporal
* Complejidad espacial
* Notación Big O

---

## 🔴 Nivel 15 — Depuración y análisis

Herramientas para encontrar y solucionar problemas.

* Errores de compilación
* Warnings
* Errores de ejecución
* Errores lógicos
* Debugging
* `gdb`
* Breakpoints
* Watchpoints
* Stack traces
* Core dumps
* Sanitizers
* AddressSanitizer
* UndefinedBehaviorSanitizer
* Valgrind
* Análisis de memoria

---

## 🔴 Nivel 16 — C avanzado

Conceptos que permiten profundizar en el funcionamiento del lenguaje.

* Punteros complejos
* Declaraciones complejas
* `const`
* `volatile`
* `restrict`
* `static`
* `extern`
* Storage duration
* Linkage
* Alignment
* Padding
* Object representation
* Undefined behavior
* Implementation-defined behavior
* Unspecified behavior
* Integer promotions
* Type conversions
* Bitwise operations
* Manipulación de bits
* Endianness

---

## 🔴 Nivel 17 — Programación de bajo nivel

Uso de C para interactuar más directamente con el hardware y el sistema.

* Representación binaria
* Bits y bytes
* Máscaras de bits
* Registros
* Memoria
* Endianness
* Interacción con hardware
* C y ensamblador
* Inline assembly
* Acceso a memoria mapeada
* Programación embebida
* Microcontroladores

---

## 🔴 Nivel 18 — Programación de sistemas

Aplicación de C para desarrollar software cercano al sistema operativo.

* Procesos
* Hilos
* Señales
* Pipes
* Interprocesos
* Sockets
* File descriptors
* System calls
* Gestión de procesos
* Concurrencia
* Sincronización
* Mutex
* Semáforos
* Programación POSIX
* Programación en Linux

---

## 🔴 Nivel 19 — C y sistemas operativos

Conceptos avanzados relacionados con el funcionamiento interno de los sistemas.

* Procesos y memoria
* Virtual memory
* System calls
* Context switching
* Scheduling
* Interacción con el kernel
* ABI
* ELF
* Linking dinámico
* Shared libraries
* Carga de ejecutables
* Interfaces POSIX

---

## 🔴 Nivel 20 — Desarrollo avanzado

Temas orientados al desarrollo de software de mayor complejidad.

* Diseño de software en C
* Arquitectura de proyectos
* APIs
* Bibliotecas reutilizables
* Testing
* Unit testing
* Manejo avanzado de errores
* Optimización
* Profiling
* Portabilidad
* Compatibilidad entre plataformas
* Seguridad de memoria
* Seguridad del software
* C moderno
* Estándares del lenguaje

---

# 🧪 Ejercicios y proyectos

Los conceptos aprendidos se complementan con ejercicios y proyectos prácticos.

La dificultad irá aumentando progresivamente para aplicar diferentes conceptos en conjunto.

Algunos proyectos pueden comenzar utilizando conceptos básicos y posteriormente ser mejorados incorporando nuevos conocimientos.

Ejemplos de proyectos que pueden formar parte del repositorio:

* Calculadoras
* Conversores
* Sistemas de inventario
* Sistemas de gestión
* Procesamiento de archivos
* Implementaciones de estructuras de datos
* Algoritmos
* Juegos sencillos
* Herramientas para terminal
* Utilidades para Linux
* Proyectos de programación de sistemas

---

# 🛠️ Herramientas

Las herramientas utilizadas pueden variar según el proyecto, pero el repositorio está principalmente orientado a:

* **C**
* **GCC**
* **Git**
* **GitHub**
* **Linux**
* **GDB**
* **Make**
* **Valgrind**
* **Visual Studio Code**

---

# 📚 Filosofía del repositorio

El aprendizaje de C no consiste únicamente en conocer su sintaxis.

Comprender C implica aprender cómo se representan los datos, cómo se administra la memoria, cómo se compila un programa y cómo el software interactúa con el sistema.

Por eso, este repositorio busca avanzar progresivamente desde:

```text
Sintaxis
   ↓
Programación
   ↓
Memoria
   ↓
Estructuras de datos
   ↓
Algoritmos
   ↓
Compilación
   ↓
Bajo nivel
   ↓
Sistemas
   ↓
Dominio avanzado de C
```

El contenido está pensado para que cada concepto pueda servir como fundamento para comprender otros más complejos.

---

# 🚧 Estado del proyecto

**En desarrollo activo.**

Este repositorio está en desarrollo y seguirá creciendo para cubrir progresivamente los conceptos aquí mencionados relacionados con el lenguaje C y su utilización en diferentes áreas de la informática.

La ruta propuesta no representa un punto final. Nuevos temas, ejercicios, proyectos y conceptos avanzados serán incorporados conforme se amplíe el contenido.

---

# 🤝 Contribuciones

Las sugerencias, correcciones y aportes que ayuden a mejorar el contenido son bienvenidos.

Si encuentras un error, una explicación que pueda mejorarse o consideras que falta un concepto importante, puedes abrir un **Issue** o realizar un **Pull Request**.

---

# 📜 Licencia

Este repositorio está destinado al aprendizaje y difusión del conocimiento relacionado con el lenguaje C.

Consulta el archivo `LICENSE` para conocer los términos específicos de uso, modificación y distribución del contenido.

---

<div align="center">

### 💻 Aprende C. Comprende cómo funciona. Construye desde los fundamentos.

**Desde el primer `Hello, World!` hasta la programación de sistemas.**

⭐ Si este repositorio te resulta útil, considera darle una estrella al proyecto.

</div>
