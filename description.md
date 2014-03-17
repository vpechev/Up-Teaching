<h1>Tasks</h1>

<h2>Inheritance time!</h2> (21.03)

Create class Entity that will be base class for Hero and Orc. For now there is duplicated code in class Hero and Orc. Our task is to organize our classes to not have duplicate code. Steps to follow:

<ol>
  <li>Create class Entity.</li>
  <li>Remove common parts of the code from Hero and Orc to Entity.</li>
  <li>Now it's to Inherit Entity!</li>
</ol>

<h2>Equipping weapons</h2> (21.03)

What a hero doesn't have a weapon?! Let's do some craftsmanship!

<ol>
  <li>First create class Weapon.</li>
  <li>a Weapon can have <code>type</code> for example "axe", <code>damage</code> and <code>criticalChance</code> a number between 0 and 1.</li>
  <li>Implement method <code>criticalHit</code> that will return <code>true</code> if Weapon can do 2x more damage than usual and <code>false</code> otherwise.</li>
</ol>
<b>For example:</b>

Weapon* weapon = new Weapon("axe", 20, 0.5)

In this case of weapon it has 50% chance for critical hit.

<h2>Let's Fight</h2> (21.03)

In order to test our game and to see some action we need to implement fighting logic.
We'll have something like dungeon. It will look like this in text file <code>map.txt</code>:

```
S..####...##
...##....#..
O....#...###
............
............
#####..##O..
............
############
```

Where 'S' is spawn point for <code>Hero</code>, 'O' is spawn point for <code>Orc</code>, '#' is wall you can't walk throught it and '.' is walkable path.

Now you need to implement logic for spawning units on the map.

Create method <code>spaw(entity_name, entity)</code>.
