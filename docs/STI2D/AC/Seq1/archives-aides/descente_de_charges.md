# LES DESCENTES DE CHARGES

Dans le cours précédente nous avons vu **comment vérifier la solidité d'un poteau soumis à de la compression par une charge F ?** 

Toutefois, nous n'avons pas vu **comment déterminer cette charge**.

# PROBLEMATIQUE
**Comment déterminer la charge en compression sur un poteau ?**   

## DIFFÉRENCE EN MASSE ET FORCE
Pour comprendre la différence entre une masse en **kg** et une force en **Newton** prenons l'exemple suivant :   
![Tour de pise](images/ddc_pise.png){: width=400 }

* d'un côté nous construisons la tour de Pise sur Terre. Celle-ci est une masse de 15000 tonnes soit 15 millions de kilogrammes.   
* nous la construisons également sur la Lune. Elle possède également une masse de 15000 tonnes.   


Toutefois, la force exercée sur le sol par la tour sera très différente entre les **deux astres**.   
En effet, _**la force dû au poids se calcule**_ grâce à la relation:    

| Relation masse - force |
| :-: |
| $P = m \times g$ |    

avec:   

* M la masse en **kg**   
* g l'accélération de pesanteur exprimé en **m/s$^{2}$**   

Voici donc comment sera calculé le poids sur chacun des astres:

|  | Terre | Lune |
| -- | -- | -- |
| m | 15000 t | 15000 t |
| g | 9,807 m/s$^{2}$ | 1,62 m/s$^{2}$ |
| P | 147 MN | 24  MN |

La force exercée sur le sol de la Lune est 6 fois moins élevée que celle de la Terre.   
La tour de Pise penche de cette manière car le sol n'est pas assez résistant par rapport à la charge imposée par la tour.      
On peut donc imaginer que sur la lune, la tour de Pise serait droite.   


Maintenant, que nous avons vu la différence entre la charge qui représente une force et la masse d'un objet, nous allons voir comment les charges se répartissent dans une structure.   

## EXEMPLE DU TABOURET
Prenons un tabouret sur quatre pieds.   
![Tour de pise](images/ddc_tabouret1.png){: width=400 }


Voici ces caractéristiques:

* masse = 10 kg en prenant 
* g = 10 m/s$^{2}$ (arrondi) 

Appliquons maintenant la formule vu précédemment: 

| Formule |
| :-: |
| $P = m \times g$ |  

| | Détails de calcul | 
| -- | -- | 
| m | 10 kg |
| g | 10 m/s$^{2}$ | 
| P | 100 N | 

On trouve donc que son _**poids propre**_ est de **100 Newtons**.   

![Tour de pise](images/ddc_tabouret2.png){: width=400 }

Comme le tabouret est sur 4 pieds, chaque pied reprend une partie de la charge.  
Donc il faut la diviser par 4:   
$\frac{100}{4}$ = 25 N / pied.   

   
Le _**poids propre**_ est une charge **permanente**, c'est-à-dire que peu importe les conditions, les pieds supporteront toujours à minima cette charge.   
Les charges permanentes sont notées **G** (en majuscule), on a donc **G = 25 N**.   
Maintenant il faut prendre en compte le poids d'une
personne assise dessus.   
Les charges induites par le poids des personnes sur
une structure sont appelées charge d'exploitation.   
Il s'agit non pas de charge permanente mais
de charges variable on les note
Q (en majuscule). Pour une personne de 80 kg, on a 800 Newtons de charges exploitation soit 200 Newtons sur chaque pied on
écrit Q = 200 Newtons.

Maintenant, pour déterminer la charge totale à prendre en
compte pour vérifier la résistance d'un pied il ne suffit pas simplement d'additionner GQ il faut prendre en compte des coefficients de sécurité.  

