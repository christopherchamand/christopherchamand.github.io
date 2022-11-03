
def createRepTel():
    reptel = [{"nom": "Boole", "prenom": "Georges", "numero": "0123456789"},
               {"nom": "Lovelace", "prenom": "Ada ", "numero": "0234567891"},
               {"nom": "Von Neumann", "prenom": "John ", "numero": "0345678912"},
               {"nom": "Turing", "prenom": "Alan  ", "numero": "0456789123"}
               ]
    return reptel
    
def deleteRepTel(reptel):
    reptel.clear()

contacts =[]
def addContact(nom=None, prenom=None, numero=None, reptel=contacts):
    if (nom = None and prenom = None and numero = None):
        return "Erreur de saisie!"
    if (nom != None or prenom != None or numero != None):
        reptel.append({nom, prenom, numero})
    
def delContact(nom=None, prenom=None, numero=None, reptel=contacts):
    if (nom = None and prenom = None and numero = None):
        return "Erreur de saisie!"
    if (nom != None or prenom != None or numero != None):
        for 
        reptel.append({nom, prenom, numero})
        