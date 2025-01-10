const translate = require("./001_word_to_number.js");

test.each([
  ["zero", 0],
  ["one", 1],
  ["two", 2],
  ["three", 3],
  ["four", 4],
  ["five", 5],
  ["six", 6],
  ["seven", 7],
  ["eight", 8],
  ["nine", 9],
])("one digit word - %s", (w, n) => {
  expect(translate(w)).toBe(n);
});
