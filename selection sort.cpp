#include <iostream>
#include <vector>
#include <graphics.h>
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int BAR_WIDTH = 10; 

void drawArray(vector<int>& arr, int n) {
    cleardevice(); 
    int startX = (SCREEN_WIDTH - n * BAR_WIDTH) / 2;
    int startY = SCREEN_HEIGHT - 50;
    for (int i = 0; i < n; i++) {
        bar(startX + i * BAR_WIDTH, startY, startX + (i + 1) * BAR_WIDTH, startY - arr[i]);
    }
    delay(500); 
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
        drawArray(arr, n); 
    }
}

void visualizeSelectionSort(vector<int>& arr) {
    initwindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Selection Sort Visualization");
    drawArray(arr, arr.size());
    selectionSort(arr);
    delay(2000); 
    closegraph(); 
}

int main() {
    vector<int> arr = { 7, 2, 5, 3, 8, 9, 1, 4, 6 };
    visualizeSelectionSort(arr);
    return 0;
}
