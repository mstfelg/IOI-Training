# Notebook structure
1. **Index** - [Tasks](To-do.md) - [Problems](Problems.md)
1. Chapter 1 (General notes):
    1. [Data type](Chapter1\Data_types.md).
    1. [Pointer](Chapter1\Pointer.md).
    1. [Complexity](Chapter1\Complexity.md).
    1. [Minimalist codes](Chapter1\Minimalist_codes.md).
    1. [Debugging](Chapter1\Debugging.md).
1. Chapter 2 (Topics):
    1. Graph theory.
    1. Sort.
    1. Search.
    1. Segment tree.
1. Chapter 3 (Techniques):
    1. [All into one loop](Techniques\All_into_one_loop.md).

 # General notes
  > The person who says he knows what he thinks but cannot express it usually does not know what he thinks. ― Mortimer J. Adler

  * Plan your code, jot down your main structure & ideas into a [Pseudocode](https://en.wikipedia.org/wiki/Pseudocode), think if there's another way to solve the problem.
  * Have an overview about mathematics: graph theory, number theory, Euclidean geometry.
  * Have an overview about how computer deals with memory and resources, learn a little bit about low level machine language.
  * After solving a problem check the editorial or other's solutions, this is important to improve your way of thinking.
  * Master the programs you use; each program is filled with useful time-saving shortcuts.
  * Collect your solutions in a repository (e.g: Github): what's different with programming from maths and other sciences is that it's much easier to write down and collect its solutions.
  * Learn [touch typing](https://en.wikipedia.org/wiki/Touch_typing): a must-aquire skill, that makes your typing more efficient and maximizes accuracy. (I recommend starting [<b> here</b>](https://www.typingclub.com))
  * Use return 0 to end the program, generally, in any function, return stops the work of function on next lines.
  * Change your input/output files if you have big input or output.

 ## Coding aesthetics
 Keeping an organized beautiful code is a good programmming habit, which saves you a lot of time while debugging.
  1. Partition your code into multiple stages or sections then comment above each section, you can add an output text at the end of each section of the code to debug more quickly.
  1. Use indentation: this reveals the entire code structure. 
  1. Follow a consistant [naming convention](https://en.wikipedia.org/wiki/Naming_convention_(programming)). [[1]](https://hackernoon.com/the-art-of-naming-variables-52f44de00aad)
  1. Header comment:
```cpp
    /*
    Title           :   ...
    Author          :   ALELQ, MUSTAFA
    Date            :   23 July, 2019
    Description     :   A solution to: ...
                        GIVEN: ... DO: ...
    Pseudocode      :
                        1. Step1
                        2. Step2
                        3. Step3
                        4. Step4
                        5. Step5
                        
                        Edge cases:
                        1. n == k
                        
    */
```