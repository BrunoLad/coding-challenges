/*
  89 - Required Keys
  -------
  by yituan (@yi-tuan) #hard #utils

  ### Question

  Implement the advanced util type `RequiredKeys<T>`, which picks all the required keys into a union.

  For example

  ```ts
  type Result = RequiredKeys<{ foo: number; bar?: string }>;
  // expected to be “foo”
  ```

  > View on GitHub: https://tsch.js.org/89
*/

/* _____________ Your Code Here _____________ */

type RequiredKeys<T> = keyof {
  [key in keyof T as T[key] extends Required<T>[key] ? key : never]: T[key]
};

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<RequiredKeys<{ a: number, b?: string }>, 'a'>>,
  Expect<Equal<RequiredKeys<{ a: undefined, b?: undefined }>, 'a'>>,
  Expect<Equal<RequiredKeys<{ a: undefined, b?: undefined, c: string, d: null }>, 'a' | 'c' | 'd'>>,
  Expect<Equal<RequiredKeys<{}>, never>>,
];
