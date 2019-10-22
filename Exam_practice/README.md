# Chama Foundation Retake Exam

## Getting Started

- Fork this repository under your own account
- Clone the forked repository to your computer
- Create a `.gitignore` file so generated files won't be committed
- Commit your progress frequently and with descriptive commit messages
- All your answers and solutions should go in this repository
- Please create directories for each task

## Keep in mind

- You can use any resources online, but **please work individually**

- **Don't just copy-paste** your answers and solutions,
  use your own words instead

- **Don't push your work** to GitHub until
  your mentor announces that the time is up

## Exercises

### Word reverser

Create a function that takes a sentence as an input, reverses the letters
in every word (but not reverses the word order in the sentence),
and returns the sentence with the reversed words.
You shouldn't care about upper or lower case letters.

Write at least 2 different unit test cases.

#### Example

Input

```text
"lleW ,enod taht saw ton taht drah"
```

Output

```text
"Well done, that was not that hard"
```

### Weekly feedback evaluator

Write a method which can read and parse a file containing information about
weekly feedback from apprentices about a mentor. 

The mentor is *rated* in 4 different metrics, those are respectively (*`matReview`*, *`presSkills`*, *`helpfulness`*, *`explanation`*) separated with 1 space:

- m = `matReview`
- p = `presSkills`
- h = `helpfulness`
- e = `explanation`

```text
m p h e
1 3 5 3   // this line is an answer from an apprentice
2 3 4 3   // this is another response
...
```

The method must return a map/dictionary containing the average rating
(in each metric) of the mentor.

#### Example

[Example file can be found here.](./responses.txt)

Output

```js
{
  "matReview": 2.25,
  "presSkills": 4.0, // or 4 is fine as well
  "helpfulness": 4.5,
  "explanations": 3.75
}
```

### Fish tank

Now you are going to create a simple aquarium
where you can take care of your fishes.

#### Fish

Each fish has a name, weight and a color.

- The fish has a `status()` method. It should print the status for a fish.

  - For example: `Dory, weight: 9, color: blue, short-term memory loss: true`

- The fish has a `feed()` method. The implementation should depend
  on the type of the fish.

##### Clownfish

Clownfish, gains 1 gramm when fed and
has an additional color (color of the stripes).

##### Tang

Tang, gains 1 gramm when fed and can suffer short-term memory loss.

##### Kong

Kong, gains 2 grams when fed.

#### Aquarium

- It has an `addFish()` a method where you can add fishes to the aquarium.

- It has a `feed()` method that feeds all the fishes in the aquarium:

  - Increases the weight of every fish with the amount of grams they gain when fed.

- It has a `removeFish()` a method that removes the big fishes: 

  - A big fish's weight is at least 11 grams.

- The aquarium has a `getStatus()` method it should print the status for each fish.

## Command line exercise

- Take a look at this directory structure:

```text
zoo
 |--carnivores
 |   |--.git
 |   └--endangered
 |       |--flores_crow.md
 |       └--whale_shark.md
 └--population
     |--mammals.csv
     |--reptiles.csv
     └--birds.csv
```

- Your task is to write commands in the correct order
  from the directory given below.

- Do it with less commands without chaining them together.

- Assume that the following files are currently in the staging area:

  - `zoo/carnivores/endangered/flores_crow.md`
  - `zoo/carnivores/endangered/whale_shark.md`

- Your current directory is `zoo/`
  
  1. Create a new directory `omnivores`
  
  1. Turn the `omnivores` directory into a Git repository
  
  1. Create `endangered` directory in the `omnivores` directory
  
  1. Remove `carnivores/endangered/flores_crow.md` from the staging area
  
  1. Move `carnivores/endangered/flores_crow.md`
    to `omnivores/endangered` directory
  
  1. Append the `population/birds.csv` with the following line
  
     - `Flores crow,2019.10.21,1362`
  
  1. Commit all the changes in the `omnivores` directory 

- Solution:
mkdir omnivores
cd omnivores
git init
mkdir endangered
git reset HEAD carnivores/endangered/flores_crow.md
mv carnivores/endangered/flores_crow.md omnivores/endangered
echo "Flores crow,2019.10.21,1362" >> population/birds.csv
git add zoo/omnivores
git commit -m “changes committed”



