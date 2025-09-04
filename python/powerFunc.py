"""
Name: Alexis W
Description: Power Function, To find a composite integer

Using recursion to find composite integer (non prime integer), ie reformatting fermats little thm
    input 4 number -> only 3 numbers change, 'n' stays the same
    if k is even, return b, a^2(mod n), and k/2
        since we only need to check if k is even, use if else
    if k is odd, return b*a(mod n), a, and k-1
"""

def powFunc(multi, base, exponent, modulo):
    # base case
    if exponent == 0:
        return multi

    # even 
    if exponent % 2 == 0:
        return powFunc(multi, (base*base)%modulo, exponent/2, modulo)
    # odd
    else:
        return powFunc((multi*base)%modulo, base, exponent-1, modulo)

def main():
    #test: 1*2^{1516} (mod 1517) = 756
    print (powFunc(1, 2, 1516, 1517))

if __name__ == '__main__':
    main()
