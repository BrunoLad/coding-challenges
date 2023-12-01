/*
  1383 - Camelize
  -------
  by Denis (@denchiklut) #hard #union #recursion

  ### Question

  Implement Camelize which converts object from snake_case to to camelCase

  ```ts
  Camelize<{
    some_prop: string,
    prop: { another_prop: string },
    array: [{ snake_case: string }]
  }>

  // expected to be
  // {
  //   someProp: string,
  //   prop: { anotherProp: string },
  //   array: [{ snakeCase: string }]
  // }
  ```

  > View on GitHub: https://tsch.js.org/1383
*/

/* _____________ Your Code Here _____________ */

type ToCamelCase<S> = 
  S extends `${infer F}_${infer X}`
    ? `${F}${Capitalize<ToCamelCase<X>>}`
    : S;
type Camelize<T> =
T extends unknown[]
  ? T extends [infer F, ... infer Tail]
    ? [Camelize<F>, ...Camelize<Tail>]
    : [] 
  : 
{
  [key in keyof T as ToCamelCase<key>]: Camelize<T[key]>
};
// type Camelize<T> = {
//   default: {[key in keyof T as key extends string ? ToCamelCase<key> : key]: keyof T[key] extends never ? T[key] : Camelize<T[key]>},
//   array: T extends [infer Head, ...(infer Tail)] ? [Camelize<Head>, ...Camelize<Tail>] : []
// }[
//   T extends any[]
//   ? 'array'
//   /** default */
//   : 'default'
// ];

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<
    Camelize<{
      some_prop: string
      prop: { another_prop: string }
      array: [
        { snake_case: string },
        { another_element: { yet_another_prop: string } },
        { yet_another_element: string },
      ]
    }>,
    {
      someProp: string
      prop: { anotherProp: string }
      array: [
        { snakeCase: string },
        { anotherElement: { yetAnotherProp: string } },
        { yetAnotherElement: string },
      ]
    }
  >>,
]
