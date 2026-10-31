
#include <iostream>
#include <vector>
using namespace std;


/*
===========================================================
                    VECTOR NOTES
===========================================================

1. VECTOR
-----------------------------------------------------------
A vector is a dynamic-size container.

Unlike a fixed-size array, a vector can grow or shrink
during the program.

To use vector:
    #include <vector>

Example:
    vector<int> vNumbers;

To add an element:
    vNumbers.push_back(10);


===========================================================
2. PASSING A VECTOR BY REFERENCE
-----------------------------------------------------------

When we write:

    vector<int> &vNumbers

the function receives a REFERENCE to the original vector.

That means:
    - No copy of the vector is created.
    - The function works with the original vector.
    - Changes made to vNumbers affect the original vector.

Visual:

Without &:

    Original Vector
    [10][20][30]
          |
         COPY
          ↓
    Function's Vector
    [10][20][30]


With &:

    Original Vector
    [10][20][30]
          ↑
          |
       vNumbers
       (reference)

There is only ONE vector.


IMPORTANT:
& means "reference" — another name for an existing object.

It does NOT simply mean "make changes reflected."

===========================================================
*/


/*
===========================================================
FUNCTION 1: fillVector()
===========================================================

Purpose:
    Add numbers entered by the user to the vector.

Why do we use &?

    vector<int> &vNumbers

Because we want to modify the ORIGINAL vector.

If we removed &:

    vector<int> vNumbers

the vector would be copied into the function.
push_back() would modify the copy, not the original vector.

When the function ends, the copy is destroyed.
The original vector would remain unchanged.
===========================================================
*/

void fillVector(vector<int>& vNumbers)
{
    char userChoice = 'y';
    int userNumber = 0;

    do
    {
        cout << "Please enter a number: ";
        cin >> userNumber;

        // Add the number to the original vector.
        vNumbers.push_back(userNumber);

        cout << "Do you want to enter more numbers? Y/N: ";
        cin >> userChoice;

    } while (userChoice == 'y' || userChoice == 'Y');
}


/*
===========================================================
FUNCTION 2: printVector()
===========================================================

Purpose:
    Print all elements of the vector.

The instructor uses:

    vector<int> &vNumbers

Why?

Because passing the vector by value would create a copy
of the entire vector.

Using & allows the function to work with the existing vector
without creating another vector.

IMPORTANT:
This function does NOT modify the vector.

The more complete C++ form for a read-only vector would
eventually be:

    const vector<int> &vNumbers

We will learn const later.


RANGE-BASED FOR LOOP
-----------------------------------------------------------

    for(int num : vNumbers)

Here, num is a COPY of each element.

Example:

    Vector:
    [10] [20] [30]
           ↓
          num
         [20]

Changing num would NOT change the vector.

For printing, this is completely fine because we only
need to read the values.
===========================================================
*/

void printVector(vector<int>& vNumbers)
{
    for (int num : vNumbers)
    {
        cout << num << " ";
    }

    cout << endl;
}


/*
===========================================================
FUNCTION 3: doubleNumbers()
===========================================================

Purpose:
    Double every number inside the vector.

First &:

    vector<int> &vNumbers

This refers to the ORIGINAL vector.

Second &:

    int &number

This refers to the ACTUAL element inside the vector.


WHY DO WE NEED THE SECOND &?
-----------------------------------------------------------

Without &:

    for(int number : vNumbers)

number is a COPY of the element.

Example:

    Vector:
    [1] [2] [3]

             ↓
           COPY
          [2] ← number

    number = number * 2;

The copy becomes 4, but the vector remains:

    [1] [2] [3]


With &:

    for(int &number : vNumbers)

number refers to the actual element:

    Vector:
    [1] [2] [3]
          ↑
          |
        number

    number = number * 2;

Now the actual vector becomes:

    [1] [4] [3]


VERY IMPORTANT:
The two & symbols have DIFFERENT jobs:

    vector<int> &vNumbers
             ↓
       WHOLE VECTOR

    int &number
             ↓
       ONE ELEMENT


===========================================================
*/

void doubleNumbers(vector<int>& vNumbers)
{
    for (int& number : vNumbers)
    {
        number = number * 2;
    }
}


/*
===========================================================
MAIN
===========================================================

Program flow:

    Create empty vector
            ↓
       fillVector()
            ↓
       printVector()
            ↓
      doubleNumbers()
            ↓
       printVector()


Example:

User enters:

    1 2 3

First print:

    1 2 3

After doubleNumbers():

    2 4 6

Second print:

    2 4 6
===========================================================
*/

int main()
{
    vector<int> vNumbers;

    fillVector(vNumbers);

    printVector(vNumbers);

    doubleNumbers(vNumbers);

    printVector(vNumbers);
}


/*
===========================================================
QUICK REVISION
===========================================================

vector<int> vNumbers
    → Creates a vector of integers.

push_back(value)
    → Adds a value to the end of the vector.


vector<int> &vNumbers
    → Reference to the WHOLE VECTOR.
    → No copy of the vector.
    → Allows the function to work with the original vector.


int num
    → Copy of one element.


int &num
    → Reference to the ACTUAL element.


WHEN DO I NEED &?

For the vector:

    vector<int> &vNumbers

Use & when:
    - You want to modify the original vector.
    - Or you want to avoid copying the vector.


For the element:

    int &number

Use & when:
    - You want to modify the actual element.


MAIN MENTAL MODEL:

                & = REFERENCE
                    ↓
          another name for the
             existing object


vector<int> &vNumbers
        ↓
Original VECTOR


int &number
        ↓
Original ELEMENT


The most important question to ask:

    "What is this & referring to?"

If it is:

    vector<int> &vNumbers
        → the whole vector

If it is:

    int &number
        → one element
===========================================================
*/


/*
===========================================================
EXTRA PRACTICE EXAMPLE
===========================================================

This was the original example using push_back():

vector<int> vNumbers;

vNumbers.push_back(10);
vNumbers.push_back(20);
vNumbers.push_back(30);
vNumbers.push_back(40);
vNumbers.push_back(50);
vNumbers.push_back(60);
vNumbers.push_back(70);
vNumbers.push_back(80);
vNumbers.push_back(90);
vNumbers.push_back(100);

for(int &num : vNumbers)
{
    printf("%02d ", num);
}

cout << endl;

Here int &num means that num refers to each actual
element of the vector.

If we only wanted to print the values and not modify them,
the & would not be necessary:

    for(int num : vNumbers)

Both would print the same values.

The difference is whether num is a COPY or a REFERENCE.
===========================================================
*/

