var numberArray = [11,20, 30, 11, 5, 8, 40, 90, 45];

function find_max(numbers) {
      if(!Array.isArray(numbers) || numbers.length === 0) {
            return 0;
      }

      for(var i=0; i<numbers.length; i++) {
            if(numbers[i] > numbers[0]){
                  numbers[0] = numbers[i];
            }
      }

      return numbers[0];
}

console.log("Using naive approach: ",find_max(numberArray));

// using buil-in functional approach

function findMax(numbers) {
      if(!Array.isArray(numbers) || numbers.length === 0) {
            return 0;
      }

      // return numbers.reduce(function(a, b) {
      //       return Math.max(a, b);
      // });

      return Math.max(...numbers); // using spread operator
}

console.log("Using built-in functional approach: ",findMax(numberArray));