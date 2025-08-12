/*
Name: Alexis Winn
Title: Power function, Header file
*/

/*
Using recursion to find composite integer (non prime integer), ie reformatting fermats little thm
    input 4 number -> only 3 numbers change, 'n' stays the same
    if k is even, return b, a^2(mod n), and k/2
        since we only need to check if k is even, use if else
    if k is odd, return b*a(mod n), a, and k-1
*/
int powFunc(int b, int a, int k, int n) { 
    // base case -> when to end program
    if (k == 0) return b;                        
    
    // if 'k' is even 
    if ((k % 2) == 0) {                 
        a = (a * a) % n;
        k /= 2;
        return powFunc(b, a, k, n);
    } else {
        b = (b*a) % n;
        k--;
        return powFunc(b, a, k, n); 
    };
}

//EOF
