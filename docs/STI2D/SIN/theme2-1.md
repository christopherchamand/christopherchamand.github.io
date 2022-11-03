II. Réseaux informatiques: 1. Principes généraux

On peut considérer 3 cas de communications entre éléments :
Lorsque l’échange a lieu dans une seule direction, on parle de liaison simplex.

Si les éléments peuvent, alternativement, remplir les fonctions d’émetteur et de récepteur, la liaison est dite: half duplex.

Lorsque l’échange peut s’effectuer en même temps dans les deux sens la liaison est appelée bidirectionnelle intégrale ou full duplex. 		

![](https://sti2d.ecolelamache.org/type_liaison2.png)


Quelques contraintes :
Les réseaux doivent d'une part prendre en charge une large gamme d'applications et de services et d'autre part fonctionner sur de nombreux types d'infrastructures physiques. Aujourd’hui, l'expression « architecture réseau » désigne aussi bien les technologies prenant en charge l'infrastructure (le hardware) que les services programmés et les protocoles qui déplacent les messages dans l'infrastructure (le software). Alors qu'Internet, et les réseaux en général, évoluent, nous découvrons que les architectures sous-jacentes doivent prendre en considération quatre caractéristiques de base si elles veulent répondre aux attentes des utilisateurs : tolérance aux pannes, évolutivité, qualité de service et sécurité.

Tolérance aux pannes (exemple avec le réseau Internet):

Comme des millions d'utilisateurs attendent d'Internet qu'il soit constamment disponible, il faut une architecture réseau conçue et élaborée pour tolérer les pannes. Un réseau tolérant aux pannes est un réseau qui limite l'impact des pannes du matériel et des logiciels et qui peut être rétabli rapidement quand des pannes se produisent. De tels réseaux dépendent de liaisons, ou chemins, redondantes entre la source et la destination d'un message. En cas de défaillance d'une liaison (ou chemin), les processus s'assurent que les messages sont instantanément routés sur une autre liaison et ceci de manière totalement transparente pour les utilisateurs aux deux extrémités. Aussi bien les infrastructures physiques que les processus logiciels qui dirigent les messages sur le réseau sont conçus pour prendre en charge cette redondance. Il s'agit d'une caractéristique essentielle des réseaux actuels.

![](https://sti2d.ecolelamache.org/tolerance.png)

Ainsi le réseau internet ressemble à une immense pieuvre avec de multiples liaisons possibles entre 2 points. Donc, en cas de panne, l’information circule par un autre point (ou nœud) du réseau. Il existe malheureusement quelques points « critiques » où la redondance est faible. Il s’agit notamment des liaisons entre continents. Par exemple il y a une quantité très limité de fibres optiques qui relient l’Europe à l’Amérique. En cas de panne sur l’une d’elle, le trafic s’en trouve forcément impacté.

Dans les faits internet est constitué d'un maillage de réseaux publics et privés. Ainsi l'autorité administrative sur le réseau est partagée et distribuée entre tous les opérateurs parties prenantes; les décisions de ces derniers relèvent de contrats passés entre eux et de l'application de l'ensemble des normes et protocoles de transport et d'adressage dont la gestion est à la charge d'organisations internationales spécialisées.

![](https://sti2d.ecolelamache.org/structure_internet.gif)

On notera que chaque ordinateur directement connecté à internet possède au moins une adresse IP propre. Cependant, les utilisateurs ne veulent pas travailler avec des adresses numériques du genre 194.153.205.26 mais avec un nom de domaine ou des adresses plus explicites du type [www.lamache.org].
Ainsi, il est possible d'associer des noms en langage courant aux adresses numériques grâce à un système appelé DNS (Domain Name System). On appelle résolution de noms de domaines (ou résolution d'adresses) la corrélation entre les adresses IP et le nom de domaine associé.

La société qui gère ces DNS est l’Internet Corporation for Assigned Names and Numbers (ICANN). Il s’agit d’une autorité de régulation de l'Internet. C'est une société de droit californien à but non lucratif ayant pour principales missions d'administrer les ressources numériques d'Internet, telles que l'adressage IP et les noms de domaines de premier niveau (.org, .com, .fr, …). Le reste de la gestion des DNS est réalisée par différents éléments du réseau.

![](https://sti2d.ecolelamache.org/Internet__structure_du_reseau.jpg)

Évolutivité :
Un réseau évolutif est en mesure de s'étendre rapidement afin de prendre en charge de nouveaux utilisateurs et applications sans que cela n'affecte les performances du service fourni aux utilisateurs existants.

![](https://sti2d.ecolelamache.org/evolutivite.png)

Qualité de services

Quand les réseaux ne servaient qu’à des échanges informatiques (données, courriers, …), un service comportant des interruptions était acceptable. Aujourd’hui  avec le développement des transmissions audio et vidéo ce n’est plus possible. Ces transmissions exigent, en effet, un niveau de qualité constant (une grande bande passante) et un service ininterrompu.
C’est pour cela que les périphériques intermédiaires qui assurent la qualité de service gèrent des files d'attentes selon le niveau de priorité des messages. Ainsi, les messages d'un service de voix sur IP seront prioritaires devant ceux d'un service de transaction financière, eux-mêmes prioritaires devant ceux du service web.
![](https://sti2d.ecolelamache.org/qualite.png)

Sécurité

L'infrastructure réseau, les services et les données contenues par un réseau relié à des ordinateurs sont des actifs personnels et professionnels essentiels. Toute compromission de l'intégrité de ces actifs pourrait avoir de graves conséquences professionnelles et financières.

En matière de sécurité des réseaux, deux points doivent être pris en considération pour éviter des conséquences graves : la sécurité de l'infrastructure réseau et la sécurité du contenu.

Sécuriser l'infrastructure réseau implique de sécuriser matériellement les périphériques qui assurent la connectivité du réseau et d'empêcher tout accès non autorisé au logiciel de gestion qu'ils hébergent.

Sécuriser le contenu consiste à protéger les informations contenues dans les paquets transmis sur le réseau ainsi que les informations stockées sur des périphériques reliés au réseau par exemple en les cryptant.
![](https://sti2d.ecolelamache.org/securite.png)