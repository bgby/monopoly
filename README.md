# Projet CPP : Monopoly
## par Briac GRAUBY et Théo DEPALLE (ROB4)

-----------------
1. Compilation

* Tout d'abord il vous faut télécharger la bibliothèque Gtkmm si vous ne l'avez pas
, pour cela ouvrez un terminal et tapez : 
	sudo apt-get install libgtkmm-3.0-dev
	
* Pour compiler le programme il suffit d'ouvrir un terminal dans le dossier
monopoly, puis de lancer la commande :
	make
	
* Une fois la compilation terminée, pour lancer le jeu il suffit de lancer l'exécutable
avec la commande : 
	./monopoly

-----------------
2. Manuel d'utilisation

Le Robopoly est fortement inspiré du jeu Monopoly.
Il peut se jouer entre 2 et 4 joueur.

* Une fois le jeu lancé, vous tombez sur l'Accueil du Robopoly, il vous faut alors
choisir le nombre de joueurs (2, 3 ou 4), et le nom des joueurs en tapant dans la zone
de texte dédiée. Vous pouvez alors cliquer sur le bouton Jouer afin de lancer le jeu.

* La fenêtre de jeu se lance. Elle est divisé en 3: 
	1. Le plateau principale au centre de l'ecran. Vous pourrez y trouver vos pions de 
	couleur, le prix des cases à l'achat, les case qui apartiennent à un joueur (un 
	petit carré de couleur s'ajoute après l'achat).
	2. Une interface à gauche. Elle contient en haut les bouton "Lancer les dés", "Acheter"
	et "Fin de tour". Au milieu, elle affiche le joueur courant. Et enfin en bas, elle affiche
	les informations de la case visitée.
	3. Les information du joueur à droite. Elle contient les informations de chaque joueur: 
	nom, couleur, argent, nombre de propriétés, et leur position actuelle. 

* Pour jouer un tour il vous faut lancer les dés, cliquer sur acheter si vous tomber
sur une salle ou une case Crous. Et enfin cliquer sur fin de Tour. 

* Le but du jeu est d'être le dernier à avoir de l'argent. Un joueur a perdu dès qu'il est
ruiné.

-----------------
3. Commentaire sur le programme
* Le programme est fonctionnel. Le seul bug détecté est une disparition temporaire jusqu'au prochain tour du pion du joueur lorsque
celui-ci tombe sur une case Chance qui le renvoie à la case Départ. La source du bug est connue mais sa résolution entrainerait des grandes modifications de la structure du code.
* Cairo a été difficile à utiliser mais nous avons finalement fini par nous en sortir. Le fait de dériver des classes de Gtk et les méthodes d'utilisation de Cairo (pour le dessin sur le plateau) nous ont forcé à modifier la structure du code et à le rendre un peu moins "objet" que ce qui était prévu.
* Les avantages de notre structure nous permet facilement d'intégrer une IA en dérivant de Joueur et en ajoutant juste en attribut des pointeurs sur les boutons de l'interface avec lesquels il est aisé de générer des clics virtuels.
* Le code est aussi conçu de façon à avoir un nombre de joueurs facilement variable.

-----------------
4. Ce qui est prévu pour la suite
* Rajouter la possibilité d'achat de "maisons" comme il est possible de le faire sur le Monopoly afin de faire augmenter le loyer
* Un joueur qui possède toutes les cases CROUS ou toutes les salles d'une même rangée gagne immédiatement la partie
* La possibilité d'hypothéquer une salle
* La possibilité d'exproprier un joueur adverse d'une salle pour une somme bien supérieure

-----------------
5. Organisation

Notre Binome a fonctionné avec un Git commun.

Briac: 
	Réalisation de l'interface de jeu, des signaux et des différentes étapes de tour de jeu (lancer des dés, Achat, fin de tour)
	Réalisation de la partie animation du plateau avec les pions et l'affichage des propriétés

Théo:
Réalisation du plateau, réalisation des PopUp, réalisation de l'accueil, codage des conditions de fin
du jeu, et quelques codages divers

