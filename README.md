# Hack Null Dereference Bug

This repository demonstrates a subtle bug related to null dereferences in Hack, even when using nullable type hints.  The issue occurs when a function accepts a nullable parameter, but the type checker doesn't fully catch a potential null dereference within the function.  The provided `foo` function seems safe, but calling it with a null value leads to a runtime error.

This example highlights the importance of careful null handling in Hack, especially when working with nullable types.  The solution demonstrates a safer approach.