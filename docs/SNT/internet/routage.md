# Activité écrite : Comprendre le routage en réseau

## Objectifs de la séance :

* Comprendre comment un message circule sur Internet.
* Découvrir le rôle des adresses IP, des routeurs et des tables de routage.
* Introduire la notion de sauts entre les équipements du réseau.

## Comprendre un schéma réseau

<center>![Schéma réseau](./img/schemas_reseau_fleche.png){ width=100%}</center>

!!! question "Exercice 1 : Observez le schéma ci-dessous et répondez aux questions."

    * **Nommer** l'emmeteur et le récepteur du message ?
    * **Lister** les périphériques du schéma ?
    * **Donner** l'"itinéraire" du message ?

!!! question "Exercice 2"

    **Compléter** le texte à trous suivant:

    **✍️ Mots à placer :** _paquets – destinataire – routeurs_

    Lorsque nous envoyons un message sur Internet, il est découpé en ________________________________________________________________________________________. 

    Chaque paquet contient l'adresse IP de l'expéditeur et du ________________________________________________________________________________________. 

    Pour atteindre sa destination, le paquet traverse plusieurs ________________________________________________________________________________________ qui utilisent une table de routage pour choisir le meilleur chemin.

## Cas pratique :

Voici l'adressage de notre réseau:

| Désignation | Adresse IP |  |
| -- | -- | -- |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |
|  |  |  |

Un message doit être envoyé de 192.168.1.10 (Client) vers 8.8.8.8 (Serveur). 

Voici les routes possibles :

| Routeur | Destination connue | Prochain saut |
| -- | -- | -- | 
| R1 | 8.8.8.8 | R3 | 
| R2 | 8.8.8.8 | R4 | 
| R3 | 8.8.8.8 | Serveur | 
| R4 | 8.8.8.8 | Serveur | 

!!! question "Exercice 3"

    * En suivant la table, quel chemin suivra le message ?
    * Que se passe-t-il si R3 tombe en panne ?

!!! abstract "Jeu de rôle"

    ## Jeu du Routage Humain 🖧🎲

    ### Objectif du jeu

    Ce jeu permet de comprendre comment les données circulent sur Internet en simulant le rôle des routeurs et des paquets. Les élèves incarneront des routeurs, des clients et un serveur, et devront faire transiter des messages en respectant une table de routage.
    Les élèves seront des routeurs.
    Les messages devront suivre un chemin défini.
    Ils devront consulter une table de routage comme dans l’exercice.
    
    ### Matériel nécessaire

    ✅ Cartes rôles (Client, Routeur, Serveur)    
    ✅ Cartes Message (symbolisant des paquets de données)   
    ✅ Table de routage (simplifiée, affichée au tableau)    
    ✅ Ficelle ou ruban adhésif (optionnel pour représenter les chemins si l’espace le permet)    
    
    ## Règles du jeu

    1. Mise en place

    * Répartition des rôles :

        * 2 élèves seront les Clients (expéditeurs des messages).
        * 2 élèves seront les Serveurs (récepteurs des messages).
        * Les autres élèves seront des routeurs.
    
    * Disposition dans la salle :

        * Si la salle est grande, les élèves peuvent se déplacer.
        * Si la salle est petite, les élèves restent assis et lèvent la main pour transmettre un paquet au routeur suivant. Une table de routage est affichée au tableau et indique quel routeur doit transmettre à qui.

    2. Déroulement du jeu

    * Envoi d'un message 📩 : 

        * Le client rédige un message court (ex. "Salut !") sur une Carte Message et l’envoie à un routeur proche.

    * Transmission des paquets 🔀: 

        * Chaque routeur doit consulter la table de routage pour savoir à qui transmettre le message.
        * Il passe la carte message au routeur suivant (en marchant s'il y a de l’espace, en levant la main sinon).

    * Arrivée au serveur 🖥️

        * Le serveur reçoit le message et le lit à voix haute pour vérifier s’il est bien arrivé intact.

    3. Cas particuliers

    * Si un routeur est "en panne" (choisi au hasard par l’enseignant) 🛑

        * Les autres routeurs doivent trouver un autre chemin en respectant la table de routage.

    * Si un paquet est perdu (mauvaise transmission) ❌

        *Le client doit renvoyer un nouveau paquet.

