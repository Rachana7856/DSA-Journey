#include<iostream>
using namespace std;

//Factorial using Recursion
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

//Prime Number Checker
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

//Static Variable Counter
void callCounter() {
    static int count = 0;
    count++;
    cout << "Function called " << count << " times." << endl;
}

//Function Overloading for Area
int area(int side) { return side * side; }                        // square
float area(float radius) { return 3.14f * radius * radius; }      // circle
int area(int length, int breadth) { return length * breadth; }    // rectangle

//Power Function using Loop
int power(int base, int exponent) {
    int result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    cout << "Is " << n << " a prime number? " << (isPrime(n) ? "Yes" : "No") << endl;

    callCounter();
    callCounter();
    callCounter();

    cout << "Area of square (side 5): " << area(5) << endl;
    cout << "Area of circle (r = 5.8): " << area(5.8f) << endl;
    cout << "Area of rectangle (5x2): " << area(5, 2) << endl;

    cout << "10 raised to power 3 = " << power(10, 3) << endl;

    return 0;
}
