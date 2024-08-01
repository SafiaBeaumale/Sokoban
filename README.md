<h1>Projet Sokoban 🎮</h1>

<div class="image-container">
    <img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgiO1yX913NtJwgCGT7XTlwl8-plUrvrmNXDuGMc74HDA8ceYCVSXdBfU5sx4HItbSZOBQ2xPY9rQ0NlFMgZPmwhquK3Q7C4UCJ_O-LRR-cLOEFyDPTzyN_aobG9xC8bKX7rjAquRoKojs/s1600/01.png" alt="Capture d'écran du jeu Sokoban">
</div>

<h2>Résumé du Projet 📜</h2>
<p>
Le projet Sokoban est une version en ligne de commande du jeu de puzzle classique Sokoban, développé en langage C. Le but du jeu est de déplacer des boîtes vers des emplacements de stockage désignés en les poussant. Le joueur doit réfléchir stratégiquement pour déplacer toutes les boîtes aux bons endroits sans se bloquer.
</p>

<h2>Points Techniques Importants 🛠️</h2>
<ul>
    <li>Utilisation de la bibliothèque <span class="code">ncurses</span> pour l'affichage en terminal.</li>
    <li>Gestion des entrées utilisateur via les touches fléchées pour les déplacements et la barre d'espace pour réinitialiser le jeu.</li>
    <li>Vérification de la condition de victoire lorsque toutes les boîtes sont sur les emplacements de stockage.</li>
    <li>Redimensionnement dynamique du terminal géré avec un message informatif si la fenêtre est trop petite.</li>
</ul>

<h2>Technologies et Bibliothèques Utilisées 💻</h2>
<ul>
    <li><strong>Langage :</strong> C</li>
    <li><strong>Bibliothèques :</strong> ncurses, stdlib, stdio, fcntl, sys/types, sys/stat</li>
</ul>

<h2>Utilisation 🚀</h2>
<p>Pour utiliser ce projet, clonez le dépôt et compilez-le avec le Makefile fourni :</p>
<pre><code>$ git clone https://github.com/votre-compte/sokoban.git
$ cd sokoban
$ make
$ ./my_sokoban path_to_map_file
</code></pre>
<p>Remplacez <span class="code">path_to_map_file</span> par le chemin vers un fichier de carte valide.</p>

<h2>Contribution 🤝</h2>
<p>
Ce projet a été réalisé par [Votre Nom et Prénom], dans le cadre du cursus à Epitech. Le développement a été complété en deux semaines.
</p>
<p>
Les contributions sont les bienvenues ! Si vous souhaitez contribuer, veuillez suivre ces étapes :
</p>
<ul>
    <li>Fork le projet 🍴</li>
    <li>Créez une branche pour votre fonctionnalité :</li>
    <pre><code>git checkout -b feature/AmazingFeature</code></pre>
    <li>Commitez vos changements :</li>
    <pre><code>git commit -m 'Add some AmazingFeature'</code></pre>
    <li>Push vers la branche :</li>
    <pre><code>git push origin feature/AmazingFeature</code></pre>
    <li>Ouvrez une Pull Request 🚀</li>
</ul>


