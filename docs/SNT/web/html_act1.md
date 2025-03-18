# Le WEB - Activité 1

## Balisage correct d'un fichier HTML

L'intégralité de la page html est balisée par la balise ouvrante <html> et la balise fermante </html>

``` html 
<html>
    ... Toute le page web ...
</html>
```

A l’intérieur de la page html on remarque deux parties :

* L’entête (non affiché à l’écran) : balisé par la balise ouvrante ``` <head> ``` et la balise fermante ``` </head> ```

``` html 
<head> 
    <meta charset="utf-8" /> <!-- Permet d’utiliser les caractères accentués -->
    <title> introduction au HTML </title> <!-- Titre de la page apparaissant dans l’onglet -->
</head>
``` 

* Le corps (affiché à l’écran) : balisé par la balise ouvrante ``` <body> ``` et la balise fermante ``` </body> ```

``` html 
<body>
    ... Corps de la page web ... (affiché à l’écran)
</body>
```

!!! warning "À RETENIR!"
    
    * Les balises sont encadrées par les chevrons < et >
    * Les balises ne sont pas affichées par le navigateur
    * Il y a deux types de balises :
        * Les balises "en paires" qui s’ouvrent et se referment plus loin comme par exemple :
            * ```<title> .... </title>``` qui balisent le titre apparaisant sur l’onglet du navigateur
            * ```<head>...</head>``` qui balisent l’en-tête de la page
            * ```<body>...</body>``` qui balisent la totalité du corps de la page
            * ```<h1>...</h1>``` qui balisent les gros titres
        * Les balises "orphelines" qui s’ouvrent et se ferment aussitôt comme par exemple :
            * ```<meta ... />``` qui définit l’encodage des caractères et permet les caractères accentués
            * ```<br />``` qui permet d’aller à la ligne

Voici donc la structure correcte d’une page HTML.
``` html
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8" />
        <title> montitre </title>
    </head>
    <body>
        ... tout le corps de la page ...
    </body>
</html>
```


!!! question "Exercice 1 :"
    Sur le modèle de l'initation au langage HTML, **écrivez** une page html nommée : _poemeMusset.html_ dans laquelle vous baliserez les quatorze
    vers et le titre du poème "Une promenade au Jardin des Plantes" d’Alfred de Musset.

## Quelques balises à mémoriser pour bien débuter en HTML!

!!! warning "Balisage HTML"
    | Balise | Signication |
    | -- | -- |
    | ```...<br />``` | Retour à la ligne |
    | ```<p>...</p>``` | Création d’un paragraphe | 
    | ```<ol>...</ol>``` | Création d’une liste numérotée | 
    | ```<ul>...</ul>``` | Création d’une liste non numérotée | 
    | ```<li> ...</li>``` | Chaque item d’une liste dans ```<ol>... </ol>``` ou ```<ul>... </ul>``` | 
    | ```<h1> ... </h1>``` | Très gros titre | 
    | ```<h2> ... </h2>``` | Gros titre |  
    | ```<h3> ... </h3>``` | Moyen titre | 
    | ```<img src= "photo.jpg" />``` | Affichage de l’image photo.jpg | 
    | ```<!-- écrire un commentaire personnel -->``` | Commentaire (invisible à l’écran) | 
    | ```<a href="autrepage.html"> Nom du lien </a>``` | Lien externe vers la page autrepage.html | 
    | ```<div id="monancre"></div>``` | Création d’une ancre |  
    | ```<a href="#monancre">``` | Nom du lien </a> Lien interne vers l’ancre "**monancre**" située sur la même page | 

!!! question "Exercice 2 :"
    1. Ouvrir le fichier poemeMusset.html
    2. Baliser le fichier comme suit: 
        1. le nom de l’auteur avec ```<h1>...</h1>```, 
        2. le nom du poème avec ```<h2>...</h2>```, 
        3. chaque fin de vers avec ```<br />``` 
        4. et enfin encadrer chaque strophe avec la balise ```<p> ... </p>```.
    3. Télécharger une photo de Musset faisant partie du domaine public.
    4. Copier cette photo dans le dossier pagesHTML
    5. Afficher la photo en bas de la page.
    6. 
        1. Récupérer une biographie avec au moins cinq dates de la vie de Musset.
        2. A la suite de la page HTML, créer un gros titre nommé : BIOGRAPHIE
        3. Créer alors une liste non numérotée de ces cinq dates.
    7. 
        1. Récupérer une bibliographie avec au moins dix oeuvres de Musset.
        2. A la suite de la page HTML, créer un gros titre nommé : BIBLIOGRAPHIE
        3. A la suite de la page HTML, créer une liste numérotée de ces dix oeuvres.

## APPELER LE PROFESSEUR POUR VERIFICATION !!!