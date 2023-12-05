/*
  2257 - MinusOne
  -------
  by Mustafo Faiz (@fayzzzm) #medium #math

  ### Question

  Given a number (always positive) as a type. Your type should return the number decreased by one.

  For example:

  ```ts
  type Zero = MinusOne<1> // 0
  type FiftyFour = MinusOne<55> // 54
  ```

  > View on GitHub: https://tsch.js.org/2257
*/
// Works for small integers, due to large recursion, and handles empty array 0 length case
/* _____________ Your Code Here _____________ */
type BuildAnyArray<N extends number, T extends unknown[]> =
  T['length'] extends N
    ? T
    : BuildAnyArray<N, [...T, 1]>;

type MinusOne<T extends number> =
 BuildAnyArray<T, []> extends [infer X, ... infer Rest]
  ? Rest['length']
  : -1;

// Most voted solution
// type ParseInt<T extends string> = T extends `${infer Digit extends number}` ? Digit : never
// type ReverseString<S extends string> = S extends `${infer First}${infer Rest}` ? `${ReverseString<Rest>}${First}` : ''
// type RemoveLeadingZeros<S extends string> = S extends '0' ? S : S extends `${'0'}${infer R}` ? RemoveLeadingZeros<R> : S
// type InternalMinusOne<
//   S extends string
// > = S extends `${infer Digit extends number}${infer Rest}` ?
//     Digit extends 0 ?
//       `9${InternalMinusOne<Rest>}` :
//     `${[9, 0, 1, 2, 3, 4, 5, 6, 7, 8][Digit]}${Rest}`:
//   never
// type MinusOne<T extends number> = ParseInt<RemoveLeadingZeros<ReverseString<InternalMinusOne<ReverseString<`${T}`>>>>>
// type test = MinusOne<9007199254740992>


/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<MinusOne<1>, 0>>,
  Expect<Equal<MinusOne<55>, 54>>,
  Expect<Equal<MinusOne<3>, 2>>,
  Expect<Equal<MinusOne<100>, 99>>,
  Expect<Equal<MinusOne<1101>, 1100>>,
  Expect<Equal<MinusOne<0>, -1>>,
  Expect<Equal<MinusOne<9_007_199_254_740_992>, 9_007_199_254_740_991>>,
]