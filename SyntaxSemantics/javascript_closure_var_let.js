// JavaScript: closures and var vs let
function makeCounter(start) {
  let n = start;        // block-scoped
  return function () {
    n = n + 1;          // closes over n
    return n;
  };
}

const c1 = makeCounter(0);
console.log(c1()); // 1
console.log(c1()); // 2

for (var i = 0; i < 3; i++) {
  setTimeout(() => console.log("var i:", i), 0); // prints 3,3,3
}

for (let j = 0; j < 3; j++) {
  setTimeout(() => console.log("let j:", j), 0); // prints 0,1,2
}
