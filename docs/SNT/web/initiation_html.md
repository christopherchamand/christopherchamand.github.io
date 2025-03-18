# Le WEB : Initiation à la programmation en HTML
<!--
* [TD1 - Introduction au langage HTML](./ressources/Act1-introduction-au-html.pdf){:target="_blank"}    
* [TD2 - Introduction aux feuille de style avec CSS](./ressources/Act2-feuille-de-style-CSS.pdf){:target="_blank"}   
* [TD3 - Découverte des tableaux en HTML](./ressources/Act3-HTML-tableau.pdf){:target="_blank"}   

Pour réaliser les activités de ce chapitre, veuillez utiliser ce [**lien**](https://codebetter.lucaswillems.com/){:target="_blank"}  
-->
<!--
??? abstract "Correction"   

    ![Download](../../icones/download-solid.svg){:width=3%}[PoemeMusset.html (Partie1)](./ressources/poemeMusset.html){:target="_blank"}   
    ![Download](../../icones/download-solid.svg){:width=3%}[Image Alfred de Musset](./ressources/ADM.png){:target="_blank"}   
    ![Download](../../icones/download-solid.svg){:width=3%}[style.css](./ressources/style.css){:target="_blank"}   
    <!--[Tableaux](./ressources/tableaux/Act3.zip){:target="_blank"} 




??? danger "EVALUATION"

    Vous devez programmer un site WEB en utilisant les connaissance acquise lors des 3 TDs effectués en classe sur le HTML et CSS.    
    Votre site portera sur le thème de votre choix (Mangas, livres, Films, Musique...etc).
    A la date indiqué, vous devrez présenter votre production à l'oral suivant les critères suivants:
    
    * Durée de la présentation : 5 minutes
        * Présentation: 30 secondes
        * Le thème : 30 secondes 
        * Le code + le site : 3 minutes
        * Conclusion (difficultés rencontrées, remarques...etc ) : 1 minute
-->  


## Introduction

Une page web écrite proprement est en fait constituée de deux fichiers :

* un fichier HTML qui va s'occuper du contenu brut de la page web
* un fichier CSS qui va s'occuper de la décoration de la page web

## Le fichier HTML

1) Dans votre répertoire personnel, **créer** un dossier pour le chapitre que nous abordons: "WEB" et **créez**-y un nouveau dans ce dossier que vous appelerez "Act1_Ma1erePageHTML".

2) **Ouvrez** le logiciel notepad++ et **recopiez** le texte suivant et **sauvegardez**-le dans le répertoire fraichement créé sous le nom "mapage.html" :

!!! note "A recopier"

    #### Le HTML
    Le HTML est un langage informatique utilisé sur l'internet. 

    Il sert à décrire  le contenu d'une page web.

    HTML signifie HyperText Markup Language, c'est-à-dire langage de balisage d'hypertexte.

    Comme nous le verrons, ce langage utilise des balises.

    Les balises permettent de mettre en forme le texte, les liens, les images...


3) **Ouvrez** cette page avec un navigateur internet.

Que constatez-vous :

* Concernant la mise en page ?
* Concernant l'accentuation des caractères ?

!!! warning "Important"
    Pour écrire une page HTML, il ne suffit pas de taper le texte comme on le ferait dans un traitement de texte (l'accentuation et la mise en page ne sont pas respectées). Aussi, Il va falloir "décrire" la page HTML à l'aide de balises pour qu'elle soit interprétée correctement par le navigateur internet.

4) **Ouvrez** le document précédent et **remplacez** le contenu par la structure balisée suivante :

``` html 
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8" />
        <title> introduction au HTML </title>
    </head>
    <body>
        <h1>Le HTML</h1>
        Le HTML est un langage informatique utilisé sur l'internet. <br />
        Il sert à décrire le contenu des pages web. <br />
        HTML signifie HyperText Markup Language, c'est-à-dire langage de balisage d'hypertexte.<br />
        Comme nous le verrons, ce langage utilise des balises. <br />
        Les balises permettent de mettre en forme le texte, les liens, les images... <br />
    </body>
</html>
```

5) **Sauvegarder** le fichier MaPage.html puis **ouvrez**-le à nouveau avec un navigateur internet.