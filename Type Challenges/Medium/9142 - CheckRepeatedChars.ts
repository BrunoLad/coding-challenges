/*
  9142 - CheckRepeatedChars
  -------
  by Hong (@RThong) #medium #union #string

  ### Question

  Implement type ```CheckRepeatedChars<S>``` which will return whether type ```S``` contains duplicated chars?

  For example:

  ```ts
  type CheckRepeatedChars<'abc'>   // false
  type CheckRepeatedChars<'aba'>   // true
  ```

  > View on GitHub: https://tsch.js.org/9142
*/

/* _____________ Your Code Here _____________ */
type ToCharArray<S extends string> = 
  S extends `${infer Head}${infer Tail}`
    ? [Head, ...ToCharArray<Tail>]
    : [];
type CheckRepeatedChars<T extends string> =
  T extends `${infer Head}${infer Tail}`
    ? Head extends ToCharArray<Tail>[number]
      ? true
      : CheckRepeatedChars<Tail>
    : false;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'
import { ExpectFalse, NotEqual } from '@type-challenges/utils'

type cases = [
  Expect<Equal<CheckRepeatedChars<'abc'>, false>>,
  Expect<Equal<CheckRepeatedChars<'abb'>, true>>,
  Expect<Equal<CheckRepeatedChars<'cbc'>, true>>,
  Expect<Equal<CheckRepeatedChars<''>, false>>,
]
