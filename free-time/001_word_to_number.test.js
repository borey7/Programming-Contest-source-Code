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
  ["ten", 10],
  ["eleven", 11],
  ["twelve", 12],
])("One digit word - %s: %s", (w, n) => {
  expect(translate(w)).toBe(n);
});

test.each([
  ["twenty one", 21],
  ["twenty two", 22],
])("Two digits word - %s: %s", (w, n) => {
  expect(translate(w)).toBe(n);
});

test.each([
  ["one hundred one", 101],
  ["one hundred two", 102],
  ["one hundred twenty", 120],
  ["two hundred two", 202],
  ["four hundred eleven", 411],
])("Three digits word - %s: %s", (w, n) => {
  expect(translate(w)).toBe(n);
});

test.each([
  ["three hundred twenty one", 321],
  ["five hundred twenty one", 521],
])("Four words - %s: %s", (w, n) => {
  expect(translate(w)).toBe(n);
});
