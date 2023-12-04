/*
  19458 - SnakeCase
  -------
  by Gabriel Vergnaud (@gvergnaud) #hard #template-literal #string

  ### Question

  Create a `SnakeCase<T>` generic that turns a string formatted in **camelCase** into a string formatted in **snake_case**.

  A few examples:

  ```ts
  type res1 = SnakeCase<"hello">; // => "hello"
  type res2 = SnakeCase<"userName">; // => "user_name"
  type res3 = SnakeCase<"getElementById">; // => "get_element_by_id"
  ```

  > View on GitHub: https://tsch.js.org/19458
*/

/* _____________ Your Code Here _____________ */

type IsUpperCase<T extends string> = Lowercase<T> extends T
  ? false
  : true

type SnakeCase<T extends string> =
  T extends `${infer First}${infer Rest}`
    ? IsUpperCase<First> extends true
      ?  `_${Lowercase<First>}${SnakeCase<Rest>}`
      : `${First}${SnakeCase<Rest>}`
    : T;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'
import { ExpectFalse, NotEqual } from '@type-challenges/utils'

type cases = [
  Expect<Equal<SnakeCase<'hello'>, 'hello'>>,
  Expect<Equal<SnakeCase<'userName'>, 'user_name'>>,
  Expect<Equal<SnakeCase<'getElementById'>, 'get_element_by_id'>>,
  Expect<Equal<SnakeCase<'getElementById' | 'getElementByClassNames'>, 'get_element_by_id' | 'get_element_by_class_names'>>,
]
