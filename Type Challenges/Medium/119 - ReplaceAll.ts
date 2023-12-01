/*
  119 - ReplaceAll
  -------
  by Anthony Fu (@antfu) #medium #template-literal

  ### Question

  Implement `ReplaceAll<S, From, To>` which replace the all the substring `From` with `To` in the given string `S`

  For example

  ```ts
  type replaced = ReplaceAll<'t y p e s', ' ', ''> // expected to be 'types'
  ```

  > View on GitHub: https://tsch.js.org/119
*/

/* _____________ Your Code Here _____________ */

type ReplaceAll<S extends string, From extends string, To extends string> =
  From extends '' | null | undefined
    ? S
    : S extends `${infer Start}${From}${infer End}`
      ? `${ReplaceAll<Start, From, To>}${To}${ReplaceAll<End, From, To>}`
      : S;

// foobarfoobar
// 1st fo -ob- arfoobar
//  Recurse on fo and recurse on arfoobar (fo b arfoobar)
// arfo -ob- ar
// recurse on arfo and recurse on ar
// Previously, with ReplaceAll<`${infer Start}${To}${infer End}`, From, To>
// it would break the string into
// fo -ob- arfoobar, replace ob with b
// then would recurse on fobarfoobar and would eliminate the resulting ob that formed from
// this substitution

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<ReplaceAll<'foobar', 'bar', 'foo'>, 'foofoo'>>,
  Expect<Equal<ReplaceAll<'foobar', 'bag', 'foo'>, 'foobar'>>,
  Expect<Equal<ReplaceAll<'foobarbar', 'bar', 'foo'>, 'foofoofoo'>>,
  Expect<Equal<ReplaceAll<'t y p e s', ' ', ''>, 'types'>>,
  Expect<Equal<ReplaceAll<'foobarbar', '', 'foo'>, 'foobarbar'>>,
  Expect<Equal<ReplaceAll<'barfoo', 'bar', 'foo'>, 'foofoo'>>,
  Expect<Equal<ReplaceAll<'foobarfoobar', 'ob', 'b'>, 'fobarfobar'>>,
  Expect<Equal<ReplaceAll<'foboorfoboar', 'bo', 'b'>, 'foborfobar'>>,
  Expect<Equal<ReplaceAll<'', '', ''>, ''>>,
]