
int mySqrt(int x) {
    int l=1;    // dont use 0, it will cause divide by 0 error
    int h=x;    // this will be the maximum possible value
    int m;      // calculate middle    
    
    while ( l<=h ) {            // binary search
        m = l + (h-l)/2;        // use this to avoid integer overflow
        if ( m == x/m ) {       // instead of m*m == x, use this to avoid overflow
            return m;
        }
        else if ( m > x/m ) {   // if the m*m is bigger than x, then move to smaller numbers
            h = m-1;
        }
        else {                  // move to bigger numbers
            l = m+1;
        }
    }
    return l-1;                 // display low-1
}