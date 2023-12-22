var numberArray = [1,2,3,4,5,6,7,8,9,10];

function calculateSum(numbers) {
      if (!Array.isArray(numbers) || numbers.length === 0) {
        return 0;
      }

      return numbers.reduce(function(a, b) {
        return a + b;
      });
}

var result = calculateSum(numberArray);
console.log(result);