# Partie N°2 : exercices sur prototypes à base d’Arduino

Révisions (et compléments) sur la programmation en C (structures algorithmiques, variables, …) et sur l’environnement Arduino

Nous allons travailler à  partir de programmes Arduino comme ceux que l'on a vu en 1ère STI 2D (I2D)

 



Exercice 1 : allumage d'une led

soit le montage suivant :

![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/arduino_exo1.png)

Le programme proposé :

    // définition des variables
    int led_pin = ……. ; // …………….
    int i=1 ;
    int temps ;


    void setup()
    {
    pinMode(led_pin, OUTPUT); // Pin 13 has an LED connected on Arduino boards:
    temps = 1000;
    }

    void loop()
    {
    digitalWrite(led_pin, HIGH); // ……………..
    delay(temps); // ……………...
    digitalWrite(led_pin, LOW); // …………………...
    delay(temps); // ………………...
    temps = temps + (i*500) ;
    i = i + 1 ;
    if (temps > 50000)
    {
        temps = 1000 ;
        i=1;
    }
    }

Données techniques :
digitalWrite()            Write a HIGH or a LOW value to a digital pin.
If the pin has been configured as an OUTPUT with pinMode(), its voltage will be set to the corresponding value: 5V for HIGH, 0V (ground) for LOW.

PinMode()     Configures the specified pin to behave either as an input or an output

 
Petit rappel et complément sur le codage binaire des entiers


1. Représentation d'un entier naturel :

Un entier naturel est un entier positif ou nul. Pour coder des nombres entiers naturels compris entre 0 et 15, il nous suffira de 4 bits (un octet) car 24=16. D'une manière générale un codage sur n bits pourra permettre de représenter des nombres entiers naturels compris entre 0 et 2n-1.

2. Représentation d'un entier relatif

