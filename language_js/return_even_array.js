var numberArray = [11,20, 30, 11, 5, 8, 40, 90, 45];

function return_even(numbers) {
      if(!Array.isArray(numbers) || numbers.length === 0) return [];

      var evenNumbers = [];
      for(var i =0; i<numbers.length; i++) {
            if(numbers[i] % 2 === 0){
                  evenNumbers.push(numbers[i]);
            }
      }

      return evenNumbers;
}

var evenNumbersArray = return_even(numberArray);

console.log("using naive method: ",evenNumbersArray);


// another way of array built in function

function filterEvenNumbers(numbers) {
      if(!Array.isArray(numbers) || numbers.length === 0) return [];

      return numbers.filter(number => number % 2 === 0);
}

var evenNumbersArray = filterEvenNumbers(numberArray);
console.log("using built in Array function: ", evenNumbersArray);