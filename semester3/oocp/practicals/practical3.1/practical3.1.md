## Notes on Your Factorial Program

### 1. The Accumulator Pattern (Your Loop Fix)

This is the most important concept you fixed!

* **The Goal:** To calculate a *running product* (e.g., $1 \times 2 \times 3 \times 4$).
* **The Problem:** Your original code was: `fofNumber = userInput * i;`
* **Question to Ask Yourself:** If `userInput` is `4`, what does this line calculate when `i` is 2? What about when `i` is 3? Does it *remember* the value from the previous loop?
* **The Solution (The "Accumulator"):** Your fixed code is: `fofNumber = fofNumber * i;` (or `fofNumber *= i;`)
* **Note to Remember:** When you need a loop to *build on* the result from the previous iteration (like a running total or running product), you must use the variable **on both sides** of the `=` sign.

### 2. Initialization (Your "Starting Value" Fix)

Your accumulator variable (`fofNumber`) needs a correct starting value *before* the loop begins.

* **Question:** If you are calculating a *running sum* (adding numbers), what's the "neutral" starting value? (What number can you add that doesn't change the total?)
* **Question:** If you are calculating a *running product* (multiplying numbers), what's the "neutral" starting value? (What number can you multiply by that doesn't change the total?)
* **Note to Remember:** You correctly chose `1` as the starting value for your factorial's `fofNumber`. If you had left it uninitialized or set it to `0`, what would the final answer always be?

### 3. A Note on Input Validation (The `main()` call)

In your `if (userInput < 0)` block, you called `main();` to restart the program. This is a clever idea, but it's generally unsafe and can lead to crashes (called a "stack overflow").

* **A Safer Pattern:** A better way to *re-ask* for input is to use a loop.
* **Example Logic:**
    1.  Ask for the number: `cin >> userInput;`
    2.  Use a `while` loop to check if it's bad: `while (userInput < 0) { ... }`
    3.  Inside the loop:
        * Print the error message: `cout << "Please enter 0 or higher";`
        * Ask for the number *again*: `cin >> userInput;`
* **Note to Remember:** Use a **loop** (like `while` or `do-while`) to validate input, not a recursive call to `main()`.
