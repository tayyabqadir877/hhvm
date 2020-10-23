<?hh
// Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.

class A {
  <<__Policied("PUBLIC")>>
  public int $pub = 0;

  <<__Policied("PRIVATE")>>
  public int $priv = 1;
}

function f(A $a): void {
  $x = $a->priv;

  // IFC cannot analyze any of this
  for ($i = 0; $i < 10; $i++) {
    $x++;
  }

  // We still get a flow error here
  $a->pub = $x;
}
