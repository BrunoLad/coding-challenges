/*
  645 - Diff
  -------
  by ZYSzys (@ZYSzys) #medium #object

  ### Question

  Get an `Object` that is the difference between `O` & `O1`

  > View on GitHub: https://tsch.js.org/645
*/

/* _____________ Your Code Here _____________ */

type Diff1<O, O1> = keyof O extends keyof O1
  ? Omit<O1, keyof O>
  : keyof O1 extends keyof O
    ? Omit<O, keyof O1>
    : Required<Omit<O1, keyof O> & Omit<O, keyof O1>>;

// Required ends up copying the resulting type to a new object type
type Diff<O extends object, O1 extends object> = Required<{
  [key in keyof O as key extends keyof O1 ? never : key]: O[key]
} & {
  [key in keyof O1 as key extends keyof O ? never : key]: O1[key]
}>

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type Foo = {
  name: string
  age: string
}
type Bar = {
  name: string
  age: string
  gender: number
}
type Coo = {
  name: string
  gender: number
}

type cases = [
  Expect<Equal<Diff<Foo, Bar>, { gender: number }>>,
  Expect<Equal<Diff<Bar, Foo>, { gender: number }>>,
  Expect<Equal<Diff<Foo, Coo>, { age: string; gender: number }>>,
  Expect<Equal<Diff<Coo, Foo>, { age: string; gender: number }>>,
]
