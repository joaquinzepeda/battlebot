# Rotorcraft - 2019
Battle-bot que consiste en una hélice que lo recubrirá, la cual será su arma y su defensa. Y se moverá con 2 ruedas traseras y una rueda delantera con su eje libre.

![Robot "Rotor-Craft"](/multimedia/robot1.jpg)

## Integrantes
Alejandro Chepillo - Fcfm
Raimundo Andrade - Fcfm
Joaquín Zepeda - Fcfm

## Descripción del proyecto

Nuestro Robot tiene una base redondeada de madera en donde se encuentra el arduino y los circuitos utilizados, consta de 3 ruedas. 2 Ruedas traseras impulsadas por motores DC y una rueda delantera centrada con un eje libre para moverse con libertad. En el centro de la base se encuentra un eje, este eje mediante unos engranajes se une a un motor brushless de dron reciclado. En la parte superior se encuentra una unión en forma de "T", perpendicular a este eje y a través de la unión pasa un tubo de PVC que se curva en 90 grados acercándose al final de cada extremo, lo suficiente como para que cubra el robot al girar este eje. En ambos extremos se encuentran unidas unas tuercas sólidas.

### Estrategia utilizada

Nuestra estrategia consistió en crear un robot en el cual su mecanismo de defensa y ataque sean el mismo, de forma que si nos tratan de atacar, el agresor sufriría un daño colateral como efecto de atacar a nuestro robot.

#### Ofensiva y Defensiva

El eje que está unido a unos tubos PVC en la parte superior giraría por acción de un motor brushless produciendo que el tubo PVC perpendicular gire con mucha velocidad, y debido a que este tubo cuenta de caída con unas tuercas en los extremos de esta forma acercándose a los robots enemigos, los golpearía y no sufriría daño, ya que al girar en torno a la base circular la protegería también, funcionando esta arma como un mecanismo de defensa y ataque.

### Descripción de la aplicación.

![aplicación](/multimedia/app.jpg)

La aplicación hecha en MIT Inventor para controlar nuestro battle bot consta de 7 botones. 2 botones para que se mueva adelante y atrás haciendo girar las ruedas a la misma revolución y para que avancen en el mismo sentido, otros 2 botones para que gire en sí mismo a la derecha o a la izquierda, producto de que ambas ruedas se muevan a las mismas revoluciones, pero con sentido de giro contrario. Otro par de botones tenían la función de encender y apagar el arma a distancia, sin embargo, este sistema no se utilizó al final, debido a que el puente H utilizado no dejaba pasar el suficiente amperaje, quitándole rendimiento a nuestra arma, por lo que esta función se reemplazó por un interruptor manual. Finalmente, el último botón tiene la finalidad de abrir una pantalla en la cual aparecen los posible dispositivos a los que conectarse mediante bluetooth.

### Diagrama funcional

<Diagrama general de funcionamiento. Se sugiere un esquema de sistemas, completo.>

### *BONUS*: Paso a Paso

paso 1: estar motivados para crear una máquina de matar.

paso 2: comprar y/o reciclar materiales, los cuales son: - 50 cm de tubo de PVC de 25 mm - pegamento para PVC (vinilit) - dos codos y una T para el tubo de PVC - 4 tuercas de una pulgada - un pedazo de madero 30x30x3 cm - un motor de helicóptero o alguno similar, con un controlador para este. - 2 motores DC con ... - un puente H L298n - 2 ruedas con tracción - 1 rueda pivote - una gran cantidad de cables con conexiones macho-macho, macho-hembra - 4 pilas 18650 - 2 porta pilas - bluetooth HC06 - Arduino uno - un interruptor con gran capacidad ... - 4 cables gruesos - silicona - cola fría para madera *una cortadora láser - prensa - un eje de metal de al menos 15 cm de altura - cinta aislante - un engranaje o mecanismo para conectar el eje con el motor * decoración a gusto *materiales opcionales

paso 3: lo primero que haremos, será construir la base para nuestro battlebot, para esto cortaremos la madera con nuestros planos, de preferencia con una cortadora láser, pero también puede utilizar otros métodos, los cortes del borde no necesitan ser tan precisos, pero el corte redondo (para el motor) debe ser lo más preciso posible, (el tamaño de este orificio puede variar dependiendo del porte del motor que tengan) ahora tienen que pegar todas las capas, menos la que va más arriba, para esto usaremos la cola fría, y después pondremos la base en la prensa para que queden bien pegadas las capas.

