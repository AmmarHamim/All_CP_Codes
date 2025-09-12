#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Function to calculate the GCD of two numbers
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        // Read the sides of the triangle
        ll a, b, c;
        cin >> a >> b >> c;

        // Calculate semi-perimeter (s)
        ll s = (a + b + c);
        
        // Calculate the area using Heron's formula (A)
        // A = sqrt(s * (s - a) * (s - b) * (s - c))
        ll area_square = s * (s - a) * (s - b) * (s - c); // Area squared (avoid floating-point precision issues)
        
        // Calculate the minimum distance squared (D^2) = 4 * A / (a + b + c)
        ll min_dist_square_numerator = 4 * area_square;  // numerator for the fraction
        ll min_dist_square_denominator = s * s;           // denominator for the fraction
        
        // Simplify the fraction using GCD
        ll g = gcd(min_dist_square_numerator, min_dist_square_denominator);
        min_dist_square_numerator /= g;
        min_dist_square_denominator /= g;

        // Output the result as an irreducible fraction
        cout << min_dist_square_numerator << "/" << min_dist_square_denominator << endl;
    }

    return 0;
}