Un entier relatif est un entier pouvant être négatif. Il faut donc coder le nombre de telle façon que l'on puisse savoir s'il s'agit d'un nombre positif ou d'un nombre négatif, et il faut de plus que les règles d'addition soient conservées (ex : 5 + (-5) = 0). L'astuce consiste à utiliser un codage que l'on appelle complément à deux (on complémente et on ajoute 1).
Un entier relatif positif ou nul sera représenté en binaire comme un entier naturel, à la seule différence que le bit de poids fort (le bit situé le plus à gauche) représente le signe. Il faut donc s'assurer pour un entier positif ou nul qu'il est à zéro (0 correspond à un signe positif, 1 à un signe négatif). Ainsi si on code un entier naturel sur 4 bits, le nombre le plus grand sera 0111 (c'est-à-dire 7 en base décimale). On pourra coder de -8 à +7 (16 valeurs)

Exemple : on désire coder la valeur -5 sur 4 bits. Pour cela il suffit
• d'écrire 5 en binaire : 0101
• de complémenter à 1 : 1010
• d'ajouter 1 : 1011
• la représentation binaire de -5 sur 4 bits est 1011

Et ça fonctionne aussi dans l’autre sens : On cherche le chiffre représenté par 1010 ?:
• le 1 de poids fort signifie que l’on a un chiffre négatif : 1010
• on complémente à 1 : 101
• on ajoute 1 : 110
• 1010 représente donc - 6

Questions:
1. Rajoutez les commentaires manquants (pointillés) dans le programme
2. Quel est le rôle de la fonction pinMode ?
3. Expliquez, en détail, ce que va faire le programme (n'hésitez pas à faire un tableau mettant en évidence le contenu des variables)

Exemple de tableau :

N° de la boucle
	

Variable i
	

Calcul de i*500
	

Variable temps

départ
	

1
	

	

1000

Fin de la boucle 1
	

1
	

500
	

1500

2
	

2
	

1000
	

2500

…..
	

….
	

…..
	

…..

 

4. Faire l'algorithme (sous forme d'algorigrammes) du programme
5. Quand on essaie le programme, lors du 11ème passage dans la boucle Loop, le résultat obtenu est alors -31536. Expliquez en détail ce qui s’est passé (n’hésitez pas à poser l’addition binaire de cette boucle)

  

## Exercice 2 : révision des différents types de variables

Données techniques :
Some arduino data Type :

Arduino data type
	

Value assigned
	

Values ranges
	

Description or example

boolean
	

8 bit
	

True or False (1/0)
	

A data type that takes up 1 byte of memory that stores a character value. Character literals are written in single quotes, like this: 'A'

ex : boolean test = false;

byte
	

8 bit
	

0 to 255
	

unsigned number

char
	

8 bit
	

-127 to 128
	

A data type that takes up 1 byte of memory that stores a character value. Character literals are written in single quotes, like this: 'A'

ex : char myChar = 'A';

char myChar = 65; // both are equivalent

word
	

16 bit
	

0 to 65535
	

unsigned number

int
	

16 bit
	

-32768 to 32767
	

Integers numbers

Unsigned int
	

16 bit
	

0 to 65535
	

unsigned integers

long
	

32 bit
	

-2147483648 to 2147483647
	

Integers numbers

float
	

32 bit
	

-3,428235.1038 to 3,4028235.1038
	

floating-point numbers

digitalRead()            Reads the value from a specified digital pin, either HIGH or LOW.
the pin must have been configured as an INPUT with pinMode() in the Setup()


Soit le montage suivant :

bouton poussoir
résistance de 5kΩ (pull up)
![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/arduino_bp.jpg)


soit le programme suivant :

    //**** début du programme *********//

    #define boutonPin 2

    // définition des variables
    int etat_bouton = 0;     // variable de l'état du bouton poussoir
    int resultat1 ;
    int valeur = 21 ;
    float resultat2 ;
    float valeur_f=21 ;

    void setup() {
    pinMode(boutonPin, INPUT); // définition de l'entrée du bouton (pin 2)
    }

    void loop(){
    
    etat_bouton = digitalRead(boutonPin);  // ………………………….
    if (etat_bouton == HIGH)  // ……………………….
        {     
            resultat1 = (valeur+11)/3 ;
        }
    else    // ………………………………..
        {
            resultat2 = (valeur_f+11)/3 ;
        }
    }
    //**** fin du programme *********//

1. Rajoutez les commentaires manquants (pointillés) dans le programme
2. Expliquez, en détail, ce que va faire le programme
3. Que faut résultat1 ?
4. Que vaut résultat2 ?
5. Quelles sont les valeurs que peut avoir la variable «  etat_bouton » ?
6. Trouver le type le plus approprié pour la variable «  etat_bouton »

On a maintenant:
    unsigned int toto ;  // déclaration de la variable toto
    toto=65535 ;
    toto=toto+1 ;
7. Quelle est la valeur finale de la variable « toto » ?


On a maintenant :
    int toto ;    // déclaration de la variable toto
    toto=1 ;
    toto=toto-2 ;

8. Quelle est la valeur finale de la variable « toto » ?

On a maintenant :
    unsigned int toto ;    // déclaration de la variable toto
    toto=1 ;
    toto=toto-2 ;

9. Quelle est la valeur finale de la variable « toto » ?



## Exercice 3 :  choix des broches (pin) d'un arduino Uno

rappel : voici le rôle des broches (pin) d'une carte Arduino Uno :
![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/arduino_uno_pinout.jpg)


rappel N°2: le terme « digital » caractérise un signal binaire, c'est à dire un signal qui vaut 0 ou 1 (en général 0V ou 5V sur Arduino). On peut aussi dire Tout Ou Rien (TOR).

Notre réalisation contient :

    une led (et sa résistance) commandée par la carte Arduino
    un bouton poussoir (et sa résistance de pull up)
    un capteur de distance SEN0042
    un capteur de température TMP36
    un accéléromètre ADXL345

  

## Documentations techniques :

 
TMP36 :  ![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/temperature_tmp36pinout.gif)
These sensors use a solid-state technique to determine the temperature. That is to say, they don't use mercury (like old thermometers), bimetalic strips (like in some home thermometers or stoves), nor do they use thermistors (temperature sensitive resistors). Instead, they use the fact as temperature increases, the voltage across a diode increases at a known rate. (Technically, this is actually the voltage drop between the base and emitter - the Vbe - of a transistor.) By precisely amplifying the voltage change, it is easy to generate an analog signal that is directly proportional to temperature (0-5V). There have been some improvements on the technique but, essentially that is how temperature is measured. To convert the voltage to temperature, simply use the formula: Temp in °C =[(Vout in mV)- 500]/10

 

Triple Axis Accelerometer Breakout - ADXL345  ![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/accelerometre.jpg)
This new version adds 2 standoff holes as well as an extra decoupling capacitor. The ADXL345 is a small, thin, low power, 3-axis MEMS accelerometer with high resolution (13-bit) measurement at up to +-16 g. Digital output data is formatted as 16-bit twos complement and is accessible through I2C digital interface (SDA, SCL).

The ADXL345 is well suited to measures the static acceleration of gravity in tilt-sensing applications, as well as dynamic acceleration resulting from motion or shock. Its high resolution (4 mg/LSB) enables measurement of inclination changes less than 1.0 degrees;

Simplest wiring : VCC, GND, SCL and SDA

 
SEN0042
This is an edge detection sensor from DFRobot. It will help your robot detect the edge of a precipice, preventing it from falling off a table or down the stairs to it's certain demise! This IR distance sensor is connected to an arduino digital pin.
![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/infrared.jpg)
Specification:

    Supply Voltage: 2.7~6.2v
    Current: < 10mA
    Range distance: 2~10cm (Low), <2cm or >10cm (High)
    Interface:1 digital pin
    Signal Voltage: Vcc-0.6V(High), 0.6V(Low)



1. La led doit-elle être reliée à une sortie ou à une entrée arduino ? Justifiez votre réponse.
2. Cette entrée ou sortie doit-elle être analogique ou TOR (digital en anglais) ? Justifiez votre réponse.
3. Le bouton poussoir doit-il être reliée à une sortie ou à une entrée arduino ? Justifiez votre réponse.
4. Cette entrée ou sortie doit-elle être analogique ou TOR (digital en anglais) ? Justifiez votre réponse.
5. Quelle est le double rôle des pins 0 à 13 ? Où et comment cela est-il paramétré dans un programme Arduino ? Donner un exemple pour les 2 cas.
6. Proposez un câblage pour notre montage :
![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/exo_pin_vers2020_bb.png)
   

## Exercice 4 : allumage de plusieurs leds (révision de la boucle For et découverte de la notion d'array)

soit le programme suivant :

    // définition des variables
    const int nombre_Pins = 3;  // ……………………………..
    const int ledPin [] =  {11,12,13};   // the LED pins

    int interval = 100;    //  ……………….

    void setup()
    {
    for(int i=0 ; i<nombre_Pins ; i++)
    {
        pinMode(ledPin[i], OUTPUT);
    }
    }

    void loop()
    {
    for(int i=0 ; i<nombre_Pins ; i++)
    {
        digitalWrite(ledPin[i],HIGH);
        delay(interval);
        digitalWrite(ledPin[i],LOW);
        delay(interval);
    }
    }

**Données techniques :** for statements
The for statement is used to repeat a block of statements enclosed in curly braces. An increment counter is usually used to increment and terminate the loop. The for statement is useful for any repetitive operation, and is often used in combination with arrays to operate on collections of data/pins.![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/boucle_for.png)
 
There are three parts to the for loop header:
 
    for (initialization; condition; increment)
    {
    //statement(s);
    } 	


-|-|-
- |:-: | -:
array | An array is a collection of variables that are accessed with an index number | Use :
|Examples to declare an array :|int myPins[] = {2, 4, 8, 3, 6}; 
|int myInts[6];|if you use myPins[2], you go to the third “box”, that is to say 8
|int myPins[] = {2, 4, 8, 3, 6};|if you use myPins[5], you go to the fifth “box”, that is to say 6
|int mySensVals[6] = {2, 4, -8, 3, 2};|The index number can be a value (as above 2 or 5) or a variable. For example:
|char message[6] = "hello"; |i=2;
||myPins[i];
||The result is 4


1. Analysez le programme précédent et rajoutez les connexions sur le schéma suivant :
![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/arduino_exo2.png)
 
La variable ledPin est un tableau (array) de variables (une sorte de variable en 2 dimensions!)
2. Combien de données (cases mémoires) contient la variable ledPin ?
3. Complétez le tableau suivant représentant la variable ledPin[] :


|                      | i = 0 | i = 1 | i = 2|
|----------------------|-------|-------|------|
| Contenu de ledPin[i] |       |       |      |
	

4. Expliquez, en détail, ce que va faire le programme et comment il le fait.
5. Quels sont le ou les avantages à utiliser un tableau de variables à la place de variables simples notamment dans le programme précédent?


Exercice 5 : allumage de plusieurs leds et gestion d'une entrée analogique

Soit le programme Arduino suivant :

    // définition des variables
    const int nombre_leds = 5;  // ……………………………..
    const int ledPin [ ] =  {9,10,11,12,13};   // …………………………...
    int mon_entree = A0 ; // ………………………...

    void setup()
    {
    // déclaration des pins arduino en sorties (leds)
    ……………………………
    ………………………………
    ………………………………
    ………………………………
    }

    void loop()
    {
    if(analogRead(mon_entree) == 0) // ………………………...
    { digitalWrite(ledPin [0], LOW);
    digitalWrite(ledPin [1], LOW);
    digitalWrite(ledPin [2], LOW);
    digitalWrite(ledPin [3], LOW);
    digitalWrite(ledPin [4], LOW);
    }
    
    if(analogRead(mon_entree) >= 1 && analogRead(mon_entree) < 200) //………………………...
    { digitalWrite(ledPin [0], HIGH);
    digitalWrite(ledPin [1], LOW);
    digitalWrite(ledPin [2], LOW);
    digitalWrite(ledPin [3], LOW);
    digitalWrite(ledPin [4], LOW);
    }

    if(analogRead(mon_entree) >= 200 && analogRead(mon_entree) < 400 ) //………………………...
    { digitalWrite(ledPin [0], HIGH);
    digitalWrite(ledPin [1], HIGH);
    digitalWrite(ledPin [2], LOW);
    digitalWrite(ledPin [3], LOW);
    digitalWrite(ledPin [4], LOW);
    }

    if(analogRead(mon_entree) >= 400 && analogRead(mon_entree) < 800) //………………………...
    { digitalWrite(ledPin [0], HIGH);
    digitalWrite(ledPin [1], HIGH);
    digitalWrite(ledPin [2], HIGH);
    digitalWrite(ledPin [3], LOW);
    digitalWrite(ledPin [4], LOW);
    }
    
    if(analogRead(mon_entree) >= 800 && analogRead(mon_entree) < 1000) //………………………...
    { digitalWrite(ledPin [0], HIGH);
    digitalWrite(ledPin [1], HIGH);
    digitalWrite(ledPin [2], HIGH);
    digitalWrite(ledPin [3], HIGH);
    digitalWrite(ledPin [4], LOW);
    }

    if(analogRead(mon_entree) >= 1000) //………………………...
    { digitalWrite(ledPin [0], HIGH);
    digitalWrite(ledPin [1], HIGH);
    digitalWrite(ledPin [2], HIGH);
    digitalWrite(ledPin [3], HIGH);
    digitalWrite(ledPin [4], HIGH);
    }
    }


Données techniques :
analogRead()
Reads the value from the specified analog pin. The Arduino board contains a 6 channel (8 channels on the Mini and Nano, 16 on the Mega), 10-bit analog to digital converter. This means that it will map input voltages between 0 and 5 volts into integer values between 0 and 1023 (10 bits). This yields a resolution between readings of: 5 volts / 1024 units or, .0049 volts (4.9 mV) per unit. The input range and resolution can be changed using analogReference().
Syntax  :     analogRead(pin)
Returns  :    int (0 to 1023)


1. Analysez le programme précédent et rajoutez les connexions sur le schéma suivant :

![](https://web.archive.org/web/20211025044924im_/https%3A//sti2d.ecolelamache.org/arduino_exo3.png)

2. Rajoutez les commentaires manquants dans le programme
3. Dans la partie 'Void setup' et à l'aide d'une boucle 'For', faites la déclaration des sorties Arduino reliées aux leds
4. Faire l'algorithme (sous forme d'algorigrammes) du programme

5. Retrouver à quelles valeurs de tensions correspondent les valeurs 200, 400, 800 et 1000 que l'on trouve dans le programme
6. Proposez une amélioration (écriture plus concise et plus claire) de la partie 'Void Loop' à l'aide de boucles « for » et d'une variable (appelée « potentiom ») contenant la valeur du potentiomètre (la fonction « analogRead » ne doit apparaître plus qu'une seule fois dans le programme).

7. A l’aide de la documentation technique sur l’instruction analogRead() et de nos connaissances nous allons chercher les caractéristiques du CAN intégré à la carte Arduino:
    1. Que signifie l’acronyme CAN ?
    2. Quelle est la fonction de ce CNA ?
    3. Sur combien de bits ce CNA fonctionne-t-il ?
    4. Quelle est sa résolution (précision : 3 chiffres significatifs)?
    5. La variable « mesure_volt » est la variable qui va contenir la valeur en volts de notre entrée analogique. Modifiez le programme pour intégrer cette variable et lui affecter sa valeur