Dans le domaine du bâtiment ces coefficients
sont donnés par ce que l'on appelle les
Eurocodes il s'agit de normes
européennes pour le dimensionnement les
structures il existe 10 euros codes qui
couvrent notamment le dimensionnement
des structures en bois en acier ou en
béton armé les calculs sont relativement
compliqués s'étudier à un niveau
ingénieur en structure dans notre cas on
retiendra simplement la formule suivante
F
= 1,35 x g plus 1,5 fois Q on appelle
cela une combinaison de charge car on
combine les charges permanentes et
variables avec des coefficients le
calcul donne 1,35 fois 25 n + 1,5 x 200
Newtons cela donne F = environ 334 n il
s'agissait ici d'un cas simple avec une
masse répartie de manière symétrique sur
4 pieds toutefois les structures sont
généralement plus complexes nous allons
prendre l'exemple suivant pour voir
comment se répartissent les chats la
structure est constituée d'une dalle en
béton armé de 25 cm d'épaisseur de 2
poutres et de 4 poteaux l'ensemble de la
structure est en béton armée les poteaux
sont assis sur des fondations isolées
l'objectif de l'étude et de déterminer
le poids en pied de poteaux car il
s'agit de la zone subissant le plus de
contraintes nous allons étudier le
poteau numéro 1 les charges exploitation
sont de 150 kg par mètre carré il s'agit
du poids des personnes sur le plancher à
prendre en compte un poteau va reprendre
les charges permanentes du à son poids
propre au poids d'une moitié de poutre
et au poids d'une partie de la dalle
premièrement calculons le poids propre
du poteau il s'agit d'un poteau en béton
armé le poids volumique du béton est de
25 kg par mètre cube le volume du poteau
en mètre cube et de 2,60 x 0,20 x 0,20
soit V = 0,104 m³ ce volume de béton
pèse 0,104 x 25 kg Newtons par mètre
cube ce qui donne 2,6 kg Newtons soit à
peu près 26 tonnes deuxièmement
calculons le poids propre de la demi
poutre elle possède une retombée de 35
cm et une largeur de 20 cm égal à celle
du poteau sa longueur est de 3 mètres le
volume de la poutre est donc V = 0,35 x
0,2 x 3
/ 2 car il s'agit de la demi-pots ce qui
donne 0,5 m3 pour calculer le poids on
multiplie 0,5 par 25 km cube et on
trouve 2,63 kg enfin il est nécessaire
de déterminer la surface de dalle
reprise par le poteau en effet celui-ci
ne reprend pas l'intégralité de la dalle
il va notamment reprendre la moitié de
la partie en porte-à-faux puisque cette
partie repose sur deux poteaux il
reprend ensuite le quart de la dalle
intérieur car celle-ci repose sur quatre
poteaux la surface en porte-à-faux et
donc de 1,20 x 3 le tout divisé par 2
égal 1,8 m² la surface intérieure est de
3 x 4,80
/ 4 car 4 poteaux la soutiennent cela
donne 3,6 m² au total le poteau reprend
5,4 m2 de dalle on appelle cette surface
la en phase de reprise le volume repris
de la dalle et de 5,4 m² x 0,25 mètres
d'épaisseur soit 1,35 m3 cela représente
un poids de 1,35 x 25 kg par mètre cube
égale
33,75 kg en termes de bois propre le
poteau reprend un total g
= 2,60 + 2,63 + 33,75
= 39 km maintenant déterminons les
charges variables Q on sait que le
poteau reprend 5,4 m² de dalle il faut
donc prendre en compte uniquement les
personnes qui sont sur cette partie là
les charges exploitations sont de 150 kg
par mètre carré soit 1,5 kg Newton par
mètre carré on en déduit que Q = 5,4 m2
la surface de reprise fois 1,5 kg par
mètre carré les charges exploitations
égales 8,1 kg pour finir on calcule F
= 1,35 x g + 1,5 fois Q = 65 kg
finalement nous avons vu un certain
nombre de choses la première et la
différence entre les charges permanentes
notées g et les charges variables notées
Q et nous avons eu notamment parmi les
charges variables les charges de
fondation il en existe d'autres comme
les charges climatiques nous avions
ensuite vu la combinaison de charge
donnée par les eurodes et enfin la
répartition des charges dans une
structure
