/*
  4471 - Zip
  -------
  by キリサメ qianxi (@qianxi0410) #medium #tuple

  ### Question

  In This Challenge, You should implement a type `Zip<T, U>`, T and U must be `Tuple`
  ```ts
  type exp = Zip<[1, 2], [true, false]> // expected to be [[1, true], [2, false]]
  ```

  > View on GitHub: https://tsch.js.org/4471
*/

/* _____________ Your Code Here _____________ */

type Zip<T extends readonly unknown[], U extends readonly unknown[]> =
  T extends [infer First, ...infer Rest]
    ? U extends [infer UF, ...infer RestU]
      ? [[First, UF], ...Zip<Rest, RestU>]
      : []
    : [];

// Alternatively
// type Zip<T extends any[], U extends any[]> =
// [T, U] extends [[infer L, ...infer RestT], [infer R, ...infer RestU]]
// ? [[L, R], ...Zip<RestT, RestU>]
// : [];

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<Zip<[], []>, []>>,
  Expect<Equal<Zip<[1, 2], [true, false]>, [[1, true], [2, false]]>>,
  Expect<Equal<Zip<[1, 2, 3], ['1', '2']>, [[1, '1'], [2, '2']]>>,
  Expect<Equal<Zip<[], [1, 2, 3]>, []>>,
  Expect<Equal<Zip<[[1, 2]], [3]>, [[[1, 2], 3]]>>,
]
