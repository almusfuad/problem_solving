var numberArray = [11,20, 30, 11, 5, 8, 30, 90, 45];



// naive approach
function remove_duplicate(numbers) {
      if(!Array.isArray(numbers) || numbers.length === 0) return [];

      var uniqueArray = [];

      for(var i = 0; i < numbers.length; i++) {
            if(uniqueArray.indexOf(numbers[i]) === -1) {
                  uniqueArray.push(numbers[i]);
            }
      }

      return uniqueArray;
}

console.log("Naive approach: ",remove_duplicate(numberArray));


// functional approach
function removeDuplicate(arr) {
      const uniqueSet = new Set(arr);

      const uniqueArray = Array.from(uniqueSet);

      return uniqueArray;
}

console.log("Functional approach: ",removeDuplicate(numberArray));