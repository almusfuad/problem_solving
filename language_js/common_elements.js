function commonElements(arr1, arr2) {
      let result = [];
      let i = 0;
      let j = 0;
      while(i < arr1.length && j < arr2.length) {
            if(arr1[i] === arr2[j]) {
                  result.push(arr1[i]);
                  i++;
                  j++;
            } else if(arr1[i] > arr2[j]) {
                  j++;
            } else {
                  i++;
            }
      }

      return result;
}

console.log(commonElements([1,2,3,4,5,6,7,8,9], [1,3,5,7,9,11,13,15,17,19]));