paso 4: conectar el circuito, para probar que funcione todo sin problemas, después de que ya funcione todo bien por separado, colocar el Arduino y el puente H en sus posiciones correctas, y pasar los cables correspondientes por los caminos de la madera (puente H-hacia las ruedas puente H-hacia las pilas, puente H-Arduino)

paso 5: pegar la capa de arriba de la madera.

Paso 6: conectar las ruedas con los motores DC, y pegar la rueda pivote.

Paso 7: ensamblar las demás cosas, conectando las cosas en sus respectivos pines y preocupándose de que los cables no sobresalgan mucho y que los componentes no estén muy cerca del engranaje para que no molesten el funcionamiento de este, colocar el engranaje, el motor y el eje.

Paso 8: ahora armemos el arma, cortar el tubo para tener 2 tubos de 7 cm, 1 tubo de 3 cm, 2 tubos de 14 cm, conectarlos (pegándolos con pegamento para PVC, tengan cuidado, infórmense de cómo pegarlo bien chicos) para formar una M, con los de 7 cm en los extremos y el de 3 cm en el centro. Después hacer un orificio en el centro de la T para atravesar el eje (que quede bastante preciso, para que se pueda afirmar bien)

Paso 9: pegar el eje (según su forma de conectar el motor con el eje) al engranaje, y el eje pegarlo a la base, dejando un libre movimiento para el engranaje (traten de hacerlo lo más simétrico posible, y el eje lo más vertical, para que no sufra otros movimientos. Preocuparse de encajar bien el motor con el engranaje, hacer pruebas para ver que gire sin problemas.

Paso 10: conectar el motor a las pilas, y asegurarse de que todos los componentes estén bien fijos en su posición (no queremos problemas futuros)

Paso 11: colocar las tuercas en los extremos del tubo de 7 cm, asegurándose que queden bien fijas (si es necesario, ponerle algún tipo de pegamento)

Paso 12: colocar su battlebot en el piso, conectarlo con la aplicación, prender el arma y disfrutar de destruir a tus oponentes.

### Problemas y soluciones

Primero tuvimos que descifrar cómo sería la base correcta para crear nuestro robot, ya que teóricamente ya lo teníamos pensado. Lo siguiente fue que ya al obtener unos motores reciclados para nuestra arma, estos al conectarlos a unas pilas comunes no funcionaban, y nos dimos cuenta que necesitaban unas pilas con mayor amperaje, por lo que conseguimos unas pilas adecuadas y sus complementos para conectarlas adecuadamente. Finalmente otro problema que surgió, fue que queríamos poder encender y apagar el arma a distancia, por lo que nos conseguimos un puente H igual al usado para las ruedas traseras para poder asignarlo a un pin y así manejarlo. Sin embargo, este puente no dejaba pasar suficiente corriente por lo que se calentaba mucho, y el arma no funcionaba adecuadamente, por lo que decidimos al final cambiar este sistema por un interruptor manual.

### Proyecciones a futuro

A futuro hemos pensado en mejoras, como cambiar el interruptor manual por uno digital de forma que lo controlemos a distancia. Agregarle más peso y espacio a la base central de nuestro robot para que todo esté mejor acomodado y sea más estable. Y hemos pensado en aumentar el peso o la densidad del arma (hélice), para que sea más resistente al momento de golpear un objeto duro, de manera que resista sin problemas.

También creemos que nuestro battlebot tiene mucho potencial en el mismo ámbito de peleas, ya que no consta de mecanismos muy complicados por lo que se le podrían agregar diferentes funciones para hacerlo más peligroso. También podría ser útil como un robot de limpieza si en los extremos del arma se intercambiaran las tuercas, por escobillas, podría ser bastante eficiente a la hora de barrer o trapear.]


## UPDATE 

Participamos en la Beauchef robotics challenge (BRC) con una versión mejorada la cual cambiaba el PVC por tubos de metal. 


## Licencia
<a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/4.0/88x31.png" /></a><br />Esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/">Licencia Creative Commons Atribución-NoComercial 4.0 Internacional</a>.

