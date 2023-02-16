int gcd(int a, int b) {
  int r;

   // Compute and return the Greatest Common Divisor of a and b
   r = a % b;
   while (r > 0)
   {
      a = b;
      b = r;
      r = a % b;
   }  

   return b;
}


int lcm(int a, int b) {
  // Compute and return the Least Common Multiple of a and b
   // NOTE:  It's important to divide before multiplying here, otherwise
   //        the product might overflow
   return a * (b / gcd(a, b));
    
  return b;
}

