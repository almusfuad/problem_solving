// naive approach

var string1 = "given string";

function reverse_string(string) {
      if(typeof string === "string" && string.length > 0){
            var reverseString  = "";

            for(var i = 0; i < string.length; i++) {
                  reverseString = string[i] + reverseString;
            }
            
            return reverseString;
      }

      return "";
}

console.log("Naive approach: ", reverse_string(string1));

// using built-in functional approach

function reverseString(string) {
      if(typeof string =="string" && string.length > 0) {
            return string.split("").reverse().join("");
      }
}

console.log("Using built-in functional approach: ", reverseString(string1));