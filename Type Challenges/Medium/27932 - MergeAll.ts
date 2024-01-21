/*
  27932 - MergeAll
  -------
  by scarf (@scarf005) #medium #object #array #union

  ### Question

  Merge variadic number of types into a new type. If the keys overlap, its values should be merged into an union.

  For example:

  ```ts
  type Foo = { a: 1; b: 2 }
  type Bar = { a: 2 }
  type Baz = { c: 3 }

  type Result = MergeAll<[Foo, Bar, Baz]> // expected to be { a: 1 | 2; b: 2; c: 3 }
  ```

  > View on GitHub: https://tsch.js.org/27932
*/

/* _____________ Your Code Here _____________ */
// type Combine<T extends object[], K extends string> = T extends [infer Head extends object, ...infer Tail extends object[]]
//   ? {
//       [key in keyof Omit<Head, K>]: Head[key]
//     } & Combine<Tail, K>
//   : {};
// type MergeAll<T extends object[]> = Required<{
//   [key in keyof T[number]]: T[number][key]
// } & Combine<T, keyof T[number] extends string ? keyof T[number] : never>>;

type GetAllKeys<T extends object[]> = T extends [infer Head extends object, ...infer Tail extends object[]]
  ? keyof Head | GetAllKeys<Tail>
  : never;
type GetAllValuesPerKey<T extends object[], key> = T extends [infer Head extends object, ...infer Tail extends object[]]
  ? key extends keyof Head
    ? Head[key] | GetAllValuesPerKey<Tail, key>
    : GetAllValuesPerKey<Tail, key>
  : never;
type MergeAll<T extends object[]> = {
  [key in GetAllKeys<T>]: GetAllValuesPerKey<T, key>
};

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<MergeAll<[]>, {} >>,
  Expect<Equal<MergeAll<[{ a: 1 }]>, { a: 1 }>>,
  Expect<Equal<
    MergeAll<[{ a: string }, { a: string }]>,
    { a: string }
>
  >,
  Expect<Equal<
    MergeAll<[{ }, { a: string }]>,
    { a: string }
>
  >,
  Expect<Equal<
    MergeAll<[{ a: 1 }, { c: 2 }]>,
    { a: 1, c: 2 }
>
  >,
  Expect<Equal<
    MergeAll<[{ a: 1, b: 2 }, { a: 2 }, { c: 3 }]>,
    { a: 1 | 2, b: 2, c: 3 }
>
  >,
  Expect<Equal<MergeAll<[{ a: 1 }, { a: number }]>, { a: number }>>,
  Expect<Equal<MergeAll<[{ a: number }, { a: 1 }]>, { a: number }>>,
  Expect<Equal<MergeAll<[{ a: 1 | 2 }, { a: 1 | 3 }]>, { a: 1 | 2 | 3 }>>,
];
