# Crosshair:
Implementacio de un crosshair fixe i senzill (creu o punt). Quan el crosshair passa per sobre un objecte interaccionable i el jugador està a una certa distància, l'objecte
s'ilumina. A més a més si premem clic esquerre (Utilitzant la funcio onLbuttondown del fitxer entornvgiview.cpp) sobre l'objecte el recollirem i podrem fer-lo servir.

# Inventari:
Dos possibles inventaris:
- Desplegable: Premem E i s'obra una finestra amb un inventari gros on hi tindrem tots els objectes
- Fixe: 4 o 5 slots (depenent de la càrrega d' objectes interaccionables) als que podrem accedir tota la estona utilitzant el teclat numèric. Possibilitat d'augmentar el nº
de slots utilitzant la rodeta del ratolí

# Il·luminació:
Llum pobra, ja que una presó és fosca. Possibilitat de làmpara penjant del sostre que sigui la causa de la il·luminació. Possibilitat també de partícules per donar-li
un toc més lugubre i brut. (Partícules preguntar al profe) (fitxer Visualitzacio.cpp per tot el tema de la il·luminació)

# Interacció amb objectes:
Obertura de portes, utilitzant les corbes que hem vist a teoria (exemple del avió)
A l'hora d'interaccionar amb objectes. Dos possibilitats:
- L'objecte apareix directament al inventari sense cap mena d'animació prèvia
- Apareix una pantalla en negre enunciant que hem aconseguit cert objecte
- zoom al objecte (animació pro) i l'obtenim

# Coses útils
- Per cada objecte interaccionable o no interaccionable hem de crear una classe amb els seus respectius .h i .cpp.
- Possibilitat de ensenyar els controls al jugador prement alguna tecla.
- Possibilitat de menu per sortir del joc, baixar volum, text about
- Possibilitat d'interruptor tancat a l'entrar al joc. Quan movem el ratolí és ressalta l'interruptor i s'ha de premer per tal de veure-hi.


[Exemple](https://www.youtube.com/watch?v=IKH6xkf1tJQ&t=43s&ab_channel=DamianoOriti) Aixo ho ha fet el garriga
