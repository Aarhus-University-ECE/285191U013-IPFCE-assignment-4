# IPFCE-Week-4-Array data structures

```bash
python autograde.py
```
Submit your solutions via the assignment dropbox on blackboard, Week 4. Please make
sure to submit your solutions **by next Monday.** If an exercise requires you to write C
code, then create a new C file (i.e. do not combine exercises into a single C file).  

Note: the **Challenge** exercises are optional.

## Excercise

1. Write a program that reverses the order of elements in an array, and then prints the
   contents of the reversed array. For example, given the array:  
   ```c
   int a[5] = {1,2,3,4,5};
   ```
   ...you should end up with another array b that has the elements: [5,4,3,2,1]. Your
   program would then print the following to the console:  
   5 4 3 2 1
   
2. Suppose I have a sequence of numbers such as:  
   1, 7, 43, 4, 67, 0, 3, 2, 0, 0, 3, 2, **0,0,0**, 3, 2, 6  
   The longest sequence of zeroes has 3 consecutive zeroes (in bold). Write a function
   that computes the start index of the longest sequence of zeros in an array. To test
   your program, you may use a variable a that is an integer array that you already ll
   up with integers, e.g.
   ```c 
   int a[13] = { 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 11, 0, 0 }; 
   ```

3. Write a program that counts the occurrences of numbers between 1 to 20 that
   are stored in a two-dimensional array of size 100 x 150, and record the counts in
   another (one-dimensional) array that has size 20. Test your program by filling your
   two-dimensional array with various numbers (e.g. via some interesting for loop
   patterns, or random number generation). Print the one-dimensional final counts to
   the console.

4. Write 1-2 sentences that answers the question: What does the following program compute, that is, what problem does it solve?
   ```c
   int r = 0;
   int n = 0;
   int s = 0;
   int h;
   while (n != N)
   {
   h = n;
   while (n != N)
   {
     h = n;
     while (h != s)
     {
       if (a[h - 1] != a[n])
         h--;
       else
         s = h;
     }
     r = max(r, n + 1 - s);
     n++;
    }
    printf("%d", r);
   }
   ```
   where the function max() is given by
   ```c
   int max(int x, int y)
   {
      return (x >= y) ? x : y;
   }
   ```
   *Hint*: Experiment with different values for a and N, e.g.
   ```c
   int a[11] = { 9,1,1,7, 3, 4, 2, 11,1,9,10 };
   int N = 11;
   ```
   
5. **Challenge:** The Game of Life is a cellular automaton (it looks a bit like a board
   game) that demonstrates how very simple rules applied on a large scale can create
   complex *emergent* patterns. It was invented by a mathematician John Conway. The
   idea is that the universe in the game of life is a checkerboard (we can suppose it is a
    xed size of n x n), we call each square on the board a cell. Each cell is either alive
   (represented by ![image](https://user-images.githubusercontent.com/67692726/110829655-aa602680-8298-11eb-8705-68d9df5f22a3.png)
   ) or dead (represented by -). Cells interact with their *neighbours*,
   which are the eight surrounding cells (above, below, left, right, upper-left, etc.). On
   each turn (called a *generation*), whether a cell is alive or not can change according
   to the following rules:  
   
   **Rule 1:** An alive cell with less than two alive neighbours dies (under population)  
   **Rule 2:** An alive cell with exactly two or three alive neighbours stays alive, and lives on into the next generation (survival)    
   **Rule 3:** An alive cell with more than three alive neighbours dies (over population)  
   **Rule 4:** A dead cell with exactly three alive neighbours becomes a live cell (reproduction)     
   The rules are illustrated in the following examples by the cell in the middle of each board. 
   
   
   **Rule 1: under population**    
   Generation 1:  
   ![image](https://user-images.githubusercontent.com/67692726/110829875-e09da600-8298-11eb-9921-a0bdf62a0d19.png)
   
   Generation 2:  
   ![image](https://user-images.githubusercontent.com/67692726/110829941-f1e6b280-8298-11eb-9a97-6547d008a4fd.png)
   
   **Rule 2: Survival**  
   Generation 1:  
   ![image](https://user-images.githubusercontent.com/67692726/110829999-075bdc80-8299-11eb-96a7-dbc16feb6584.png)
   
   Generation 2:  
   ![image](https://user-images.githubusercontent.com/67692726/110829875-e09da600-8298-11eb-9921-a0bdf62a0d19.png)
   
   **Rule 3: Over population**  
   Generation 1:   
   ![image](https://user-images.githubusercontent.com/67692726/110830286-56097680-8299-11eb-80a0-a0675f045bc0.png)

   Generation 2:    
   ![image](https://user-images.githubusercontent.com/67692726/110829941-f1e6b280-8298-11eb-9a97-6547d008a4fd.png)
   
   **Rule 4: Reproduction**  
   Generation 1:   
   ![image](https://user-images.githubusercontent.com/67692726/110830479-8cdf8c80-8299-11eb-9558-664bd4cda306.png)

   Generation 2:    
   ![image](https://user-images.githubusercontent.com/67692726/110829875-e09da600-8298-11eb-9921-a0bdf62a0d19.png)
   
   The game is played by setting an initial configuration of alive and dead cells on the
   board and watching how the cells evolve over time. When certain configurations of
   alive and dead cells appear on the board, some interesting patterns start to emerge.
   For example, the following pattern (called a bee-hive) is stable, and doesn't change
   between generations (a category of patterns called Still Life):  
   
   **Example: Bee-hive**  
   Generation 1:  
   ![image](https://user-images.githubusercontent.com/67692726/110830662-bd272b00-8299-11eb-87ff-12418b1cd028.png)

   Generation 2:  
   ![image](https://user-images.githubusercontent.com/67692726/110830732-d039fb00-8299-11eb-92e0-3e56173d1c6a.png)
   
   The following pattern (called a *blinker*) cycles through its states in a repeatin fashion (a category of patterns called *Oscillators*):  
   **Example: Blinked**  
   
   Generation 1:  
   ![image](https://user-images.githubusercontent.com/67692726/110830860-f3fd4100-8299-11eb-99db-a4188f2b1e61.png)
   
   Generation 2:  
   ![image](https://user-images.githubusercontent.com/67692726/110830922-024b5d00-829a-11eb-838f-bedd3cbc3a3c.png)

   Generation 3:  
   ![image](https://user-images.githubusercontent.com/67692726/110830860-f3fd4100-8299-11eb-99db-a4188f2b1e61.png)
   
   And finally, there are a category of patterns that actually move across the board
   called Spaceships, the most famous being the glider. The Wikipedia page has some
   nice visualisations: https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life
   Your task is to program the game of life in C. Create an n x n board as a char
   array for an appropriate n (large enough to see some nice patterns, small enough
   to display well on the terminal). Have your program print out the board of each
   generation, and let it run for a few generations (perhaps 10). Write a test for your
   program that demonstrates:  
   
   (a) a still life pattern  
   (b) an oscillator pattern  
   (c) a spaceship  
