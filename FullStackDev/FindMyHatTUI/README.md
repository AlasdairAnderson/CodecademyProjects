# Hat Field TUI Game

## Project Overview

This project is a terminal-based game written in JavaScript using Node.js. The objective of the game is for the player to navigate across a randomly generated field, avoid holes, and locate the hidden hat.

The project was developed to explore:

* terminal user interaction using Node.js
* asynchronous input handling with `readline`
* object-oriented programming
* procedural field generation
* recursive pathfinding algorithms
* validation of generated game states

---

# Game Rules

The player is represented by `*` and begins at a random starting position on the field.

The field contains:

* empty tiles represented by `░`
* holes represented by `O`
* a hat represented by `^`

The player can move:

* up using `w`
* left using `a`
* down using `s`
* right using `d`

The game ends when:

* the player reaches the hat (`^`)
* the player moves into a hole (`O`)
* the player moves outside the field boundaries
* the player moves back onto a previously visited tile (`*`)

---

# Project Architecture

The project is centered around the `Field` class which is responsible for:

* generating playable fields
* tracking player state
* handling movement
* evaluating tiles
* rendering the field to the terminal
* validating that generated fields are solvable

---

# Field Representation

The field is stored as a two-dimensional array.

Example:

```js
const myField = new Field([
    ['*', '░', 'O'],
    ['░', 'O', '░'],
    ['░', '░', '░'],
    ['░', '^', '░']
]);
```

Each element within the array represents a single tile on the game board.

---

# Core Methods

## `print()`

The `print()` method renders the current state of the field to the terminal.

The method loops through the two-dimensional field array, constructs a string representation of the board, and outputs the result to the console.

This method is called at the beginning of every game loop iteration to display the player's updated position.

---

## `move()`

The `move()` method is responsible for:

* translating player input into movement
* updating the player's location
* validating the attempted move
* updating the field state

The method accepts a directional input (`w`, `a`, `s`, or `d`) and calculates the player's next position.

The updated location is then passed to `#evaluateTile()` to determine whether the move is legal.

---

## `#evaluateTile()`

`#evaluateTile()` is a private method used to determine the result of moving onto a specific tile.

The method evaluates the tile value and updates the game state accordingly.

### Tile Outcomes

| Tile        | Result                                   |
| ----------- | ---------------------------------------- |
| `^`         | Player wins the game                     |
| `O`         | Player loses the game                    |
| `*`         | Player loses the game                    |
| `undefined` | Player moves outside the field and loses |
| `░`         | Valid movement tile                      |

The method updates:

* `foundHat`
* `playerFallen`

depending on the evaluated tile.

---

# Field Generation

The game field is procedurally generated using several static helper methods:

* `generateField()`
* `validateField()`
* `#findIconLocation()`

The generation system ensures that every generated field is solvable.

---

## `generateField()`

`generateField()` is a static method responsible for creating a playable game field.

The method:

1. generates an empty field filled with `░`
2. randomly places:

   * one player start tile (`*`)
   * one hat (`^`)
   * multiple holes (`O`)
3. validates that the field remains solvable after each hole placement

The number of holes is determined as a percentage of the total field size.

### Hole Placement Validation

After each hole is placed, the field is validated using `validateField()`.

If the newly placed hole blocks all possible paths between the player and the hat:

* the hole is removed
* a new random location is selected
* validation is repeated

This process continues until a valid location is found.

---

## `validateField()`

`validateField()` is a static method used to determine whether a valid path exists between the player and the hat.

The method:

1. identifies the positions of the player and hat
2. executes the `pathAvailable()` search algorithm
3. returns whether the field is solvable

---

## `#findIconLocation()`

`#findIconLocation()` is a private static helper method used to locate icons within the field array.

The method:

* loops through the field
* searches for a specified icon
* returns the row and column location of the icon

Example:

```js
Field.#findIconLocation(field, '^');
```

---

# Pathfinding Algorithm

## `pathAvailable()`

`pathAvailable()` is a recursive depth-first search (DFS) algorithm used to determine whether the player can reach the hat.

The function accepts:

* the current tile location
* the target location
* a `Set` of previously visited tiles

### DFS Process

The algorithm performs the following steps recursively:

1. marks the current tile as visited
2. evaluates surrounding movement directions
3. ignores:

   * holes
   * out-of-bounds tiles
   * previously visited tiles
4. recursively explores valid neighboring tiles
5. returns `true` immediately if the hat is found
6. returns `false` if all possible paths have been exhausted

This validation process guarantees that generated fields are always completable.

---

# Technical Concepts Explored

This project explores several core software engineering concepts:

* object-oriented programming
* recursive algorithms
* graph traversal
* state management
* procedural generation
* asynchronous terminal input
* private class methods
* static class methods
* validation-driven generation

---

# Future Improvements

Potential future improvements include:

* coloured terminal rendering
* difficulty settings
* fog of war
* real-time movement input
* improved procedural generation
* scoring systems
* game replay functionality
* automated unit testing
