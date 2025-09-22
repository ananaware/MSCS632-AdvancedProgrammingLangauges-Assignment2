// JavaScript : Calculate the sum of an array (fixed version)
function calculateSum(arr) {
  let total = 0; // ✅ corrected: use digit 0 instead of letter o
  for (let num of arr) {
    total += num;
  }
  return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculateSum(numbers); // ✅ corrected: proper function call
console.log("Sum in JavaScript:", result);
