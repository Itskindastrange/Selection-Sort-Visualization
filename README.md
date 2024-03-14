# Selection-Sort-Visualization
The code implements the Selection Sort algorithm and provides a visual representation of its stepsdrawArray Function:

Takes a vector of integers (arr) and the array size (n) as input.
Clears any existing graphics (cleardevice).
Calculates the starting X-coordinate (startX) to center the bars.
Sets a starting Y-coordinate (startY) near the bottom of the screen.
Iterates through the array and draws vertical bars using the bar function. The height of each bar corresponds to the value in the array.
Adds a short delay (delay(500)) to make the visualization steps observable.
selectionSort Function:

Implements the standard Selection Sort algorithm.
After each swap within the sorting process, it calls the drawArray function to update the visualization.
visualizeSelectionSort Function:

Initializes a graphics window (initwindow).
Calls drawArray to display the initial unsorted array.
Executes the selectionSort function to perform the sorting and visualization.
Adds a delay (delay(2000)) to view the final result before closing the window.
main Function:

Creates a sample array (arr).
Calls visualizeSelectionSort to demonstrate the visualization.
