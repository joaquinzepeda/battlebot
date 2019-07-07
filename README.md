# Rotorcrart - 2019
Battle-bot que consiste en una helice que lo recubrira, la cual sera su arma y su defensa. Y se movera con 2 ruedas traseras y una rueda delantera con su eje libre.


![Robot "Rotor-Crart"](/multimedia/robot1.jpg)



## Integrantes
Aejandro Chepillo - Fcfm
Raimundo Andrade - Fcfm
Joaquin Zepeda - Fcfm


## Descripción del proyecto

Nuestro Robot tiene una base redondeada de madera en donde sencuentra el arduino y los circuitos utilizados, consta de 3 ruedas.
2 Ruedas traseras impulsadas por motores DC y una rueda delantera centrada con un eje libre para moverse con libertad.
En el centro de la base se encuentra un eje, este eje mediante unos engranajes se une a un motor brushless de dron reciclado.
En la párte superior se encuentra union en forma de "T", Perpendicular a este eje y atraves de la union pasa un tubo de PVC que se curva en 90 grados acercandose al final de
cada extremo, lo suficiente como para que cubra el robot al girar este eje. En ambos extremos se encuentran unidas unas tuercas solidas.

### Estrategia utilizada

Nuestro estrategia consitio en crear un robot en el cual su mecanismo de defensa y ataque sean el mismo, de forma que si nos tratan de atacar,
el agresor sufriria un daño colateral como efecto de atacar a nuestro robot.

#### Ofensiva y Defensiva

El eje que esta unido a unos tuvos PVC en la parte superior giraria por accion de un motor brushless produciendo que el tuvo PVC perpencicular
gire con mucha velocidad, y debido a que este tuvo cuenta de caida con unas tuercas en los extremos de esta forma acercandose a los robots enemigos, los golpearia
y no sufriria daño, ya que está al girar en torno a la base circular la protegeria tambien, funcionando esta arma como un mecanismo de defensa y ataque.

### Descripcion de la aplicacion.

![aplicacion](/multimedia/app.jpg)

La aplicacion hecha en MIT Inventor para controlar nuestro battle bot consta de 7 botones. 2 botones para que se mueva adelante y atras haciendo girar las ruedas a la misma revolucion
y para que avancen en el mismo sentido, otros 2 botones para que gire en si mismo a la derecha o a la izquierda, producto de que ambas ruedas se muevan a las mismas revoluciones,
pero con sentido de giro contrario. Otro par de botones tenian la funcion de encender y apagar el arma a distancia, sin embargo este sistema no se utilizo al final, debido a que el puente H utilizado
no dejaba pasar el suficiente amperaje, quitandole rendimiento a nuestra arma, por lo que esta funcion se reemplazo por un interruptor manual. finalmente, el ultimo boton tiene la finalidad de abrir
una pantalla en la cual aparecen los posible dispositivos a los que conectarse mediante bluetooth.

### Diagrama funcional
<Diagrama general de funcionamiento. Se sugiere un esquema de sistemas, completo.>

### *BONUS*: Paso a Paso
<Explicar brevemente el paso a paso de cómo construir el battlebot.>

### Problemas y soluciones

Primero tuvimos que descifrar como seria la base correcta para crear nuestro robot, ya que teoricamente ya lo teniamos pensado.
lo siquiente fue que ya al obtener unos motores reciclados para nuestra arma, estos al conectarlos a unas pilas comunes no funcionaban, y nos dimos cuenta que nesesitaban unas pilas
con mayor amperaje, por lo que conseguimos unas pilas adecuadas y sus complementos para conectarlas adecuadamente. finalmente otro problema que surgio, fue que queriamos
poder encender y apagar el arma a distancia, por lo que nos conseguimos un puente H igual al usado para las ruedas traseras para poder asignarlo a un pin y asi manejarlo. sin embargo 
este puente no dejaba pasar sufieciente corriente por lo que se calentaba mucho, y el arma no funcionaba adecuadamente, por lo que decidimos al final cambiar este sistema por un interruptor manual.

### Proyecciones a futuro

A futuro hemos pensado en mejoras, como cambiar el interruptor manual por uno digital de forma que lo controlemos a distancia. agregarle mas peso y espacio a la base central de nuestro robot para que 
todo este mejor acomodado y sea mas estable. y hemos pensado en aumentar el peso o la densidad del arma(helice), para que sea mas resistente al momento de golpear un objeto duro, de manera que resista sin problemas.

Tambien creemos que nuestro battlebot tiene mucho potencial en el mismo ambito de peleas, ya que no consta de mecanismos muy complicados por lo que se le podrian agregar diferentes funciones para hacerlo mas peligroso.
Tambien podria ser util como un robot de timpieza si en los extremos del arma se intercambiaran las tuercas, por escobillas, podria ser bastante eficiente a la hora de barrero trapear.



## Licencia
<a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/4.0/88x31.png" /></a><br />Esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/">Licencia Creative Commons Atribución-NoComercial 4.0 Internacional</a>.
