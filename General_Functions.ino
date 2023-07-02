// Returns true if the integer arrays are the same and false if they aren't
bool compareIntArrays(int array1[], int array2[], int size) {
  for (int i = 0; i < size; i++) {
    if (array1[i] != array2[i]) {
      return false; 
    }
  }
  return true; 
}

// Prints an integer array
void printIntArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    Serial.print(array[i]);
    Serial.print(" ");
  }
  Serial.println(); 
}