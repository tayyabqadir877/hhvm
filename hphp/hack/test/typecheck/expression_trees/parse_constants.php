<?hh

<<file:__EnableUnstableFeatures('expression_trees')>>

const int MY_CONST = 123;

class Code {}

function test(): void {
  $g = Code`1 + MY_CONST`;
}
