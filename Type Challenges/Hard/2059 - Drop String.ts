/*
  2059 - Drop String
  -------
  by CaptainOfPhB (@CaptainOfPhB) #hard #template-literal #infer

  ### Question

  Drop the specified chars from a string.

  For example:

  ```ts
  type Butterfly = DropString<'foobar!', 'fb'> // 'ooar!'
  ```

  > View on GitHub: https://tsch.js.org/2059
*/

/* _____________ Your Code Here _____________ */
type RemoveChar<S extends string, C extends string> = S extends `${infer F}${infer Rest}`
  ? F extends C
    ? RemoveChar<Rest, C>
    : `${F}${RemoveChar<Rest, C>}`
  : '';
type DropString<S extends string, R extends string> = R extends ''
  ? S
  : R extends `${infer Head}${infer Tail}`
    ? DropString<RemoveChar<S, Head>, Tail>
    : S;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<DropString<'butter fly!', ''>, 'butter fly!'>>,
  Expect<Equal<DropString<'butter fly!', ' '>, 'butterfly!'>>,
  Expect<Equal<DropString<'butter fly!', 'but'>, 'er fly!'>>,
  Expect<Equal<DropString<' b u t t e r f l y ! ', 'but'>, '     e r f l y ! '>>,
  Expect<Equal<DropString<'    butter fly!        ', ' '>, 'butterfly!'>>,
  Expect<Equal<DropString<' b u t t e r f l y ! ', ' '>, 'butterfly!'>>,
  Expect<Equal<DropString<' b u t t e r f l y ! ', 'but'>, '     e r f l y ! '>>,
  Expect<Equal<DropString<' b u t t e r f l y ! ', 'tub'>, '     e r f l y ! '>>,
  Expect<Equal<DropString<' b u t t e r f l y ! ', 'b'>, '  u t t e r f l y ! '>>,
  Expect<Equal<DropString<' b u t t e r f l y ! ', 't'>, ' b u   e r f l y ! '>>,
];
