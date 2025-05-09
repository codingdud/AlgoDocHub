#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
long long gcd(long long a, long long b) {
    // Handle case where one of the numbers is 0
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to calculate LCM 
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

vector<long long int> addFraction(int a, int b, int c, int d)
{
    // Calculate LCM of denominators
    long long lcm_denominator = lcm(b, d);
    
    // Calculate new numerators to match LCM denominator
    long long new_a = a * (lcm_denominator / b);
    long long new_c = c * (lcm_denominator / d);
    
    // Add numerators
    long long sum_numerator = new_a + new_c;
    
    // Find GCD of sum numerator and LCM denominator
    long long g = gcd(sum_numerator, lcm_denominator);
    
    // Simplify the fraction
    sum_numerator /= g;
    lcm_denominator /= g;
    
    // Return as vector
    return {sum_numerator, lcm_denominator};
}

// Optional: Main function to test the implementation
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        vector<long long int> result = addFraction(a, b, c, d);
        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}