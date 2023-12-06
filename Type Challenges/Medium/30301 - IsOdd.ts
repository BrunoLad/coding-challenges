/*
  30301 - IsOdd
  -------
  by jiangshan (@jiangshanmeta) #medium #string

  ### Question

  return true is a number is odd

  > View on GitHub: https://tsch.js.org/30301
*/

/* _____________ Your Code Here _____________ */
// Could've reversed the string as well
type ToCharArray<S extends string> = 
  S extends `${infer Head}${infer Tail}`
    ? [Head, ...ToCharArray<Tail>]
    : [];
type IsOdd<T extends number> =
  ToCharArray<`${T}`> extends [...infer Head, infer Tail]
    ? Tail extends `${1}` | `${3}` | `${5}` | `${7}` | `${9}`
      ? true
      : false
    : false;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<IsOdd<2023>, true>>,
  Expect<Equal<IsOdd<1453>, true>>,
  Expect<Equal<IsOdd<1926>, false>>,
  Expect<Equal<IsOdd<number>, false>>,
]
