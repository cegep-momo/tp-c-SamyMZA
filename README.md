# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`


Question 1 :

L'utilisation du smart pointeur unique_pointeur. Je l'utilise dans mes deux fontions displayALlBookSortByTitle() et displayALlBookSortByAuthor() pour affihcer tout les livres trier selon le titre ou l'auteur. Son utilisation (smart pointer) va permettre de stocker les livres pour apres libérer tout seul la mémoire. 

Dans la fonction je verifie si le vecteur books possede des livres ,ensuite je sort les livres qui va comparer entre deux livres (a et b) pour savoir lequel est plus grand selon selon ce qu'on recherche dans notre cas c'est getTItle() et getAUthor(). ENsuite j'affiche tout les livre du vecteur books avec 

Question 2 :

Pour améliorer la bibliotheuque, j'utiliserai du cloud comme par exemples AWS pour stocker beaucoup de livres car plus facile, flexible et adaptif. Aussi j'ajouterai une UI en React pour etre moderne et faciliter l'acces (Surtout parce que c'est ce que je maitrise le mieux XD)