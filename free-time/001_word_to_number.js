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
};

function cal(w) {
  const digits = w.split(" ");

  return digits.reduce((result, d) => {
    if (oneDigit[d]) {
      return result + oneDigit[d];
    } else {
      return result * base[d];
    }
  }, 0);
}

function translate(w) {
  return oneDigit[w] !== undefined ? oneDigit[w] : cal(w);
}

module.exports = translate;
