function isPrime(number) {
      if (number < 2) return false;

      for(let i = 2; i <= Math.sqrt(number); i++) {
            if(number % i === 0) return false;
      }

      return true;
}

console.log("Check for 2: ",isPrime(2));
console.log("Check for 16: ",isPrime(16));
console.log("Check for 11: ",isPrime(11));
console.log("Check for 7: ",isPrime(7));