function foo(x: ?int): int {
  if (x == null) {
    return 0;
  }
  return x + 1;
}

function bar(): void {
  $x = null;
  echo foo($x);
}

// This will result in a runtime error, even though the type checker allows it
// because the type of $x is nullable int.