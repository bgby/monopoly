# Projet CPP : Monopoly
## par Briac GRAUBY et Théo DEPALLE (ROB4)

-----------------
1. Compilation

* Tout d'abord il vous faut télécharger la bibliothèque Gtkmm si vous ne l'avez pas
, pour çela ouvrez un terminal et tapez : 
	sudo apt-get install libgtkmm-3.0-dev
	
* Pour compiler le programme il suffit d'ouvrir un terminal dans le dossier
monopoly, puis de lancer la commande :
	make
	
* On fois la compilation terminée, pour lancer le jeu il suffit lancer l'exécutable
avec la commande : 
	./monopoly

-----------------
2. Manuel d'utilisation

Le Robopoly est fortement inspiré du jeu Monopoly.
Il peut se jouer entre 2 et 4 joueur.

* Une fois le jeu lancé, vous tombez sur l'Accueil du Robopoly, il vous faut alors
choisir le nombre de Joueur (2, 3 ou 4), et le nom des joueurs en tapant dans la zone
de texte dédié. Vous pouvez alors cliquer sur le bouton Jouer afin de lancer le jeu.

* La fenêtre de jeu ce lance alors. Elle est divisé en 3: 
	1. Le plateau principale au centre de l'ecran. Vous pourrez y trouver vos pions de 
	couleur, le prix des cases à l'achat, les case qui apartienne à un joueur (un 
	petit rectangle de couleur s'ajoute après l'achat).
	2. Une interface à droite. Elle contient en haut les bouton "Lancer les dés", "Acheter"
	et "Fin de tour". Au millieu elle affiche le joueur courant. Et enfin en bas elle affiche
	les informations de la case visité.
	3. Les information du joueur à droite. Elle contient les informations de chaque joeurs: 
	nom, couleur, argent, nombre de propriéts, et leur case actuelle. 

* Pour jouer un tour il vous faut lancer les dés, cliquer sur acheter si vous tomber
sur une salle ou une case Crous. Et enfin cliquer sur fin de Tour. 

* Le but du jeu est d'être le dernier a avoir de l'argent. Un joueur à perdu des qu'il est
ruiné

-----------------
3. Commentaire sur le programme

-----------------
4. Organisation

Notre Binome à fonctionné avec un Git. 
Briac: 


Théo:
Réalisation du plateau, réalisation des PopUp, réalisation de l'accueil, codage des conditions de fin
du jeu, et quelques codages divers

