# push_swap

`push_swap` est un projet de l'école 42 qui consiste à trier une pile de nombres en utilisant un nombre minimal d'opérations. Le projet comprend une série d'opérations à appliquer à une pile (A) et une autre pile (B), avec l'objectif de trier la pile A dans l'ordre croissant. Il inclut également un bonus : le **checker**, un programme qui vérifie si la pile A est triée après avoir effectué les opérations.

## Fonctionnalités

- **push_swap** : un programme qui trie les éléments de la pile A en utilisant un ensemble d'opérations autorisées.
- **Checker** : un bonus qui permet de valider que la pile A est correctement triée après l'exécution des opérations.
  
### Opérations autorisées

Les seules opérations autorisées sont :

- `sa`: Échange les deux premiers éléments de la pile A.
- `sb`: Échange les deux premiers éléments de la pile B.
- `pa`: Pousse le premier élément de la pile B vers la pile A.
- `pb`: Pousse le premier élément de la pile A vers la pile B.
- `ra`: Décale tous les éléments de la pile A vers le bas, le premier élément devient le dernier.
- `rb`: Décale tous les éléments de la pile B vers le bas, le premier élément devient le dernier.
- `rra`: Décale tous les éléments de la pile A vers le haut, le dernier élément devient le premier.
- `rrb`: Décale tous les éléments de la pile B vers le haut, le dernier élément devient le premier.
- `rr`: Applique `ra` et `rb` simultanément.
- `rrr`: Applique `rra` et `rrb` simultanément.

## Installation

### Prérequis

- Le projet doit être compilé avec `gcc`.
- Assurez-vous que `Make` est installé sur votre machine.

### Compilation

Clonez ce repository, puis compilez avec la commande suivante :

```bash
git clone https://github.com/Herimamy12/push_swap.git
cd push_swap
make
```

Compilez le bonus avec la commande :
```bash
make bonus
```

Le programme générera les fichiers exécutables `push_swap` et `checker` après la compilation.

## Utilisation

### push_swap

Une fois le programme compilé, vous pouvez l'utiliser pour trier une pile d'entiers en exécutant :

```bash
./push_swap <nombres>
```

Où `<nombres>` est une série de nombres séparés par des espaces. Par exemple :

```bash
./push_swap 3 2 5 1 4
```

Le programme retournera une séquence d'opérations à exécuter pour trier la pile.

### checker

Pour vérifier si la pile A est triée après avoir effectué les opérations, utilisez le programme `checker` :

```bash
./checker <nombres>
```

Le programme prendra la même série de nombres et attendra une séquence d'opérations (comme celles générées par push_swap) en entrée. Après chaque opération, il mettra à jour les piles et affichera l'état actuel. Si la pile A est triée à la fin et que la pile B est vide, il affichera OK. Sinon, il affichera KO.

#### Exemple d'utilisation avec checker

1. Exécutez push_swap pour générer les opérations :

```bash
./push_swap 3 2 5 1 4
```

2. Copiez les opérations générées.

3. Exécutez checker avec les mêmes nombres et les opérations :

```bash
./checker 3 2 5 1 4
```

Collez ensuite les opérations générées par push_swap et appuyez sur Entrée. Si tout est correct, vous devriez voir OK.

## Remarques

- L'objectif principal de ce projet est de trier la pile en utilisant un minimum d'opérations. La solution optimale consiste à utiliser le moins de mouvements possibles, en exploitant au mieux les opérations autorisées.
  
- Ce projet repose sur des algorithmes de tri utilisant les piles. Plusieurs méthodes de tri ont été testées pour optimiser le nombre d'opérations et garantir un tri rapide.

- Le programme ne prend pas en charge les entrées invalides, donc il est essentiel de fournir une liste d'entiers valides, sans doublons.

- Pour le bonus, le `checker` permet de tester que la pile A est triée après l'exécution des opérations. Il s'agit d'un outil utile pour valider le bon fonctionnement de l'algorithme.

- Le programme n'utilise pas de bibliothèques externes ou de structures de données complexes. Les piles sont gérées avec des listes simples, ce qui permet de garder l'implémentation simple mais efficace.

- L'optimisation des performances, notamment en termes de complexité algorithmique, a été un facteur clé de la conception, avec un objectif d'avoir un tri efficace même pour un grand nombre d'éléments dans la pile.

## Contribution

Les contributions à ce projet sont les bienvenues ! Si vous souhaitez participer, voici les étapes à suivre :

1. Forkez ce projet.
2. Créez une branche pour chaque fonctionnalité ou correction de bug.
3. Assurez-vous que vos modifications ne cassent pas l'existant et que toutes les fonctionnalités sont correctement testées.
4. Soumettez une Pull Request pour que vos modifications puissent être examinées et fusionnées.

Nous vous encourageons également à ajouter des tests unitaires pour garantir la stabilité du projet et éviter toute régression.

#### Auteurs

- [Herimamy12](https://github.com/Herimamy12)
