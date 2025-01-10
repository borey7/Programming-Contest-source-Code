const oneDigit = {
  zero: 0,
  one: 1,
  two: 2,
  three: 3,
  four: 4,
  five: 5,
  six: 6,
  seven: 7,
  eight: 8,
  nine: 9,
  ten: 10,
  eleven: 11,
  twelve: 12,
  twenty: 20,
};

const base = {
  hundred: 100,
  thousand: 1000,
};

function cal(w) {
  const digits = w.split(" ");

  let sub = [],
    result = 0;

  digits.forEach((d, i) => {
    if (oneDigit[d] !== undefined) {
      result = result + oneDigit[d];

      if (i === digits.length - 1) {
        sub.push(result);
      }
    } else {
      result = result * base[d];
      sub.push(result);
      result = 0;
    }
  });

  return sub.reduce((r, e) => r + e, 0);
}

function translate(w) {
  return oneDigit[w] !== undefined ? oneDigit[w] : cal(w);
}

module.exports = translate;
